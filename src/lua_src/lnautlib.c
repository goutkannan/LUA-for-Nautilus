#include <nautilus/naut_types.h> 
#include <nautilus/libccompat.h>
#include <nautilus/math.h>
#define lmathlib_c
#define LUA_LIB
#include "lua/lua.h"
#include "lua/lauxlib.h"
#include "lua/lualib.h"
#include "lua/luaconf.h"

extern int strncasecmp(const char *, const char *, long unsigned int);
extern int getc(void *);
extern struct mem_region * nk_get_base_region_by_num(unsigned int);
extern struct rb_node * nk_rb_next(struct rb_node *);
extern double fmodnew(int, int);
extern int fclose(void *);
extern void * freopen(const char *, const char *, void *);
extern struct nk_virtual_console * nk_create_vc(char *);
extern void * mb_get_first_hrt_addr(long unsigned int);
extern struct rb_node * nk_rb_first(struct rb_root *);
extern double sqrt(double);
extern long long int simple_strtoll(const char *, char * *, unsigned int);
extern long unsigned int simple_strtoul(const char *, char * *, unsigned int);
extern int nk_thread_queue_sleep(struct nk_queue *);
extern struct nk_queue_entry * nk_dequeue_entry_atomic(struct nk_queue *, struct nk_queue_entry *);
extern long unsigned int lseek64(int, long unsigned int, int);
extern long int strtol(const char *, char * *, int);
extern int fputc(int, void *);
extern struct nk_queue_entry * nk_dequeue_first_atomic(struct nk_queue *);
extern int strtoi(const char *, char * *);
extern double strtod(const char *, char * *);
extern int nk_condvar_destroy(struct nk_condvar *);
extern int nk_vc_setattr_specific(struct nk_virtual_console *, unsigned char);
extern double frexp(double, int *);
extern int fputs(const char *, void *);
extern unsigned int nk_htable_count(struct nk_hashtable *);
extern long unsigned int strtox(const char *, char * *);
extern void * realloc(void *, long unsigned int);
extern int strict_strtoul(const char *, unsigned int, long unsigned int *);
extern int nk_enqueue_keycode(struct nk_virtual_console *, short unsigned int);
extern int smp_xcall(unsigned int);
extern int kbd_init(struct naut_info *);
extern int ischar(unsigned char *);
extern int nk_vc_display_char_specific(struct nk_virtual_console *, unsigned char, unsigned char, unsigned char, unsigned char);
extern double ceil(double);
extern struct multiboot_info * multiboot_parse(long unsigned int, long unsigned int);
extern char * strsep(char * *, const char *);
extern int arch_numa_init(struct sys_info *);
extern long unsigned int msr_read(unsigned int);
extern int nk_tls_key_create(unsigned int *);
extern int strcoll(const char *, const char *);
extern int nk_vc_gets(char *, int, int);
extern int nk_vc_scrollup_specific(struct nk_virtual_console *);
extern long unsigned int strnlen(const char *, long unsigned int);
extern struct buddy_mempool * buddy_init(long unsigned int, long unsigned int, long unsigned int);
extern char * strstr(const char *, const char *);
extern int strict_strtoll(const char *, unsigned int, long long int *);
extern int nk_vc_print(char *);
extern void * memmove(void *);
extern double tanh(double);
extern short unsigned int nk_dequeue_scancode(struct nk_virtual_console *);
extern unsigned int multiboot_get_size(long unsigned int);
extern double modf(double, double *);
extern int nk_release_vc(struct nk_thread *);
extern struct mem_map_entry * mm_boot_get_region(unsigned int);
extern int strcmp(const char *, const char *);
extern int nk_vc_clear_specific(struct nk_virtual_console *, unsigned char);
extern int strncmp(const char *, const char *, long unsigned int);
extern int clock_gettime(int, struct timespec *);
extern int vsscanf(const char *, const char *, struct __va_list_tag *);
extern struct nk_queue_entry * nk_dequeue_first(struct nk_queue *);
extern int snprintf(char *, long unsigned int, const char *);
extern int nk_map_page(long unsigned int, long unsigned int, long unsigned int);
extern int nk_condvar_init(struct nk_condvar *);
extern char * strcat(char *, const char *);
extern int xm_handler(struct excp_entry_state *, long unsigned int);
extern double cosh(double);
extern int pci_init(struct naut_info *);
extern int remove(const char *);
extern int nk_thread_queue_wake_one(struct nk_queue *);
extern char * fgets(char *, int, void *);
extern int i8254_init(struct naut_info *);
extern int fflush(void *);
extern int nk_htable_iter_remove(struct nk_hashtable_iter *, int);
extern char * strchr(const char *, int);
extern double asin(double);
extern void * fopen(const char *, void *);
extern int getwc(void *);
extern int nk_enqueue_scancode(struct nk_virtual_console *, short unsigned int);
extern long unsigned int multiboot_get_sys_ram(long unsigned int);
extern void * __mm_boot_alloc(long unsigned int, long unsigned int, long unsigned int);
extern long unsigned int nk_htable_remove(struct nk_hashtable *, long unsigned int, int);
extern long int ftell(void *);
extern double abs(double);
extern int sprintf(char *, const char *);
extern int null_excp_handler(struct excp_entry_state *, long unsigned int, long unsigned int);
extern char * strrchr(const char *, int);
extern int nk_pf_handler(struct excp_entry_state *, long unsigned int, long unsigned int);
extern long unsigned int read_event_count(struct pmc_event *);
extern double fmod(double, double);
extern long unsigned int strcspn(const char *, const char *);
extern int vscnprintf(char *, long unsigned int, const char *, struct __va_list_tag *);
extern int ferror(void *);
extern int nk_thread_queue_wake_all(struct nk_queue *);
extern int nk_htable_dec(struct nk_hashtable *, long unsigned int, long unsigned int);
extern int arch_early_init(struct naut_info *);
extern struct tm * gmtime(const long int *);
extern int nk_condvar_bcast(struct nk_condvar *);
extern double sinh(double);
extern int nk_vc_puts(char *);
extern int null_irq_handler(struct excp_entry_state *, long unsigned int);
extern int register_irq_handler(short unsigned int);
extern int nk_timer_init(struct naut_info *);
extern double cos(double);
extern int vsnprintf(char *, long unsigned int, const char *, struct __va_list_tag *);
extern int nk_bind_vc(struct nk_thread *, struct nk_virtual_console *);
extern int nk_htable_iter_search(struct nk_hashtable_iter *, struct nk_hashtable *, long unsigned int);
extern int nk_vc_printf(char *);
extern int strict_strtol(const char *, unsigned int, long int *);
extern char * strcpy(char *, const char *);
extern short unsigned int nk_vc_get_scancode(int);
extern double acos(double);
extern long unsigned int strftime(char *, long unsigned int, const char *, const struct tm *);
extern int nk_int_init(struct sys_info *);
extern int mb_is_hrt_environ(long unsigned int);
extern int mf_handler(struct excp_entry_state *, long unsigned int);
extern int nk_barrier_destroy(struct nk_barrier *);
extern char * setlocale(int, const char *);
extern double pow(double, double);
extern int nk_timer_handler(struct excp_entry_state *, long unsigned int);
extern int nk_thread_run(void *);
extern double ldexp(double, int);
extern int nk_vc_handle_input(short unsigned int);
extern int smp_setup_xcall_bsp(struct cpu *);
extern int printf(const char *);
extern int scnprintf(char *, long unsigned int, const char *);
extern int early_printk(const char *, struct __va_list_tag *);
extern int printk(const char *);
extern int poll(struct pollfd *, long unsigned int, int);
extern char * strncpy(char *, const char *, long unsigned int);
extern int nk_map_page_nocache(long unsigned int, long unsigned int);
extern unsigned int apic_wait_for_send(struct apic_dev *);
extern int apic_get_maxlvt(struct apic_dev *);
extern double log(double);
extern long int mktime(struct tm *);
extern void * fdopen(int, const char *);
extern void * mm_boot_alloc(long unsigned int);
extern int system(const char *);
extern int nk_htable_change(struct nk_hashtable *, long unsigned int, long unsigned int, int);
extern struct nk_hashtable_iter * nk_create_htable_iter(struct nk_hashtable *);
extern int smp_early_init(struct naut_info *);
extern int strict_strtoull(const char *, unsigned int, long long unsigned int *);
extern double log10(double);
extern long unsigned int nk_detect_cpu_freq(unsigned int);
extern char * __nl_langinfo_l(int, void *);
extern long unsigned int atox(const char *);
extern void * memset(void *, char, long unsigned int);
extern long unsigned int ftello64(void *);
extern int nk_barrier_init(struct nk_barrier *, unsigned int);
extern int vprintk(const char *, struct __va_list_tag *);
extern int nk_join(void *, void * *);
extern char * getenv(const char *);
extern int atoi(const char *);
extern int vfprintf(void *, const char *, struct __va_list_tag *);
extern struct nk_queue_entry * nk_dequeue_entry(struct nk_queue_entry *);
extern int nk_rwlock_rd_lock(struct nk_rwlock *);
extern long unsigned int nk_hash_long(long unsigned int, unsigned int);
extern char * strdup(const char *);
extern int nk_htable_inc(struct nk_hashtable *, long unsigned int, long unsigned int);
extern struct rb_node * nk_rb_prev(struct rb_node *);
extern int nk_rwlock_wr_lock(struct nk_rwlock *);
extern int fseeko64(void *, long unsigned int, int);
extern int fscanf(void *, const char *);
extern char * strerror(int);
extern int __popcountdi2(long long int);
extern void * buddy_alloc(struct buddy_mempool *, long unsigned int);
extern long unsigned int strspn(const char *, const char *);
extern int nk_vc_getchar_extended(int);
extern int ungetc(int, void *);
extern int mm_boot_init(long unsigned int);
extern struct tm * localtime(const long int *);
extern int vsprintf(char *, const char *, struct __va_list_tag *);
extern int nk_vc_log(char *);
extern int rename(const char *, const char *);
extern struct rb_node * nk_rb_last(struct rb_root *);
extern void * malloc(long unsigned int);
extern int sscanf(const char *, const char *);
extern int nk_switch_to_vc(struct nk_virtual_console *);
extern int syscall(int);
extern long unsigned int fread(void *, long unsigned int, long unsigned int, void *);
extern int Format_Output(struct Output_Sink *, const char *, struct __va_list_tag *);
extern long unsigned int nk_htable_get_iter_key(struct nk_hashtable_iter *);
extern long unsigned int nk_hash_buffer(unsigned char *, unsigned int);
extern int fprintf(void *, const char *);
extern void * __newlocale(int, const char *, void *);
extern short unsigned int kbd_translate(short unsigned int);
extern char * bindtextdomain(const char *, const char *);
extern int feof(void *);
extern double tan(double);
extern int nk_rand_init(struct cpu *);
extern void * mm_boot_alloc_aligned(long unsigned int, long unsigned int);
extern char * strncat(char *, const char *, long unsigned int);
extern int nk_cpu_topo_discover(struct cpu *);
extern int fseek(void *, long int, int);
extern int nk_vc_setpos_specific(struct nk_virtual_console *, unsigned char, unsigned char);
extern short unsigned int nk_vc_get_keycode(int);
extern double floor(double);
extern char * tmpnam(char *);
extern struct nk_hashtable * nk_create_htable(unsigned int);
extern char * gettext(const char *);
extern long unsigned int multiboot_get_phys_mem(long unsigned int);
extern int smp_bringup_aps(struct naut_info *);
extern int apic_read_timer(struct apic_dev *);
extern int nk_destroy_vc(struct nk_virtual_console *);
extern int ioapic_init(struct sys_info *);
extern void * nk_launch_shell(char *, int);
extern struct mem_region * nk_get_base_region_by_cpu(unsigned int);
extern int nk_barrier_wait(struct nk_barrier *);
extern double sin(double);
extern int nk_rwlock_wr_unlock(struct nk_rwlock *);
extern struct mem_region * kmem_get_region_by_addr(long unsigned int);
extern double atan(double);
extern long long unsigned int simple_strtoull(const char *, char * *, unsigned int);
extern void * fopen64(const char *, void *);
extern long unsigned int nk_htable_get_iter_value(struct nk_hashtable_iter *);
extern int ioctl(int, long unsigned int);
extern long unsigned int nk_htable_search(struct nk_hashtable *, long unsigned int);
extern int register_int_handler(short unsigned int);
extern int strcasecmp(const char *, const char *);
extern int nk_tls_key_delete(unsigned int);
extern int nk_rwlock_rd_unlock(struct nk_rwlock *);
extern void * __duplocale(void *);
extern double fabs(double);
extern int nk_htable_insert(struct nk_hashtable *, long unsigned int, long unsigned int);
extern double difftime(long int, long int);
extern short unsigned int nk_dequeue_keycode(struct nk_virtual_console *);
extern double atan2(double, double);
extern char * textdomain(const char *);
extern double exp(double);
extern long int time(long int *);
extern int nk_htable_iter_advance(struct nk_hashtable_iter *);
extern int setvbuf(void *, char *, int, long unsigned int);

static int naut_strncasecmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	int temp_return =strncasecmp(s1 ,s2 ,limit);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_getc(lua_State *L){
	void * arg = luaL_checkunsigned(L,1);
	int temp_return =getc(arg);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_get_base_region_by_num(lua_State *L){
	unsigned int num = luaL_checkunsigned(L,1);
	struct mem_region * temp_return =nk_get_base_region_by_num(num);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct rb_node ;

static int naut_nk_rb_next(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	struct rb_node * temp_return =nk_rb_next(node);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fmodnew(lua_State *L){
	int y = luaL_checkint(L,1);
	int x = luaL_checkint(L,2);
	double temp_return =fmodnew(y ,x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fclose(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	int temp_return =fclose(f);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_freopen(lua_State *L){
	const char * fname = luaL_checkstring(L,1);
	const char * mode = luaL_checkstring(L,2);
	void * stream = luaL_checkunsigned(L,3);
	void * temp_return =freopen(fname ,mode ,stream);
	return 1; 
}
static int naut_nk_create_vc(lua_State *L){
	char * name = luaL_checkstring(L,1);
	struct nk_virtual_console * temp_return =nk_create_vc(name);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_mb_get_first_hrt_addr(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	void * temp_return =mb_get_first_hrt_addr(mbd);
	return 1; 
}
struct rb_root ;

static int naut_nk_rb_first(lua_State *L){
	struct rb_root * root = luaL_checkunsigned(L,1);
	struct rb_node * temp_return =nk_rb_first(root);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_sqrt(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =sqrt(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_simple_strtoll(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	long long int temp_return =simple_strtoll(cp ,endp ,base);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_simple_strtoul(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	long unsigned int temp_return =simple_strtoul(cp ,endp ,base);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

static int naut_nk_thread_queue_sleep(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	int temp_return =nk_thread_queue_sleep(q);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

struct nk_queue_entry ;

static int naut_nk_dequeue_entry_atomic(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	struct nk_queue_entry * entry = luaL_checkunsigned(L,2);
	struct nk_queue_entry * temp_return =nk_dequeue_entry_atomic(q ,entry);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_lseek64(lua_State *L){
	int fd = luaL_checkint(L,1);
	long unsigned int offset = luaL_checkunsigned(L,2);
	int whence = luaL_checkint(L,3);
	long unsigned int temp_return =lseek64(fd ,offset ,whence);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strtol(lua_State *L){
	const char * str = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	int base = luaL_checkint(L,3);
	long int temp_return =strtol(str ,endptr ,base);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fputc(lua_State *L){
	int c = luaL_checkint(L,1);
	void * f = luaL_checkunsigned(L,2);
	int temp_return =fputc(c ,f);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

static int naut_nk_dequeue_first_atomic(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	struct nk_queue_entry * temp_return =nk_dequeue_first_atomic(q);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strtoi(lua_State *L){
	const char * nptr = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	int temp_return =strtoi(nptr ,endptr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strtod(lua_State *L){
	const char * string = luaL_checkstring(L,1);
	char * * endPtr = luaL_checkstring(L,2);
	double temp_return =strtod(string ,endPtr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_condvar ;

static int naut_nk_condvar_destroy(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	int temp_return =nk_condvar_destroy(c);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_vc_setattr_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	unsigned char attr = luaL_checkunsigned(L,2);
	int temp_return =nk_vc_setattr_specific(vc ,attr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_frexp(lua_State *L){
	double x = luaL_checknumber(L,1);
	int * e = luaL_checkint(L,2);
	double temp_return =frexp(x ,e);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fputs(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	void * stream = luaL_checkunsigned(L,2);
	int temp_return =fputs(s ,stream);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_count(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	unsigned int temp_return =nk_htable_count(htable);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strtox(lua_State *L){
	const char * nptr = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	long unsigned int temp_return =strtox(nptr ,endptr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_realloc(lua_State *L){
	void * ptr = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	void * temp_return =realloc(ptr ,size);
	return 1; 
}
static int naut_strict_strtoul(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long unsigned int * res = luaL_checkunsigned(L,3);
	int temp_return =strict_strtoul(cp ,base ,res);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_enqueue_keycode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int key = luaL_checkunsigned(L,2);
	int temp_return =nk_enqueue_keycode(vc ,key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_smp_xcall(lua_State *L){
	unsigned int cpu_id = luaL_checkunsigned(L,1);
	int temp_return =smp_xcall(cpu_id);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_kbd_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =kbd_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ischar(lua_State *L){
	unsigned char * str = luaL_checkstring(L,1);
	int temp_return =ischar(str);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_vc_display_char_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	unsigned char c = luaL_checkunsigned(L,2);
	unsigned char attr = luaL_checkunsigned(L,3);
	unsigned char x = luaL_checkunsigned(L,4);
	unsigned char y = luaL_checkunsigned(L,5);
	int temp_return =nk_vc_display_char_specific(vc ,c ,attr ,x ,y);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ceil(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =ceil(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_multiboot_parse(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int magic = luaL_checkunsigned(L,2);
	struct multiboot_info * temp_return =multiboot_parse(mbd ,magic);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strsep(lua_State *L){
	char * * s = luaL_checkstring(L,1);
	const char * ct = luaL_checkstring(L,2);
	char * temp_return =strsep(s ,ct);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct sys_info ;

static int naut_arch_numa_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	int temp_return =arch_numa_init(sys);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_msr_read(lua_State *L){
	unsigned int msr = luaL_checkunsigned(L,1);
	long unsigned int temp_return =msr_read(msr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_tls_key_create(lua_State *L){
	unsigned int * key = luaL_checkunsigned(L,1);
	int temp_return =nk_tls_key_create(key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcoll(lua_State *L){
	const char * str1 = luaL_checkstring(L,1);
	const char * str2 = luaL_checkstring(L,2);
	int temp_return =strcoll(str1 ,str2);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_gets(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	int n = luaL_checkint(L,2);
	int display = luaL_checkint(L,3);
	int temp_return =nk_vc_gets(buf ,n ,display);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_vc_scrollup_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	int temp_return =nk_vc_scrollup_specific(vc);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strnlen(lua_State *L){
	const char * str = luaL_checkstring(L,1);
	long unsigned int max = luaL_checkunsigned(L,2);
	long unsigned int temp_return =strnlen(str ,max);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_buddy_init(lua_State *L){
	long unsigned int base_addr = luaL_checkunsigned(L,1);
	long unsigned int pool_order = luaL_checkunsigned(L,2);
	long unsigned int min_order = luaL_checkunsigned(L,3);
	struct buddy_mempool * temp_return =buddy_init(base_addr ,pool_order ,min_order);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strstr(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	char * temp_return =strstr(s1 ,s2);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_strict_strtoll(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long long int * res = luaL_checkint(L,3);
	int temp_return =strict_strtoll(cp ,base ,res);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_print(lua_State *L){
	char * s = luaL_checkstring(L,1);
	int temp_return =nk_vc_print(s);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_memmove(lua_State *L){
	void * dst = luaL_checkunsigned(L,1);
	void * temp_return =memmove(dst);
	return 1; 
}
static int naut_tanh(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =tanh(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_dequeue_scancode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int temp_return =nk_dequeue_scancode(vc);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_multiboot_get_size(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	unsigned int temp_return =multiboot_get_size(mbd);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_modf(lua_State *L){
	double y = luaL_checknumber(L,1);
	double * x = luaL_checknumber(L,2);
	double temp_return =modf(y ,x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_thread ;

static int naut_nk_release_vc(lua_State *L){
	struct nk_thread * thread = luaL_checkunsigned(L,1);
	int temp_return =nk_release_vc(thread);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_mm_boot_get_region(lua_State *L){
	unsigned int i = luaL_checkunsigned(L,1);
	struct mem_map_entry * temp_return =mm_boot_get_region(i);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	int temp_return =strcmp(s1 ,s2);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_vc_clear_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	unsigned char attr = luaL_checkunsigned(L,2);
	int temp_return =nk_vc_clear_specific(vc ,attr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strncmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	int temp_return =strncmp(s1 ,s2 ,limit);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct timespec ;

static int naut_clock_gettime(lua_State *L){
	int clk_id = luaL_checkint(L,1);
	struct timespec * tp = luaL_checkunsigned(L,2);
	int temp_return =clock_gettime(clk_id ,tp);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vsscanf(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	struct __va_list_tag * args = luaL_checkunsigned(L,3);
	int temp_return =vsscanf(buf ,fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

static int naut_nk_dequeue_first(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	struct nk_queue_entry * temp_return =nk_dequeue_first(q);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_snprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	int temp_return =snprintf(buf ,size ,fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_map_page(lua_State *L){
	long unsigned int vaddr = luaL_checkunsigned(L,1);
	long unsigned int paddr = luaL_checkunsigned(L,2);
	long unsigned int flags = luaL_checkunsigned(L,3);
	int temp_return =nk_map_page(vaddr ,paddr ,flags);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_condvar ;

static int naut_nk_condvar_init(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	int temp_return =nk_condvar_init(c);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcat(lua_State *L){
	char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	char * temp_return =strcat(s1 ,s2);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_xm_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	int temp_return =xm_handler(excp ,vec);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_cosh(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =cosh(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_pci_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =pci_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_remove(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	int temp_return =remove(path);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

static int naut_nk_thread_queue_wake_one(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	int temp_return =nk_thread_queue_wake_one(q);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fgets(lua_State *L){
	char * str = luaL_checkstring(L,1);
	int n = luaL_checkint(L,2);
	void * stream = luaL_checkunsigned(L,3);
	char * temp_return =fgets(str ,n ,stream);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_i8254_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =i8254_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fflush(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	int temp_return =fflush(f);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable_iter ;

static int naut_nk_htable_iter_remove(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	int free_key = luaL_checkint(L,2);
	int temp_return =nk_htable_iter_remove(iter ,free_key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strchr(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	int c = luaL_checkint(L,2);
	char * temp_return =strchr(s ,c);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_asin(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =asin(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fopen(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	void * f = luaL_checkunsigned(L,2);
	void * temp_return =fopen(path ,f);
	return 1; 
}
static int naut_getwc(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	int temp_return =getwc(stream);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_enqueue_scancode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int scan = luaL_checkunsigned(L,2);
	int temp_return =nk_enqueue_scancode(vc ,scan);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_multiboot_get_sys_ram(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int temp_return =multiboot_get_sys_ram(mbd);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut___mm_boot_alloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	long unsigned int align = luaL_checkunsigned(L,2);
	long unsigned int goal = luaL_checkunsigned(L,3);
	void * temp_return =__mm_boot_alloc(size ,align ,goal);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_remove(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	int free_key = luaL_checkint(L,3);
	long unsigned int temp_return =nk_htable_remove(htable ,key ,free_key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ftell(lua_State *L){
	void * x = luaL_checkunsigned(L,1);
	long int temp_return =ftell(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_abs(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =abs(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_sprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	int temp_return =sprintf(buf ,fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_null_excp_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	long unsigned int fault_addr = luaL_checkunsigned(L,3);
	int temp_return =null_excp_handler(excp ,vector ,fault_addr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strrchr(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	int c = luaL_checkint(L,2);
	char * temp_return =strrchr(s ,c);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_nk_pf_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	long unsigned int fault_addr = luaL_checkunsigned(L,3);
	int temp_return =nk_pf_handler(excp ,vector ,fault_addr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct pmc_event ;

static int naut_read_event_count(lua_State *L){
	struct pmc_event * event = luaL_checkunsigned(L,1);
	long unsigned int temp_return =read_event_count(event);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fmod(lua_State *L){
	double y = luaL_checknumber(L,1);
	double x = luaL_checknumber(L,2);
	double temp_return =fmod(y ,x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcspn(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	const char * reject = luaL_checkstring(L,2);
	long unsigned int temp_return =strcspn(s ,reject);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vscnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	struct __va_list_tag * args = luaL_checkunsigned(L,4);
	int temp_return =vscnprintf(buf ,size ,fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ferror(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	int temp_return =ferror(f);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue ;

static int naut_nk_thread_queue_wake_all(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	int temp_return =nk_thread_queue_wake_all(q);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_dec(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	int temp_return =nk_htable_dec(htable ,key ,value);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_arch_early_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =arch_early_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_gmtime(lua_State *L){
	const long int * timer = luaL_checkint(L,1);
	struct tm * temp_return =gmtime(timer);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_condvar ;

static int naut_nk_condvar_bcast(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	int temp_return =nk_condvar_bcast(c);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_sinh(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =sinh(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_puts(lua_State *L){
	char * s = luaL_checkstring(L,1);
	int temp_return =nk_vc_puts(s);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_null_irq_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	int temp_return =null_irq_handler(excp ,vector);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_register_irq_handler(lua_State *L){
	short unsigned int irq = luaL_checkunsigned(L,1);
	int temp_return =register_irq_handler(irq);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_nk_timer_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =nk_timer_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_cos(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =cos(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vsnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	struct __va_list_tag * args = luaL_checkunsigned(L,4);
	int temp_return =vsnprintf(buf ,size ,fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_thread ;

struct nk_virtual_console ;

static int naut_nk_bind_vc(lua_State *L){
	struct nk_thread * thread = luaL_checkunsigned(L,1);
	struct nk_virtual_console * cons = luaL_checkunsigned(L,2);
	int temp_return =nk_bind_vc(thread ,cons);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable_iter ;

struct nk_hashtable ;

static int naut_nk_htable_iter_search(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	struct nk_hashtable * htable = luaL_checkunsigned(L,2);
	long unsigned int key = luaL_checkunsigned(L,3);
	int temp_return =nk_htable_iter_search(iter ,htable ,key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_printf(lua_State *L){
	char * fmt = luaL_checkstring(L,1);
	int temp_return =nk_vc_printf(fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strict_strtol(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long int * res = luaL_checkint(L,3);
	int temp_return =strict_strtol(cp ,base ,res);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcpy(lua_State *L){
	char * dest = luaL_checkstring(L,1);
	const char * src = luaL_checkstring(L,2);
	char * temp_return =strcpy(dest ,src);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_nk_vc_get_scancode(lua_State *L){
	int wait = luaL_checkint(L,1);
	short unsigned int temp_return =nk_vc_get_scancode(wait);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_acos(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =acos(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
const struct tm ;

static int naut_strftime(lua_State *L){
	char * str = luaL_checkstring(L,1);
	long unsigned int maxsize = luaL_checkunsigned(L,2);
	const char * format = luaL_checkstring(L,3);
	long unsigned int temp_return =strftime(str ,maxsize ,format ,timeptr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct sys_info ;

static int naut_nk_int_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	int temp_return =nk_int_init(sys);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_mb_is_hrt_environ(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	int temp_return =mb_is_hrt_environ(mbd);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_mf_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	int temp_return =mf_handler(excp ,vec);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_barrier ;

static int naut_nk_barrier_destroy(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	int temp_return =nk_barrier_destroy(barrier);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_setlocale(lua_State *L){
	int category = luaL_checkint(L,1);
	const char * locale = luaL_checkstring(L,2);
	char * temp_return =setlocale(category ,locale);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_pow(lua_State *L){
	double x = luaL_checknumber(L,1);
	double y = luaL_checknumber(L,2);
	double temp_return =pow(x ,y);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct excp_entry_state ;

static int naut_nk_timer_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	int temp_return =nk_timer_handler(excp ,vec);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_thread_run(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	int temp_return =nk_thread_run(t);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ldexp(lua_State *L){
	double x = luaL_checknumber(L,1);
	int exp = luaL_checkint(L,2);
	double temp_return =ldexp(x ,exp);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_handle_input(lua_State *L){
	short unsigned int scan = luaL_checkunsigned(L,1);
	int temp_return =nk_vc_handle_input(scan);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct cpu ;

static int naut_smp_setup_xcall_bsp(lua_State *L){
	struct cpu * core = luaL_checkunsigned(L,1);
	int temp_return =smp_setup_xcall_bsp(core);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_printf(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	int temp_return =printf(s);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_scnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	int temp_return =scnprintf(buf ,size ,fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_early_printk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	struct __va_list_tag * args = luaL_checkunsigned(L,2);
	int temp_return =early_printk(fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_printk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	int temp_return =printk(fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct pollfd ;

static int naut_poll(lua_State *L){
	struct pollfd * fds = luaL_checkunsigned(L,1);
	long unsigned int nfds = luaL_checkunsigned(L,2);
	int timeout = luaL_checkint(L,3);
	int temp_return =poll(fds ,nfds ,timeout);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strncpy(lua_State *L){
	char * dest = luaL_checkstring(L,1);
	const char * src = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	char * temp_return =strncpy(dest ,src ,limit);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_nk_map_page_nocache(lua_State *L){
	long unsigned int paddr = luaL_checkunsigned(L,1);
	long unsigned int flags = luaL_checkunsigned(L,2);
	int temp_return =nk_map_page_nocache(paddr ,flags);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct apic_dev ;

static int naut_apic_wait_for_send(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	unsigned int temp_return =apic_wait_for_send(apic);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct apic_dev ;

static int naut_apic_get_maxlvt(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	int temp_return =apic_get_maxlvt(apic);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_log(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =log(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct tm ;

static int naut_mktime(lua_State *L){
	struct tm * timeptr = luaL_checkunsigned(L,1);
	long int temp_return =mktime(timeptr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fdopen(lua_State *L){
	int fd = luaL_checkint(L,1);
	const char * mode = luaL_checkstring(L,2);
	void * temp_return =fdopen(fd ,mode);
	return 1; 
}
static int naut_mm_boot_alloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	void * temp_return =mm_boot_alloc(size);
	return 1; 
}
static int naut_system(lua_State *L){
	const char * command = luaL_checkstring(L,1);
	int temp_return =system(command);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_change(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	int free_value = luaL_checkint(L,4);
	int temp_return =nk_htable_change(htable ,key ,value ,free_value);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_create_htable_iter(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	struct nk_hashtable_iter * temp_return =nk_create_htable_iter(htable);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_smp_early_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =smp_early_init(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strict_strtoull(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long long unsigned int * res = luaL_checkunsigned(L,3);
	int temp_return =strict_strtoull(cp ,base ,res);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_log10(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =log10(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_detect_cpu_freq(lua_State *L){
	unsigned int cpu = luaL_checkunsigned(L,1);
	long unsigned int temp_return =nk_detect_cpu_freq(cpu);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut___nl_langinfo_l(lua_State *L){
	int item = luaL_checkint(L,1);
	void * locale = luaL_checkunsigned(L,2);
	char * temp_return =__nl_langinfo_l(item ,locale);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_atox(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	long unsigned int temp_return =atox(buf);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_memset(lua_State *L){
	void * dst = luaL_checkunsigned(L,1);
	char c = luaL_checkunsigned(L,2);
	long unsigned int n = luaL_checkunsigned(L,3);
	void * temp_return =memset(dst ,c ,n);
	return 1; 
}
static int naut_ftello64(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	long unsigned int temp_return =ftello64(stream);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_barrier ;

static int naut_nk_barrier_init(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	unsigned int count = luaL_checkunsigned(L,2);
	int temp_return =nk_barrier_init(barrier ,count);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vprintk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	struct __va_list_tag * args = luaL_checkunsigned(L,2);
	int temp_return =vprintk(fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_join(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	void * * retval = luaL_checkunsigned(L,2);
	int temp_return =nk_join(t ,retval);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_getenv(lua_State *L){
	const char * name = luaL_checkstring(L,1);
	char * temp_return =getenv(name);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_atoi(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	int temp_return =atoi(buf);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vfprintf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	struct __va_list_tag * arg = luaL_checkunsigned(L,3);
	int temp_return =vfprintf(stream ,format ,arg);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_queue_entry ;

static int naut_nk_dequeue_entry(lua_State *L){
	struct nk_queue_entry * entry = luaL_checkunsigned(L,1);
	struct nk_queue_entry * temp_return =nk_dequeue_entry(entry);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_rwlock ;

static int naut_nk_rwlock_rd_lock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	int temp_return =nk_rwlock_rd_lock(l);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_hash_long(lua_State *L){
	long unsigned int val = luaL_checkunsigned(L,1);
	unsigned int bits = luaL_checkunsigned(L,2);
	long unsigned int temp_return =nk_hash_long(val ,bits);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strdup(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	char * temp_return =strdup(s);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_inc(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	int temp_return =nk_htable_inc(htable ,key ,value);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct rb_node ;

static int naut_nk_rb_prev(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	struct rb_node * temp_return =nk_rb_prev(node);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_rwlock ;

static int naut_nk_rwlock_wr_lock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	int temp_return =nk_rwlock_wr_lock(l);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fseeko64(lua_State *L){
	void * fp = luaL_checkunsigned(L,1);
	long unsigned int offset = luaL_checkunsigned(L,2);
	int whence = luaL_checkint(L,3);
	int temp_return =fseeko64(fp ,offset ,whence);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fscanf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	int temp_return =fscanf(stream ,format);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strerror(lua_State *L){
	int errnum = luaL_checkint(L,1);
	char * temp_return =strerror(errnum);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut___popcountdi2(lua_State *L){
	long long int a = luaL_checkint(L,1);
	int temp_return =__popcountdi2(a);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct buddy_mempool ;

static int naut_buddy_alloc(lua_State *L){
	struct buddy_mempool * mp = luaL_checkunsigned(L,1);
	long unsigned int order = luaL_checkunsigned(L,2);
	void * temp_return =buddy_alloc(mp ,order);
	return 1; 
}
static int naut_strspn(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	const char * accept = luaL_checkstring(L,2);
	long unsigned int temp_return =strspn(s ,accept);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_getchar_extended(lua_State *L){
	int wait = luaL_checkint(L,1);
	int temp_return =nk_vc_getchar_extended(wait);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ungetc(lua_State *L){
	int character = luaL_checkint(L,1);
	void * stream = luaL_checkunsigned(L,2);
	int temp_return =ungetc(character ,stream);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_mm_boot_init(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	int temp_return =mm_boot_init(mbd);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_localtime(lua_State *L){
	const long int * timer = luaL_checkint(L,1);
	struct tm * temp_return =localtime(timer);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct __va_list_tag ;

static int naut_vsprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	struct __va_list_tag * args = luaL_checkunsigned(L,3);
	int temp_return =vsprintf(buf ,fmt ,args);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_log(lua_State *L){
	char * fmt = luaL_checkstring(L,1);
	int temp_return =nk_vc_log(fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_rename(lua_State *L){
	const char * old = luaL_checkstring(L,1);
	const char * new = luaL_checkstring(L,2);
	int temp_return =rename(old ,new);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct rb_root ;

static int naut_nk_rb_last(lua_State *L){
	struct rb_root * root = luaL_checkunsigned(L,1);
	struct rb_node * temp_return =nk_rb_last(root);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_malloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	void * temp_return =malloc(size);
	return 1; 
}
static int naut_sscanf(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	int temp_return =sscanf(buf ,fmt);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_switch_to_vc(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	int temp_return =nk_switch_to_vc(vc);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_syscall(lua_State *L){
	int number = luaL_checkint(L,1);
	int temp_return =syscall(number);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fread(lua_State *L){
	void * ptr = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	long unsigned int count = luaL_checkunsigned(L,3);
	void * stream = luaL_checkunsigned(L,4);
	long unsigned int temp_return =fread(ptr ,size ,count ,stream);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct Output_Sink ;

struct __va_list_tag ;

static int naut_Format_Output(lua_State *L){
	struct Output_Sink * q = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	struct __va_list_tag * ap = luaL_checkunsigned(L,3);
	int temp_return =Format_Output(q ,format ,ap);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable_iter ;

static int naut_nk_htable_get_iter_key(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	long unsigned int temp_return =nk_htable_get_iter_key(iter);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_hash_buffer(lua_State *L){
	unsigned char * msg = luaL_checkstring(L,1);
	unsigned int length = luaL_checkunsigned(L,2);
	long unsigned int temp_return =nk_hash_buffer(msg ,length);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fprintf(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	const char * s = luaL_checkstring(L,2);
	int temp_return =fprintf(f ,s);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut___newlocale(lua_State *L){
	int category_mask = luaL_checkint(L,1);
	const char * locale = luaL_checkstring(L,2);
	void * base = luaL_checkunsigned(L,3);
	void * temp_return =__newlocale(category_mask ,locale ,base);
	return 1; 
}
static int naut_kbd_translate(lua_State *L){
	short unsigned int scan = luaL_checkunsigned(L,1);
	short unsigned int temp_return =kbd_translate(scan);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_bindtextdomain(lua_State *L){
	const char * domainname = luaL_checkstring(L,1);
	const char * dirname = luaL_checkstring(L,2);
	char * temp_return =bindtextdomain(domainname ,dirname);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_feof(lua_State *L){
	void * x = luaL_checkunsigned(L,1);
	int temp_return =feof(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_tan(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =tan(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct cpu ;

static int naut_nk_rand_init(lua_State *L){
	struct cpu * cpu = luaL_checkunsigned(L,1);
	int temp_return =nk_rand_init(cpu);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_mm_boot_alloc_aligned(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	long unsigned int align = luaL_checkunsigned(L,2);
	void * temp_return =mm_boot_alloc_aligned(size ,align);
	return 1; 
}
static int naut_strncat(lua_State *L){
	char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	char * temp_return =strncat(s1 ,s2 ,limit);
	lua_pushstring(L,temp_return);
	return 1; 
}
struct cpu ;

static int naut_nk_cpu_topo_discover(lua_State *L){
	struct cpu * me = luaL_checkunsigned(L,1);
	int temp_return =nk_cpu_topo_discover(me);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fseek(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	long int offset = luaL_checkint(L,2);
	int whence = luaL_checkint(L,3);
	int temp_return =fseek(stream ,offset ,whence);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_vc_setpos_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	unsigned char x = luaL_checkunsigned(L,2);
	unsigned char y = luaL_checkunsigned(L,3);
	int temp_return =nk_vc_setpos_specific(vc ,x ,y);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_vc_get_keycode(lua_State *L){
	int wait = luaL_checkint(L,1);
	short unsigned int temp_return =nk_vc_get_keycode(wait);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_floor(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =floor(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_tmpnam(lua_State *L){
	char * s = luaL_checkstring(L,1);
	char * temp_return =tmpnam(s);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_nk_create_htable(lua_State *L){
	unsigned int min_size = luaL_checkunsigned(L,1);
	struct nk_hashtable * temp_return =nk_create_htable(min_size);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_gettext(lua_State *L){
	const char * msgid = luaL_checkstring(L,1);
	char * temp_return =gettext(msgid);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_multiboot_get_phys_mem(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int temp_return =multiboot_get_phys_mem(mbd);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct naut_info ;

static int naut_smp_bringup_aps(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	int temp_return =smp_bringup_aps(naut);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct apic_dev ;

static int naut_apic_read_timer(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	int temp_return =apic_read_timer(apic);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_destroy_vc(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	int temp_return =nk_destroy_vc(vc);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct sys_info ;

static int naut_ioapic_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	int temp_return =ioapic_init(sys);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_launch_shell(lua_State *L){
	char * name = luaL_checkstring(L,1);
	int cpu = luaL_checkint(L,2);
	void * temp_return =nk_launch_shell(name ,cpu);
	return 1; 
}
static int naut_nk_get_base_region_by_cpu(lua_State *L){
	unsigned int cpu = luaL_checkunsigned(L,1);
	struct mem_region * temp_return =nk_get_base_region_by_cpu(cpu);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_barrier ;

static int naut_nk_barrier_wait(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	int temp_return =nk_barrier_wait(barrier);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_sin(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =sin(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_rwlock ;

static int naut_nk_rwlock_wr_unlock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	int temp_return =nk_rwlock_wr_unlock(l);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_kmem_get_region_by_addr(lua_State *L){
	long unsigned int addr = luaL_checkunsigned(L,1);
	struct mem_region * temp_return =kmem_get_region_by_addr(addr);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_atan(lua_State *L){
	double __x = luaL_checknumber(L,1);
	double temp_return =atan(__x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_simple_strtoull(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	long long unsigned int temp_return =simple_strtoull(cp ,endp ,base);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_fopen64(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	void * f = luaL_checkunsigned(L,2);
	void * temp_return =fopen64(path ,f);
	return 1; 
}
struct nk_hashtable_iter ;

static int naut_nk_htable_get_iter_value(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	long unsigned int temp_return =nk_htable_get_iter_value(iter);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_ioctl(lua_State *L){
	int d = luaL_checkint(L,1);
	long unsigned int request = luaL_checkunsigned(L,2);
	int temp_return =ioctl(d ,request);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_search(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int temp_return =nk_htable_search(htable ,key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_register_int_handler(lua_State *L){
	short unsigned int int_vec = luaL_checkunsigned(L,1);
	int temp_return =register_int_handler(int_vec);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_strcasecmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	int temp_return =strcasecmp(s1 ,s2);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_nk_tls_key_delete(lua_State *L){
	unsigned int key = luaL_checkunsigned(L,1);
	int temp_return =nk_tls_key_delete(key);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_rwlock ;

static int naut_nk_rwlock_rd_unlock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	int temp_return =nk_rwlock_rd_unlock(l);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut___duplocale(lua_State *L){
	void * locobj = luaL_checkunsigned(L,1);
	void * temp_return =__duplocale(locobj);
	return 1; 
}
static int naut_fabs(lua_State *L){
	double __x = luaL_checknumber(L,1);
	double temp_return =fabs(__x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable ;

static int naut_nk_htable_insert(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	int temp_return =nk_htable_insert(htable ,key ,value);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_difftime(lua_State *L){
	long int time1 = luaL_checkint(L,1);
	long int time2 = luaL_checkint(L,2);
	double temp_return =difftime(time1 ,time2);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_virtual_console ;

static int naut_nk_dequeue_keycode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int temp_return =nk_dequeue_keycode(vc);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_atan2(lua_State *L){
	double y = luaL_checknumber(L,1);
	double x = luaL_checknumber(L,2);
	double temp_return =atan2(y ,x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_textdomain(lua_State *L){
	const char * domainname = luaL_checkstring(L,1);
	char * temp_return =textdomain(domainname);
	lua_pushstring(L,temp_return);
	return 1; 
}
static int naut_exp(lua_State *L){
	double x = luaL_checknumber(L,1);
	double temp_return =exp(x);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_time(lua_State *L){
	long int * timer = luaL_checkint(L,1);
	long int temp_return =time(timer);
	lua_pushnumber(L,temp_return);
	return 1; 
}
struct nk_hashtable_iter ;

static int naut_nk_htable_iter_advance(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	int temp_return =nk_htable_iter_advance(iter);
	lua_pushnumber(L,temp_return);
	return 1; 
}
static int naut_setvbuf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	char * buf = luaL_checkstring(L,2);
	int type = luaL_checkint(L,3);
	long unsigned int size = luaL_checkunsigned(L,4);
	int temp_return =setvbuf(stream ,buf ,type ,size);
	lua_pushnumber(L,temp_return);
	return 1; 
}

static const luaL_Reg nautlib[] = { 
{"strncasecmp", naut_strncasecmp} ,
{"getc", naut_getc} ,
{"nk_get_base_region_by_num", naut_nk_get_base_region_by_num} ,
{"nk_rb_next", naut_nk_rb_next} ,
{"fmodnew", naut_fmodnew} ,
{"fclose", naut_fclose} ,
{"freopen", naut_freopen} ,
{"nk_create_vc", naut_nk_create_vc} ,
{"mb_get_first_hrt_addr", naut_mb_get_first_hrt_addr} ,
{"nk_rb_first", naut_nk_rb_first} ,
{"sqrt", naut_sqrt} ,
{"simple_strtoll", naut_simple_strtoll} ,
{"simple_strtoul", naut_simple_strtoul} ,
{"nk_thread_queue_sleep", naut_nk_thread_queue_sleep} ,
{"nk_dequeue_entry_atomic", naut_nk_dequeue_entry_atomic} ,
{"lseek64", naut_lseek64} ,
{"strtol", naut_strtol} ,
{"fputc", naut_fputc} ,
{"nk_dequeue_first_atomic", naut_nk_dequeue_first_atomic} ,
{"strtoi", naut_strtoi} ,
{"strtod", naut_strtod} ,
{"nk_condvar_destroy", naut_nk_condvar_destroy} ,
{"nk_vc_setattr_specific", naut_nk_vc_setattr_specific} ,
{"frexp", naut_frexp} ,
{"fputs", naut_fputs} ,
{"nk_htable_count", naut_nk_htable_count} ,
{"strtox", naut_strtox} ,
{"realloc", naut_realloc} ,
{"strict_strtoul", naut_strict_strtoul} ,
{"nk_enqueue_keycode", naut_nk_enqueue_keycode} ,
{"smp_xcall", naut_smp_xcall} ,
{"kbd_init", naut_kbd_init} ,
{"ischar", naut_ischar} ,
{"nk_vc_display_char_specific", naut_nk_vc_display_char_specific} ,
{"ceil", naut_ceil} ,
{"multiboot_parse", naut_multiboot_parse} ,
{"strsep", naut_strsep} ,
{"arch_numa_init", naut_arch_numa_init} ,
{"msr_read", naut_msr_read} ,
{"nk_tls_key_create", naut_nk_tls_key_create} ,
{"strcoll", naut_strcoll} ,
{"nk_vc_gets", naut_nk_vc_gets} ,
{"nk_vc_scrollup_specific", naut_nk_vc_scrollup_specific} ,
{"strnlen", naut_strnlen} ,
{"buddy_init", naut_buddy_init} ,
{"strstr", naut_strstr} ,
{"strict_strtoll", naut_strict_strtoll} ,
{"nk_vc_print", naut_nk_vc_print} ,
{"memmove", naut_memmove} ,
{"tanh", naut_tanh} ,
{"nk_dequeue_scancode", naut_nk_dequeue_scancode} ,
{"multiboot_get_size", naut_multiboot_get_size} ,
{"modf", naut_modf} ,
{"nk_release_vc", naut_nk_release_vc} ,
{"mm_boot_get_region", naut_mm_boot_get_region} ,
{"strcmp", naut_strcmp} ,
{"nk_vc_clear_specific", naut_nk_vc_clear_specific} ,
{"strncmp", naut_strncmp} ,
{"clock_gettime", naut_clock_gettime} ,
{"vsscanf", naut_vsscanf} ,
{"nk_dequeue_first", naut_nk_dequeue_first} ,
{"snprintf", naut_snprintf} ,
{"nk_map_page", naut_nk_map_page} ,
{"nk_condvar_init", naut_nk_condvar_init} ,
{"strcat", naut_strcat} ,
{"xm_handler", naut_xm_handler} ,
{"cosh", naut_cosh} ,
{"pci_init", naut_pci_init} ,
{"remove", naut_remove} ,
{"nk_thread_queue_wake_one", naut_nk_thread_queue_wake_one} ,
{"fgets", naut_fgets} ,
{"i8254_init", naut_i8254_init} ,
{"fflush", naut_fflush} ,
{"nk_htable_iter_remove", naut_nk_htable_iter_remove} ,
{"strchr", naut_strchr} ,
{"asin", naut_asin} ,
{"fopen", naut_fopen} ,
{"getwc", naut_getwc} ,
{"nk_enqueue_scancode", naut_nk_enqueue_scancode} ,
{"multiboot_get_sys_ram", naut_multiboot_get_sys_ram} ,
{"__mm_boot_alloc", naut___mm_boot_alloc} ,
{"nk_htable_remove", naut_nk_htable_remove} ,
{"ftell", naut_ftell} ,
{"abs", naut_abs} ,
{"sprintf", naut_sprintf} ,
{"null_excp_handler", naut_null_excp_handler} ,
{"strrchr", naut_strrchr} ,
{"nk_pf_handler", naut_nk_pf_handler} ,
{"read_event_count", naut_read_event_count} ,
{"fmod", naut_fmod} ,
{"strcspn", naut_strcspn} ,
{"vscnprintf", naut_vscnprintf} ,
{"ferror", naut_ferror} ,
{"nk_thread_queue_wake_all", naut_nk_thread_queue_wake_all} ,
{"nk_htable_dec", naut_nk_htable_dec} ,
{"arch_early_init", naut_arch_early_init} ,
{"gmtime", naut_gmtime} ,
{"nk_condvar_bcast", naut_nk_condvar_bcast} ,
{"sinh", naut_sinh} ,
{"nk_vc_puts", naut_nk_vc_puts} ,
{"null_irq_handler", naut_null_irq_handler} ,
{"register_irq_handler", naut_register_irq_handler} ,
{"nk_timer_init", naut_nk_timer_init} ,
{"cos", naut_cos} ,
{"vsnprintf", naut_vsnprintf} ,
{"nk_bind_vc", naut_nk_bind_vc} ,
{"nk_htable_iter_search", naut_nk_htable_iter_search} ,
{"nk_vc_printf", naut_nk_vc_printf} ,
{"strict_strtol", naut_strict_strtol} ,
{"strcpy", naut_strcpy} ,
{"nk_vc_get_scancode", naut_nk_vc_get_scancode} ,
{"acos", naut_acos} ,
{"strftime", naut_strftime} ,
{"nk_int_init", naut_nk_int_init} ,
{"mb_is_hrt_environ", naut_mb_is_hrt_environ} ,
{"mf_handler", naut_mf_handler} ,
{"nk_barrier_destroy", naut_nk_barrier_destroy} ,
{"setlocale", naut_setlocale} ,
{"pow", naut_pow} ,
{"nk_timer_handler", naut_nk_timer_handler} ,
{"nk_thread_run", naut_nk_thread_run} ,
{"ldexp", naut_ldexp} ,
{"nk_vc_handle_input", naut_nk_vc_handle_input} ,
{"smp_setup_xcall_bsp", naut_smp_setup_xcall_bsp} ,
{"printf", naut_printf} ,
{"scnprintf", naut_scnprintf} ,
{"early_printk", naut_early_printk} ,
{"printk", naut_printk} ,
{"poll", naut_poll} ,
{"strncpy", naut_strncpy} ,
{"nk_map_page_nocache", naut_nk_map_page_nocache} ,
{"apic_wait_for_send", naut_apic_wait_for_send} ,
{"apic_get_maxlvt", naut_apic_get_maxlvt} ,
{"log", naut_log} ,
{"mktime", naut_mktime} ,
{"fdopen", naut_fdopen} ,
{"mm_boot_alloc", naut_mm_boot_alloc} ,
{"system", naut_system} ,
{"nk_htable_change", naut_nk_htable_change} ,
{"nk_create_htable_iter", naut_nk_create_htable_iter} ,
{"smp_early_init", naut_smp_early_init} ,
{"strict_strtoull", naut_strict_strtoull} ,
{"log10", naut_log10} ,
{"nk_detect_cpu_freq", naut_nk_detect_cpu_freq} ,
{"__nl_langinfo_l", naut___nl_langinfo_l} ,
{"atox", naut_atox} ,
{"memset", naut_memset} ,
{"ftello64", naut_ftello64} ,
{"nk_barrier_init", naut_nk_barrier_init} ,
{"vprintk", naut_vprintk} ,
{"nk_join", naut_nk_join} ,
{"getenv", naut_getenv} ,
{"atoi", naut_atoi} ,
{"vfprintf", naut_vfprintf} ,
{"nk_dequeue_entry", naut_nk_dequeue_entry} ,
{"nk_rwlock_rd_lock", naut_nk_rwlock_rd_lock} ,
{"nk_hash_long", naut_nk_hash_long} ,
{"strdup", naut_strdup} ,
{"nk_htable_inc", naut_nk_htable_inc} ,
{"nk_rb_prev", naut_nk_rb_prev} ,
{"nk_rwlock_wr_lock", naut_nk_rwlock_wr_lock} ,
{"fseeko64", naut_fseeko64} ,
{"fscanf", naut_fscanf} ,
{"strerror", naut_strerror} ,
{"__popcountdi2", naut___popcountdi2} ,
{"buddy_alloc", naut_buddy_alloc} ,
{"strspn", naut_strspn} ,
{"nk_vc_getchar_extended", naut_nk_vc_getchar_extended} ,
{"ungetc", naut_ungetc} ,
{"mm_boot_init", naut_mm_boot_init} ,
{"localtime", naut_localtime} ,
{"vsprintf", naut_vsprintf} ,
{"nk_vc_log", naut_nk_vc_log} ,
{"rename", naut_rename} ,
{"nk_rb_last", naut_nk_rb_last} ,
{"malloc", naut_malloc} ,
{"sscanf", naut_sscanf} ,
{"nk_switch_to_vc", naut_nk_switch_to_vc} ,
{"syscall", naut_syscall} ,
{"fread", naut_fread} ,
{"Format_Output", naut_Format_Output} ,
{"nk_htable_get_iter_key", naut_nk_htable_get_iter_key} ,
{"nk_hash_buffer", naut_nk_hash_buffer} ,
{"fprintf", naut_fprintf} ,
{"__newlocale", naut___newlocale} ,
{"kbd_translate", naut_kbd_translate} ,
{"bindtextdomain", naut_bindtextdomain} ,
{"feof", naut_feof} ,
{"tan", naut_tan} ,
{"nk_rand_init", naut_nk_rand_init} ,
{"mm_boot_alloc_aligned", naut_mm_boot_alloc_aligned} ,
{"strncat", naut_strncat} ,
{"nk_cpu_topo_discover", naut_nk_cpu_topo_discover} ,
{"fseek", naut_fseek} ,
{"nk_vc_setpos_specific", naut_nk_vc_setpos_specific} ,
{"nk_vc_get_keycode", naut_nk_vc_get_keycode} ,
{"floor", naut_floor} ,
{"tmpnam", naut_tmpnam} ,
{"nk_create_htable", naut_nk_create_htable} ,
{"gettext", naut_gettext} ,
{"multiboot_get_phys_mem", naut_multiboot_get_phys_mem} ,
{"smp_bringup_aps", naut_smp_bringup_aps} ,
{"apic_read_timer", naut_apic_read_timer} ,
{"nk_destroy_vc", naut_nk_destroy_vc} ,
{"ioapic_init", naut_ioapic_init} ,
{"nk_launch_shell", naut_nk_launch_shell} ,
{"nk_get_base_region_by_cpu", naut_nk_get_base_region_by_cpu} ,
{"nk_barrier_wait", naut_nk_barrier_wait} ,
{"sin", naut_sin} ,
{"nk_rwlock_wr_unlock", naut_nk_rwlock_wr_unlock} ,
{"kmem_get_region_by_addr", naut_kmem_get_region_by_addr} ,
{"atan", naut_atan} ,
{"simple_strtoull", naut_simple_strtoull} ,
{"fopen64", naut_fopen64} ,
{"nk_htable_get_iter_value", naut_nk_htable_get_iter_value} ,
{"ioctl", naut_ioctl} ,
{"nk_htable_search", naut_nk_htable_search} ,
{"register_int_handler", naut_register_int_handler} ,
{"strcasecmp", naut_strcasecmp} ,
{"nk_tls_key_delete", naut_nk_tls_key_delete} ,
{"nk_rwlock_rd_unlock", naut_nk_rwlock_rd_unlock} ,
{"__duplocale", naut___duplocale} ,
{"fabs", naut_fabs} ,
{"nk_htable_insert", naut_nk_htable_insert} ,
{"difftime", naut_difftime} ,
{"nk_dequeue_keycode", naut_nk_dequeue_keycode} ,
{"atan2", naut_atan2} ,
{"textdomain", naut_textdomain} ,
{"exp", naut_exp} ,
{"time", naut_time} ,
{"nk_htable_iter_advance", naut_nk_htable_iter_advance} ,
{"setvbuf", naut_setvbuf},
{NULL, NULL}
};
LUAMOD_API int luaopen_naut (lua_State *L) {
          luaL_newlib(L, nautlib);
          return 1;
}