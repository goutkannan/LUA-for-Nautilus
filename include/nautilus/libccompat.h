/* 
 * This file is part of the Nautilus AeroKernel developed
 * by the Hobbes and V3VEE Projects with funding from the 
 * United States National  Science Foundation and the Department of Energy.  
 *
 * The V3VEE Project is a joint project between Northwestern University
 * and the University of New Mexico.  The Hobbes Project is a collaboration
 * led by Sandia National Laboratories that includes several national 
 * laboratories and universities. You can find out more at:
 * http://www.v3vee.org  and
 * http://xtack.sandia.gov/hobbes
 *
 * Copyright (c) 2015, Kyle C. Hale <kh@u.northwestern.edu>
 * Copyright (c) 2015, The V3VEE Project  <http://www.v3vee.org> 
 *                     The Hobbes Project <http://xstack.sandia.gov/hobbes>
 * All rights reserved.
 *
 * Author: Kyle C. Hale <kh@u.northwestern.edu>
 *
 * This is free software.  You are permitted to use,
 * redistribute, and modify it as specified in the file "LICENSE.txt".
 */
#ifndef __LIBCCOMPAT_H__
#define __LIBCCOMPAT_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <nautilus/nautilus.h>
#include <nautilus/naut_types.h>
#ifndef NAUT_CONFIG_SILENCE_UNDEF_ERR
#define UNDEF_FUN_ERR() ERROR_PRINT("Function (%s) undefined\n", __func__)
#else
#define UNDEF_FUN_ERR() 
#endif

//#define SHRT_MAX 0x7FFF
#define RAND_MAX    2147483647

typedef int clockid_t;
#define CLOCK_REALTIME                  0
#define CLOCK_MONOTONIC                 1
#define CLOCK_PROCESS_CPUTIME_ID        2
#define CLOCK_THREAD_CPUTIME_ID         3
#define CLOCK_MONOTONIC_RAW             4
#define CLOCK_REALTIME_COARSE           5
#define CLOCK_MONOTONIC_COARSE          6
#define CLOCK_BOOTTIME                  7
#define CLOCK_REALTIME_ALARM            8
#define CLOCK_BOOTTIME_ALARM            9
#define CLOCK_SGI_CYCLE                 10      /* Hardware specific */
#define CLOCK_TAI                       11

//lua
#define EOF 				0
#define EXIT_FAILURE			0
#define EXIT_SUCCESS			1

#define LC_ALL				0 
#define LC_COLLATE			0
#define LC_CTYPE			0
#define LC_MONETARY			0
#define LC_NUMERIC			0
#define LC_TIME				0
#define UCHAR_MAX			255
#define SIGINT				0
#define SIG_DFL				0

#define stdin				0
#define stdout				1
#define stderr				2


#define _JBLEN ((9 * 2) + 3 + 16)
typedef int jmp_buf[_JBLEN];
//int clock(); - better definition found later

// 
typedef long time_t;
typedef void FILE;
typedef uint64_t off_t;
typedef long int clock_t;
typedef int nl_item;
typedef unsigned long int nfds_t;
typedef __SIZE_TYPE__ size_t;
struct pollfd {
    int fd;
    short events;
    short revents;
};

//lua
typedef void* locale_t;

struct timespec {
    time_t tv_sec;
    long tv_nsec;
};

struct tm {
int    tm_sec ;  
int    tm_min ;
int    tm_hour;
int    tm_mday;
int    tm_mon;
int    tm_year;
int    tm_wday;
int    tm_yday;
int    tm_isdst;
};

#define SEEK_END  0

#define SEEK_CUR  1
#define SEEK_SET  2
#define _IOFBF  0               /* setvbuf should set fully buffered */
#define _IOLBF  1               /* setvbuf should set line buffered */
#define _IONBF  2               /* setvbuf should set unbuffered */
#define L_tmpnam	1024
#define CLOCKS_PER_SEC	1000000l /* found from time.h*/
#ifdef LIBCCOMPAT
extern int errno;
#else 
extern int errno;
#endif 
/*
typedef struct { unsigned long int _val[1024/(8 *sizeof (unsigned long int))];
} __sigset_t; 
struct __jmp_buf_tag { 
	long long int __jmpbuf;
	int __mask_was_saved;
	__sigset_t __saved_mask;
};
typedef struct __jmp_buf_tag jmp_buf[1]; 
*/
void longjmp(int *,int __val);
int setjmp(int *);


//end lua

time_t time(time_t * timer);
void abort(void);
int __popcountdi2(long long a);
void exit(int status);
int clock_gettime(clockid_t, struct timespec*);
void __assert_fail(const char*, const char*, unsigned, const char*);
int vfprintf(FILE*, const char*, va_list);
int rand(void);
void srand(unsigned int seed);
void srand48(long int seedval);
long int lrand48(void);
double drand48(void);
char * strerror(int);

int fclose(FILE*);
#ifndef LIB_LUA
FILE * fopen(const char*, FILE*); // Default signature is fopen(cont*,cont*)
#else
FILE *fopen(const char *restrict filename, const char *restrict mode);
#endif
FILE *tmpfile(void);
FILE * fopen64(const char*, FILE*);
FILE *fdopen(int fd, const char *mode);
int fflush(FILE *p);
int fprintf(FILE*, const char*, ...);
int fputc(int, FILE*);
int fputs(const char*, FILE*);
size_t fwrite(const void*, size_t, size_t, FILE*);
size_t fread(void * ptr, size_t size, size_t count, FILE * stream);
int getwc(FILE * stream);
size_t __ctype_get_mb_cur_max(void);
int fseeko64(FILE *fp, uint64_t offset, int whence);
int ungetc(int character, FILE * stream);
uint64_t lseek64(int fd, uint64_t offset, int whence);
uint64_t ftello64(FILE *stream);
int poll (struct pollfd *fds, nfds_t nfds, int timeout);
int ioctl(int d, unsigned long request, ...);
int syscall(int number, ...);
char *setlocale(int category, const char *locale);
locale_t __duplocale(locale_t locobj);
char * bindtextdomain (const char * domainname, const char * dirname);
char * textdomain (const char * domainname);
locale_t __newlocale(int category_mask, const char *locale,locale_t base);
char *__nl_langinfo_l(nl_item item, locale_t locale);
char * gettext(const char * msgid);

int printf(const char *, ...);
//Goutham - Adding locale for lua 
void *realloc(void *ptr, size_t size);
int feof(FILE*);
int getc(FILE*);

char *fgets(char *restrict s, int n, FILE *restrict stream); 
FILE *freopen(const char *fname, const char *mode,FILE *stream);

int ferror(FILE *);
long     ftell(FILE *);
int fscanf(FILE *restrict stream, const char *restrict format, ... );
void clearerr(FILE *stream); 

int fseek(FILE *stream, long offset, int whence); 

int setvbuf(FILE *restrict stream, char *restrict buf, int type,
       size_t size);

int system(const char *command);

char *getenv(const char *name);

int rename(const char *old, const char *new);

int remove(const char *path);

char *tmpnam(char *s);

clock_t clock(void);
// End Lua
//#define GEN_HDR(x) int x (void);

#define GEN_HDR(x) int x (void);

struct lconv *localeconv(void);

double pow(double x, double y);

//LUA
double difftime(time_t time1, time_t time2);
void *memchr(const void *str, int c, size_t n);
double fabs(double __x);
double atan(double __x);
double atan2(double y, double x);
double fmod(double y, double x);
double modf(double y, double *x);
double frexp(double x, int *e);
double ldexp(double x, int exp);
double strtod(const char *str, char **endptr);
double abs(double x);
double sin(double x);
double sinh(double x);
double cos(double x);
double cosh(double x);
double tan(double x);
double tanh(double x);
double asin(double x);
double acos(double x);
double ceil(double x);
double floor(double x);
double sqrt(double x);
double pow(double x, double y);
double log(double x);
double log10(double x);
double exp(double x);


GEN_HDR(writev)
GEN_HDR(ungetwc)
GEN_HDR(__errno_location)
GEN_HDR(write)
GEN_HDR(wcrtomb)
GEN_HDR(mbrtowc)
//GEN_HDR(getc) 
GEN_HDR(__iswctype_l)
GEN_HDR(wcslen)
GEN_HDR(__strtof_l)
//GEN_HDR(stderr)
GEN_HDR(wmemset)
//GEN_HDR(stdin)
GEN_HDR(fileno)
GEN_HDR(__fxstat64)
GEN_HDR(putc)
GEN_HDR(__wcscoll_l)
GEN_HDR(__towlower_l)
GEN_HDR(wctob)
GEN_HDR(mbsrtowcs)
GEN_HDR(read)
GEN_HDR(wmemmove)
GEN_HDR(__strxfrm_l)
GEN_HDR(wmemchr)
GEN_HDR(__freelocale)
GEN_HDR(__wcsftime_l)
GEN_HDR(wmemcpy)
GEN_HDR(putwc)
GEN_HDR(__stack_chk_fail)
GEN_HDR(__wcsxfrm_l)
GEN_HDR(wcscmp)
GEN_HDR(wcsnrtombs)
GEN_HDR(__strcoll_l)
//GEN_HDR(stdout)
GEN_HDR(btowc)
//GEN_HDR(memchr)
GEN_HDR(strtold_l)
GEN_HDR(wmemcmp)
GEN_HDR(__strtod_l)
//GEN_HDR(setvbuf) - Implmented above 
GEN_HDR(__wctype_l)
GEN_HDR(__towupper_l)
GEN_HDR(__uselocale)
GEN_HDR(__strftime_l)
GEN_HDR(mbsnrtowcs)
GEN_HDR(pthread_mutex_init)
GEN_HDR(pthread_mutex_unlock)
GEN_HDR(pthread_mutex_lock)
#ifdef __cplusplus
}
#endif

#endif
