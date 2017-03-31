#include <nautilus/naut_types.h> 
#include <nautilus/libccompat.h>
#include <nautilus/math.h>
#define lmathlib_c
#define LUA_LIB
#include "lua/lua.h"
#include "lua/lauxlib.h"
#include "lua/lualib.h"
#include "lua/luaconf.h"

struct nk_queue ;
struct nk_queue ;
struct nk_queue_entry ;
struct nk_queue ;
struct nk_condvar ;
struct apic_dev ;
struct tm ;
struct nk_hashtable ;
struct nk_virtual_console ;
struct rb_node ;
struct rb_root ;
struct nk_virtual_console ;
struct naut_info ;
struct nk_hashtable ;
struct cpu ;
struct nk_hashtable_iter ;
struct buddy_mempool ;
struct nk_hashtable ;
struct excp_entry_state ;
struct rb_node ;
struct rb_root ;
struct nk_thread ;
struct nk_virtual_console ;
struct excp_entry_state ;
struct mmap_info ;
struct mem_map_entry ;
struct nk_hashtable ;
struct buddy_mempool ;
struct rb_node ;
struct Output_Sink ;
struct __va_list_tag ;
struct nk_hashtable_iter ;
struct nk_virtual_console ;
struct naut_info ;
struct naut_info ;
struct nk_barrier ;
struct nk_hashtable_iter ;
struct cpu ;
struct nk_rwlock ;
struct nk_hashtable ;
struct __va_list_tag ;
struct excp_entry_state ;
struct nk_virtual_console ;
struct timespec ;
struct __va_list_tag ;
struct nk_regs ;
struct nk_condvar ;
struct naut_info ;
struct nk_queue ;
struct nk_thread ;
struct __va_list_tag ;
struct nk_condvar ;
struct naut_info ;
struct rb_node ;
struct rb_node ;
struct rb_root ;
struct apic_dev ;
struct apic_dev ;
struct apic_dev ;
struct mem_region ;
struct pmc_event ;
struct nk_queue_entry ;
struct nk_rwlock ;
struct buddy_mempool ;
struct naut_info ;
struct __va_list_tag ;
struct cpu ;
struct cpu ;
struct nk_virtual_console ;
struct nk_rwlock ;
struct nk_virtual_console ;
struct nk_hashtable_iter ;
struct nk_hashtable ;
struct nk_hashtable_iter ;
struct apic_dev ;
struct apic_dev ;
struct apic_dev ;
struct apic_dev ;
struct excp_entry_state ;
struct nk_barrier ;
const struct tm ;
struct sys_info ;
struct pollfd ;
struct nk_mem_info ;
struct naut_info ;
struct nk_hashtable ;
struct nk_hashtable ;
struct nk_rwlock ;
struct __va_list_tag ;
struct pmc_event ;
struct rb_node ;
struct __va_list_tag ;
struct nk_queue ;
struct excp_entry_state ;
struct excp_entry_state ;
struct pmc_event ;
struct nk_queue ;
struct nk_hashtable_iter ;
struct nk_hashtable ;
struct nk_barrier ;
struct cpu ;
struct apic_dev ;
struct naut_info ;
struct nk_virtual_console ;
struct __va_list_tag ;
struct nk_hashtable ;
struct __va_list_tag ;
struct rb_root ;
struct rb_root ;
struct sys_info ;
struct sys_info ;
struct pmc_event ;

extern int wcsftime();
typedef long unsigned int addr_t;
typedef long unsigned int ulong_t;
extern void mm_boot_reserve_mem(addr_t, ulong_t);
extern int fclose(void *);
extern int pthread_mutex_lock();
extern void nk_condvar_test();
extern long unsigned int simple_strtoul(const char *, char * *, unsigned int);
extern int nk_thread_queue_sleep(struct nk_queue *);
extern struct nk_queue_entry * nk_dequeue_entry_atomic(struct nk_queue *, struct nk_queue_entry *);
extern struct nk_queue_entry * nk_dequeue_first_atomic(struct nk_queue *);
typedef long unsigned int addr_t;
typedef long unsigned int ulong_t;
extern void mm_boot_free_vmem(addr_t, ulong_t);
extern int nk_condvar_destroy(struct nk_condvar *);
typedef unsigned int uint32_t;
extern void apic_timer_setup(struct apic_dev *, uint32_t);
extern long int mktime(struct tm *);
extern void init(long unsigned int, long unsigned int);
extern unsigned int nk_htable_count(struct nk_hashtable *);
extern void disable_all_events();
extern int __strftime_l();
extern int strict_strtoul(const char *, unsigned int, long unsigned int *);
typedef short unsigned int nk_keycode_t;
extern int nk_enqueue_keycode(struct nk_virtual_console *, nk_keycode_t);
extern int nk_switch_to_prev_vc();
extern void vga_init_screen();
typedef unsigned int uint32_t;
extern long unsigned int msr_read(uint32_t);
extern int nk_sched_init();
typedef long unsigned int ulong_t;
extern void nk_stack_dump(ulong_t);
extern unsigned int nk_my_numa_node();
typedef long unsigned int size_t;
extern long unsigned int strnlen(const char *, size_t);
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
extern struct buddy_mempool * buddy_init(ulong_t, ulong_t, ulong_t);
extern void nk_rb_erase(struct rb_node *, struct rb_root *);
extern short unsigned int nk_dequeue_scancode(struct nk_virtual_console *);
extern void nk_yield();
typedef long unsigned int ulong_t;
extern unsigned int multiboot_get_size(ulong_t);
extern int __wctype_l();
extern void perf_report();
typedef long unsigned int ulong_t;
extern int mb_is_hrt_environ(ulong_t);
extern int snprintf(char *, long unsigned int, const char *, ...);
extern void mm_dump_page_map();
extern void str_tolower(char *);
extern double cosh(double);
extern long unsigned int __ctype_get_mb_cur_max();
extern int wcrtomb();
extern int i8254_init(struct naut_info *);
extern double asin(double);
extern long int clock();
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
extern void * __mm_boot_alloc(ulong_t, ulong_t, ulong_t);
typedef long unsigned int addr_t;
extern long unsigned int nk_htable_remove(struct nk_hashtable *, addr_t, int);
extern double abs(double);
extern void apic_init(struct cpu *);
extern int nk_htable_iter_remove(struct nk_hashtable_iter *, int);
extern int __freelocale();
typedef long unsigned int ulong_t;
extern void buddy_free(struct buddy_mempool *, void *, ulong_t);
typedef long unsigned int addr_t;
typedef long unsigned int addr_t;
extern int nk_htable_dec(struct nk_hashtable *, addr_t, addr_t);
extern double sinh(double);
extern int nk_vc_puts(char *);
typedef long unsigned int excp_vec_t;
extern int null_irq_handler(struct excp_entry_state *, excp_vec_t);
extern void nk_rb_insert_color(struct rb_node *, struct rb_root *);
extern int nk_bind_vc(struct nk_thread *, struct nk_virtual_console *);
extern int wcsxfrm();
extern void serial_mem_dump(unsigned char *, int);
extern int __towlower_l();
typedef long unsigned int excp_vec_t;
extern int mf_handler(struct excp_entry_state *, excp_vec_t);
extern void * realloc(void *, long unsigned int);
typedef void * nk_thread_id_t;
extern int nk_thread_run(nk_thread_id_t);
extern int __get_cpu_features();
extern int printf(const char *, ...);
extern int scnprintf(char *, long unsigned int, const char *, ...);
extern int printk(const char *, ...);
extern int pthread_mutex_init();
extern void * __thread_fork();
typedef int nemo_event_id_t;
extern void nemo_event_notify(nemo_event_id_t, int);
extern void nk_tls_test();
extern void arch_detect_mem_map(struct mmap_info *, struct mem_map_entry *, long unsigned int);
typedef long unsigned int addr_t;
typedef long unsigned int addr_t;
extern int nk_htable_change(struct nk_hashtable *, addr_t, addr_t, int);
extern char * strdup(const char *);
typedef long unsigned int ulong_t;
extern void * buddy_alloc(struct buddy_mempool *, ulong_t);
extern long unsigned int ftello64(void *);
typedef void * nk_thread_id_t;
extern int nk_join(nk_thread_id_t, void * *);
extern unsigned int mm_boot_num_regions();
extern void serial_printlevel(int, const char *, ...);
extern struct rb_node * nk_rb_prev(struct rb_node *);
extern int __wcscoll_l();
extern int __errno_location();
extern char * strerror(int);
extern int nk_vc_getchar_extended(int);
extern struct tm * localtime(const long int *);
extern int nk_core_barrier_arrive();
typedef long unsigned int ulong_t;
extern void mm_boot_free(void *, ulong_t);
extern int Format_Output(struct Output_Sink *, const char *, struct __va_list_tag *);
extern long unsigned int nk_htable_get_iter_key(struct nk_hashtable_iter *);
extern int strtold();
extern void abort();
extern int fprintf(void *, const char *, ...);
extern int towupper();
extern int feof(void *);
extern double tan(double);
extern struct nk_thread * nk_need_resched();
extern void * nk_get_parent_tid();
extern long long unsigned int simple_strtoull(const char *, char * *, unsigned int);
extern void clearerr(void *);
extern short unsigned int nk_dequeue_keycode(struct nk_virtual_console *);
extern long int lrand48();
extern int write();
extern int smp_bringup_aps(struct naut_info *);
extern int kbd_init(struct naut_info *);
extern int wmemchr();
extern int nk_barrier_wait(struct nk_barrier *);
extern double sin(double);
extern void serial_putlnn(const char *, int);
extern void nk_destroy_htable_iter(struct nk_hashtable_iter *);
typedef long unsigned int size_t;
extern char * strncat(char *, const char *, size_t);
extern double atan(double);
extern int nk_cpu_topo_discover(struct cpu *);
extern int ioctl(int, long unsigned int, ...);
extern int pmc_init();
typedef int nemo_event_id_t;
extern void nemo_event_broadcast(nemo_event_id_t);
extern int strcasecmp(const char *, const char *);
extern int nk_rwlock_rd_unlock(struct nk_rwlock *);
typedef void * locale_t;
extern void * __duplocale(locale_t);
extern long unsigned int mm_get_all_mem();
typedef long unsigned int addr_t;
typedef long unsigned int addr_t;
extern int nk_htable_insert(struct nk_hashtable *, addr_t, addr_t);
extern int wctob();
extern double atan2(double, double);
extern int wmemmove();
typedef long unsigned int ulong_t;
extern void * mb_get_first_hrt_addr(ulong_t);
extern int btowc();
extern void test_nemo();
extern int wcsnrtombs();
extern int vscnprintf(char *, long unsigned int, const char *, struct __va_list_tag *);
extern void serial_init();
extern void main(long unsigned int, long unsigned int);
typedef long unsigned int excp_vec_t;
extern int nk_timer_handler(struct excp_entry_state *, excp_vec_t);
extern int nk_vc_scrollup_specific(struct nk_virtual_console *);
extern void mm_boot_kmem_init();
extern int __uselocale();
extern int nk_vc_deinit();
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
extern struct multiboot_info * multiboot_parse(ulong_t, ulong_t);
extern int __wcsftime_l();
extern int strcoll(const char *, const char *);
extern int __popcountdi2(long long int);
extern int nk_vc_gets(char *, int, int);
extern void panic(const char *, ...);
extern double fmod(double, double);
extern unsigned int nk_get_num_domains();
typedef int clockid_t;
extern int clock_gettime(clockid_t, struct timespec *);
extern int vsscanf(const char *, const char *, struct __va_list_tag *);
extern void nk_vc_wait();
extern void nk_print_regs(struct nk_regs *);
extern int nk_condvar_init(struct nk_condvar *);
extern int pci_init(struct naut_info *);
extern int __stack_chk_fail();
extern int nk_thread_queue_wake_one(struct nk_queue *);
extern int nk_vc_print(char *);
typedef long unsigned int ulong_t;
extern long unsigned int multiboot_get_sys_ram(ulong_t);
extern void nk_acpi_init();
extern void reboot();
extern int nk_release_vc(struct nk_thread *);
extern int sprintf(char *, const char *, ...);
extern void serial_print_list(const char *, struct __va_list_tag *);
extern int __ctype_b_loc();
extern char * strrchr(const char *, int);
extern void vga_init();
extern void __do_backtrace(void * *, unsigned int);
extern long unsigned int strcspn(const char *, const char *);
extern int ferror(void *);
extern void free(void *);
extern int nk_condvar_bcast(struct nk_condvar *);
extern double log(double);
extern int nk_timer_init(struct naut_info *);
extern void nk_rb_replace_node(struct rb_node *, struct rb_node *, struct rb_root *);
extern int nk_vc_printf(char *, ...);
extern int apic_read_timer(struct apic_dev *);
typedef unsigned int uint32_t;
typedef long unsigned int uint64_t;
extern void msr_write(uint32_t, uint64_t);
extern int rand();
extern int ischar(unsigned char *);
extern double ldexp(double, int);
typedef short unsigned int nk_scancode_t;
extern int nk_vc_handle_input(nk_scancode_t);
extern struct nk_queue * nk_queue_create();
typedef long unsigned int size_t;
extern char * strncpy(char *, const char *, size_t);
extern unsigned int apic_wait_for_send(struct apic_dev *);
extern int apic_get_maxlvt(struct apic_dev *);
extern int __wcsxfrm_l();
typedef long unsigned int ulong_t;
extern void kmem_add_memory(struct mem_region *, ulong_t, long unsigned int);
typedef long unsigned int ulong_t;
extern void * mm_boot_alloc(ulong_t);
extern int system(const char *);
extern void release_perf_event(struct pmc_event *);
extern int strict_strtoull(const char *, unsigned int, long long unsigned int *);
extern int test_setlong();
extern void nk_thread_exit(void *);
typedef unsigned int uint_t;
extern void nk_sleep(uint_t);
extern struct nk_queue_entry * nk_dequeue_entry(struct nk_queue_entry *);
extern int nk_rwlock_rd_lock(struct nk_rwlock *);
typedef long unsigned int ulong_t;
typedef unsigned int uint_t;
extern long unsigned int nk_hash_long(ulong_t, uint_t);
extern void buddy_dump_mempool(struct buddy_mempool *);
extern void fpu_init(struct naut_info *);
extern int fscanf(void *, const char *, ...);
extern int wcscmp();
extern void idle(void *, void * *);
extern int vsnprintf(char *, long unsigned int, const char *, struct __va_list_tag *);
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
extern int nk_core_barrier_wait();
extern void smp_ap_entry(struct cpu *);
extern char * bindtextdomain(const char *, const char *);
extern int wmemcpy();
extern int nk_rand_init(struct cpu *);
typedef long unsigned int ulong_t;
typedef long unsigned int ulong_t;
extern void * mm_boot_alloc_aligned(ulong_t, ulong_t);
extern struct mem_region * kmem_get_base_zone();
extern int fseek(void *, long int, int);
extern int nk_destroy_vc(struct nk_virtual_console *);
extern void * nk_launch_shell(char *, int);
extern int nk_numa_init();
extern int nk_rwlock_wr_unlock(struct nk_rwlock *);
typedef short unsigned int nk_scancode_t;
extern int nk_enqueue_scancode(struct nk_virtual_console *, nk_scancode_t);
extern long unsigned int nk_htable_get_iter_value(struct nk_hashtable_iter *);
extern int nk_switch_to_next_vc();
typedef long unsigned int addr_t;
extern long unsigned int nk_htable_search(struct nk_hashtable *, addr_t);
typedef unsigned int nk_tls_key_t;
extern int nk_tls_key_delete(nk_tls_key_t);
extern void srand48(long int);
extern int strtold_l();
extern double exp(double);
typedef long unsigned int uint64_t;
extern int fseeko64(void *, uint64_t, int);
extern int nk_htable_iter_advance(struct nk_hashtable_iter *);
extern int setvbuf(void *, char *, int, long unsigned int);
typedef long unsigned int size_t;
extern int strncasecmp(const char *, const char *, size_t);
extern long long int simple_strtoll(const char *, char * *, unsigned int);
extern void imcr_begin_sym_io();
typedef long unsigned int uint64_t;
extern long unsigned int lseek64(int, uint64_t, int);
extern long int strtol(const char *, char * *, int);
extern int fputc(int, void *);
extern void apic_bcast_iipi(struct apic_dev *);
extern int strtoi(const char *, char * *);
typedef unsigned int uint32_t;
extern void apic_deinit_iipi(struct apic_dev *, uint32_t);
extern double strtod(const char *, char * *);
extern int strtof();
extern int writev();
extern double frexp(double, int *);
extern int fputs(const char *, void *);
extern long unsigned int strtox(const char *, char * *);
extern void nk_set_thread_fork_output(void *);
typedef int nemo_event_id_t;
extern void nemo_unregister_event_action(nemo_event_id_t);
extern int wmemset();
extern int iswctype();
extern int wcscoll();
extern double ceil(double);
extern char * strsep(char * *, const char *);
extern int fileno();
extern int strict_strtoll(const char *, unsigned int, long long int *);
extern int remove(const char *);
typedef unsigned int uint32_t;
extern void apic_send_iipi(struct apic_dev *, uint32_t);
typedef unsigned int uint_t;
extern void apic_self_ipi(struct apic_dev *, uint_t);
typedef long unsigned int size_t;
extern int strncmp(const char *, const char *, size_t);
extern char * strcat(char *, const char *);
typedef long unsigned int excp_vec_t;
extern int xm_handler(struct excp_entry_state *, excp_vec_t);
extern void acpi_shutdown();
extern void nk_get_rand_bytes(unsigned char *, unsigned int);
extern int putwc();
extern void vga_get_cursor(unsigned char *, unsigned char *);
extern char * strchr(const char *, int);
extern void acpi_reboot();
extern int nk_mwait_init();
extern long unsigned int i8254_calib_tsc();
extern int __kernel_standard();
extern int nk_core_barrier_lower();
extern int ungetwc();
typedef unsigned int uint32_t;
extern int nk_barrier_init(struct nk_barrier *, uint32_t);
extern double cos(double);
extern void disable_8259pic();
extern void * nk_get_tid();
extern int nk_kmem_init();
extern long unsigned int strftime(char *, long unsigned int, const char *, const struct tm *);
extern int nk_int_init(struct sys_info *);
extern double pow(double, double);
extern void nk_barrier_test();
extern int __strxfrm_l();
typedef long unsigned int nfds_t;
extern int poll(struct pollfd *, nfds_t, int);
typedef long unsigned int ulong_t;
extern void nk_paging_init(struct nk_mem_info *, ulong_t);
extern int arch_early_init(struct naut_info *);
typedef long unsigned int uint64_t;
extern void nk_rand_set_xi(uint64_t);
extern long unsigned int mm_get_usable_ram();
extern struct nk_hashtable_iter * nk_create_htable_iter(struct nk_hashtable *);
extern int putc();
typedef int nl_item;
typedef void * locale_t;
extern char * __nl_langinfo_l(nl_item, locale_t);
extern int mbrtowc();
extern void mm_boot_kmem_cleanup();
typedef void * nk_thread_id_t;
extern void nk_thread_destroy(nk_thread_id_t);
extern int mbsrtowcs();
extern double fmodnew(int, int);
extern void arch_reserve_boot_regions(long unsigned int);
extern int nk_core_barrier_raise();
typedef long unsigned int addr_t;
typedef long unsigned int addr_t;
extern int nk_htable_inc(struct nk_hashtable *, addr_t, addr_t);
extern double drand48();
extern int nk_rwlock_wr_lock(struct nk_rwlock *);
extern double tanh(double);
extern int vsprintf(char *, const char *, struct __va_list_tag *);
extern void enable_all_events();
extern int rename(const char *, const char *);
extern void * malloc(long unsigned int);
extern void nk_rwlock_test();
extern void srand(unsigned int);
typedef unsigned int uint_t;
extern long unsigned int nk_hash_buffer(unsigned char *, uint_t);
extern void enable_perf_event(struct pmc_event *);
extern int getwc(void *);
typedef unsigned int cpu_id_t;
extern struct mem_region * nk_get_base_region_by_cpu(cpu_id_t);
extern int strict_strtol(const char *, unsigned int, long int *);
extern double fabs(double);
extern int getc(void *);
extern double sqrt(double);
extern int towlower();
extern long unsigned int mm_boot_last_pfn();
extern void detect_cpu();
extern int __ctype_tolower_loc();
extern void str_toupper(char *);
typedef long unsigned int addr_t;
typedef long unsigned int ulong_t;
extern void mm_boot_reserve_vmem(addr_t, ulong_t);
extern char * textdomain(const char *);
extern void * fopen64(const char *, void *);
extern int wmemcmp();
extern struct rb_node * nk_rb_next(struct rb_node *);
extern void vga_puts(char *);
extern int fflush(void *);
extern int __iswctype_l();
extern char * tmpnam(char *);
extern int strxfrm();
extern int __strtod_l();
extern int read();
extern void serial_puts(const char *);
extern int nk_vc_init();
typedef long unsigned int uint64_t;
extern void nk_rand_seed(uint64_t);
extern void nemo_event_await();
extern int nk_vc_scrollup();
extern char * strstr(const char *, const char *);
extern int __strtof_l();
extern int early_printk(const char *, struct __va_list_tag *);
extern int __strcoll_l();
extern void * freopen(const char *, const char *, void *);
extern struct mem_map_entry * mm_boot_get_region(unsigned int);
extern int strcmp(const char *, const char *);
extern void * tmpfile();
extern struct nk_queue_entry * nk_dequeue_first(struct nk_queue *);
extern char * fgets(char *, int, void *);
extern long int ftell(void *);
extern void exit(int);
typedef long unsigned int excp_vec_t;
typedef long unsigned int addr_t;
extern int null_excp_handler(struct excp_entry_state *, excp_vec_t, addr_t);
typedef long unsigned int excp_vec_t;
typedef long unsigned int addr_t;
extern int nk_pf_handler(struct excp_entry_state *, excp_vec_t, addr_t);
extern void vga_scrollup();
extern long unsigned int read_event_count(struct pmc_event *);
extern int nk_sched_init_ap();
extern double modf(double, double *);
extern void serial_print(const char *, ...);
extern int nk_thread_queue_wake_all(struct nk_queue *);
extern struct tm * gmtime(const long int *);
extern int setup_idt();
typedef long unsigned int addr_t;
extern int nk_htable_iter_search(struct nk_hashtable_iter *, struct nk_hashtable *, addr_t);
extern char * strcpy(char *, const char *);
extern int __towupper_l();
extern short unsigned int nk_vc_get_scancode(int);
extern double acos(double);
extern struct mem_region * nk_get_base_region_by_num(unsigned int);
extern int nk_barrier_destroy(struct nk_barrier *);
extern char * setlocale(int, const char *);
extern int nemo_init();
extern int smp_setup_xcall_bsp(struct cpu *);
extern int __fxstat64();
extern void * fopen(const char *, void *);
extern void apic_bcast_deinit_iipi(struct apic_dev *);
typedef void * locale_t;
extern void * __newlocale(int, const char *, locale_t);
extern void * fdopen(int, const char *);
extern int wcslen();
extern int smp_early_init(struct naut_info *);
extern double log10(double);
typedef unsigned int uint32_t;
extern long unsigned int nk_detect_cpu_freq(uint32_t);
extern int nk_switch_to_vc(struct nk_virtual_console *);
extern long unsigned int atox(const char *);
extern int vprintk(const char *, struct __va_list_tag *);
extern void nk_dump_numa_info();
extern void nk_free_htable(struct nk_hashtable *, int, int);
extern char * getenv(const char *);
extern int atoi(const char *);
extern int vfprintf(void *, const char *, struct __va_list_tag *);
extern int pthread_mutex_unlock();
extern struct rb_node * nk_rb_first(struct rb_root *);
extern void reset_all_counters();
extern void warn_slowpath(const char *, int, const char *, ...);
extern long unsigned int strspn(const char *, const char *);
extern int ungetc(int, void *);
typedef long unsigned int ulong_t;
extern int mm_boot_init(ulong_t);
extern int nk_vc_log(char *, ...);
typedef void * nk_thread_id_t;
extern void nk_wait(nk_thread_id_t);
extern struct rb_node * nk_rb_last(struct rb_root *);
extern int sscanf(const char *, const char *, ...);
extern int syscall(int, ...);
extern int nk_switch_to_vc_list();
extern long unsigned int fread(void *, long unsigned int, long unsigned int, void *);
extern int wctype();
typedef short unsigned int nk_scancode_t;
extern short unsigned int kbd_translate(nk_scancode_t);
extern int kbd_reset();
extern short unsigned int nk_vc_get_keycode(int);
extern double floor(double);
extern char * gettext(const char *);
typedef long unsigned int addr_t;
typedef long unsigned int ulong_t;
extern void mm_boot_free_mem(addr_t, ulong_t);
typedef long unsigned int ulong_t;
extern long unsigned int multiboot_get_phys_mem(ulong_t);
extern int kbd_deinit();
extern int ioapic_init(struct sys_info *);
extern int arch_numa_init(struct sys_info *);
typedef long unsigned int ulong_t;
extern struct mem_region * kmem_get_region_by_addr(ulong_t);
extern int __ctype_toupper_loc();
extern void disable_perf_event(struct pmc_event *);
typedef long int time_t;
typedef long int time_t;
extern double difftime(time_t, time_t);
extern long int time(long int *);
extern int mbsnrtowcs();

static int naut_wcsftime(lua_State *L){
	lua_Number temp_return =wcsftime();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_reserve_mem(lua_State *L){
	long unsigned int start = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	mm_boot_reserve_mem(start ,size);
	return 1; 
}
static int naut_fclose(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	lua_Number temp_return =fclose(f);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pthread_mutex_lock(lua_State *L){
	lua_Number temp_return =pthread_mutex_lock();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_condvar_test(lua_State *L){
	nk_condvar_test();
	return 1; 
}
static int naut_simple_strtoul(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	lua_Number temp_return =simple_strtoul(cp ,endp ,base);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_thread_queue_sleep(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_thread_queue_sleep(q);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_dequeue_entry_atomic(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	struct nk_queue_entry * entry = luaL_checkunsigned(L,2);
	lua_Number temp_return =*(lua_Number *)nk_dequeue_entry_atomic(q ,entry);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_dequeue_first_atomic(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_dequeue_first_atomic(q);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_free_vmem(lua_State *L){
	long unsigned int start = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	mm_boot_free_vmem(start ,size);
	return 1; 
}
static int naut_nk_condvar_destroy(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_condvar_destroy(c);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_timer_setup(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	unsigned int quantum = luaL_checkunsigned(L,2);
	apic_timer_setup(apic ,quantum);
	return 1; 
}
static int naut_mktime(lua_State *L){
	struct tm * timeptr = luaL_checkunsigned(L,1);
	lua_Number temp_return =mktime(timeptr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_init(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int magic = luaL_checkunsigned(L,2);
	init(mbd ,magic);
	return 1; 
}
static int naut_nk_htable_count(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_htable_count(htable);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_disable_all_events(lua_State *L){
	disable_all_events();
	return 1; 
}
static int naut___strftime_l(lua_State *L){
	lua_Number temp_return =__strftime_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strict_strtoul(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long unsigned int * res = luaL_checkunsigned(L,3);
	lua_Number temp_return =strict_strtoul(cp ,base ,res);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_enqueue_keycode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int key = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_enqueue_keycode(vc ,key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_switch_to_prev_vc(lua_State *L){
	lua_Number temp_return =nk_switch_to_prev_vc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vga_init_screen(lua_State *L){
	vga_init_screen();
	return 1; 
}
static int naut_msr_read(lua_State *L){
	unsigned int msr = luaL_checkunsigned(L,1);
	lua_Number temp_return =msr_read(msr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_sched_init(lua_State *L){
	lua_Number temp_return =nk_sched_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_stack_dump(lua_State *L){
	long unsigned int n = luaL_checkunsigned(L,1);
	nk_stack_dump(n);
	return 1; 
}
static int naut_nk_my_numa_node(lua_State *L){
	lua_Number temp_return =nk_my_numa_node();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strnlen(lua_State *L){
	const char * str = luaL_checkstring(L,1);
	long unsigned int max = luaL_checkunsigned(L,2);
	lua_Number temp_return =strnlen(str ,max);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_buddy_init(lua_State *L){
	long unsigned int base_addr = luaL_checkunsigned(L,1);
	long unsigned int pool_order = luaL_checkunsigned(L,2);
	long unsigned int min_order = luaL_checkunsigned(L,3);
	lua_Number temp_return =*(lua_Number *)buddy_init(base_addr ,pool_order ,min_order);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rb_erase(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	struct rb_root * root = luaL_checkunsigned(L,2);
	nk_rb_erase(node ,root);
	return 1; 
}
static int naut_nk_dequeue_scancode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_dequeue_scancode(vc);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_yield(lua_State *L){
	nk_yield();
	return 1; 
}
static int naut_multiboot_get_size(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	lua_Number temp_return =multiboot_get_size(mbd);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___wctype_l(lua_State *L){
	lua_Number temp_return =__wctype_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_perf_report(lua_State *L){
	perf_report();
	return 1; 
}
static int naut_mb_is_hrt_environ(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	lua_Number temp_return =mb_is_hrt_environ(mbd);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_snprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	lua_Number temp_return =snprintf(buf ,size ,fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_dump_page_map(lua_State *L){
	mm_dump_page_map();
	return 1; 
}
static int naut_str_tolower(lua_State *L){
	char * s = luaL_checkstring(L,1);
	str_tolower(s);
	return 1; 
}
static int naut_cosh(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =cosh(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___ctype_get_mb_cur_max(lua_State *L){
	lua_Number temp_return =__ctype_get_mb_cur_max();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wcrtomb(lua_State *L){
	lua_Number temp_return =wcrtomb();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_i8254_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =i8254_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_asin(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =asin(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_clock(lua_State *L){
	lua_Number temp_return =clock();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___mm_boot_alloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	long unsigned int align = luaL_checkunsigned(L,2);
	long unsigned int goal = luaL_checkunsigned(L,3);

	return 1; 
}
static int naut_nk_htable_remove(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	int free_key = luaL_checkint(L,3);
	lua_Number temp_return =nk_htable_remove(htable ,key ,free_key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_abs(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =abs(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_init(lua_State *L){
	struct cpu * core = luaL_checkunsigned(L,1);
	apic_init(core);
	return 1; 
}
static int naut_nk_htable_iter_remove(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	int free_key = luaL_checkint(L,2);
	lua_Number temp_return =nk_htable_iter_remove(iter ,free_key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___freelocale(lua_State *L){
	lua_Number temp_return =__freelocale();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_buddy_free(lua_State *L){
	struct buddy_mempool * mp = luaL_checkunsigned(L,1);
	void * addr = luaL_checkunsigned(L,2);
	long unsigned int order = luaL_checkunsigned(L,3);
	buddy_free(mp ,addr ,order);
	return 1; 
}
static int naut_nk_htable_dec(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	lua_Number temp_return =nk_htable_dec(htable ,key ,value);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_sinh(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =sinh(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_puts(lua_State *L){
	char * s = luaL_checkstring(L,1);
	lua_Number temp_return =nk_vc_puts(s);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_null_irq_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	lua_Number temp_return =null_irq_handler(excp ,vector);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rb_insert_color(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	struct rb_root * root = luaL_checkunsigned(L,2);
	nk_rb_insert_color(node ,root);
	return 1; 
}
static int naut_nk_bind_vc(lua_State *L){
	struct nk_thread * thread = luaL_checkunsigned(L,1);
	struct nk_virtual_console * cons = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_bind_vc(thread ,cons);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wcsxfrm(lua_State *L){
	lua_Number temp_return =wcsxfrm();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_mem_dump(lua_State *L){
	unsigned char * start = luaL_checkstring(L,1);
	int n = luaL_checkint(L,2);
	serial_mem_dump(start ,n);
	return 1; 
}
static int naut___towlower_l(lua_State *L){
	lua_Number temp_return =__towlower_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mf_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	lua_Number temp_return =mf_handler(excp ,vec);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_realloc(lua_State *L){
	void * ptr = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);

	return 1; 
}
static int naut_nk_thread_run(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_thread_run(t);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___get_cpu_features(lua_State *L){
	lua_Number temp_return =__get_cpu_features();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_printf(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	lua_Number temp_return =printf(s);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_scnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	lua_Number temp_return =scnprintf(buf ,size ,fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_printk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	lua_Number temp_return =printk(fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pthread_mutex_init(lua_State *L){
	lua_Number temp_return =pthread_mutex_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___thread_fork(lua_State *L){

	return 1; 
}
static int naut_nemo_event_notify(lua_State *L){
	int eid = luaL_checkint(L,1);
	int cpu = luaL_checkint(L,2);
	nemo_event_notify(eid ,cpu);
	return 1; 
}
static int naut_nk_tls_test(lua_State *L){
	nk_tls_test();
	return 1; 
}
static int naut_arch_detect_mem_map(lua_State *L){
	struct mmap_info * mm_info = luaL_checkunsigned(L,1);
	struct mem_map_entry * memory_map = luaL_checkunsigned(L,2);
	long unsigned int mbd = luaL_checkunsigned(L,3);
	arch_detect_mem_map(mm_info ,memory_map ,mbd);
	return 1; 
}
static int naut_nk_htable_change(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	int free_value = luaL_checkint(L,4);
	lua_Number temp_return =nk_htable_change(htable ,key ,value ,free_value);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strdup(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	char * temp_return =strdup(s);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_buddy_alloc(lua_State *L){
	struct buddy_mempool * mp = luaL_checkunsigned(L,1);
	long unsigned int order = luaL_checkunsigned(L,2);

	return 1; 
}
static int naut_ftello64(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	lua_Number temp_return =ftello64(stream);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_join(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	void * * retval = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_join(t ,retval);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_num_regions(lua_State *L){
	lua_Number temp_return =mm_boot_num_regions();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_printlevel(lua_State *L){
	int level = luaL_checkint(L,1);
	const char * format = luaL_checkstring(L,2);
	serial_printlevel(level ,format);
	return 1; 
}
static int naut_nk_rb_prev(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_rb_prev(node);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___wcscoll_l(lua_State *L){
	lua_Number temp_return =__wcscoll_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___errno_location(lua_State *L){
	lua_Number temp_return =__errno_location();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strerror(lua_State *L){
	int errnum = luaL_checkint(L,1);
	char * temp_return =strerror(errnum);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_nk_vc_getchar_extended(lua_State *L){
	int wait = luaL_checkint(L,1);
	lua_Number temp_return =nk_vc_getchar_extended(wait);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_localtime(lua_State *L){
	const long int * timer = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)localtime(timer);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_core_barrier_arrive(lua_State *L){
	lua_Number temp_return =nk_core_barrier_arrive();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_free(lua_State *L){
	void * addr = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	mm_boot_free(addr ,size);
	return 1; 
}
static int naut_Format_Output(lua_State *L){
	struct Output_Sink * q = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	struct __va_list_tag * ap = luaL_checkunsigned(L,3);
	lua_Number temp_return =Format_Output(q ,format ,ap);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_get_iter_key(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_htable_get_iter_key(iter);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strtold(lua_State *L){
	lua_Number temp_return =strtold();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_abort(lua_State *L){
	abort();
	return 1; 
}
static int naut_fprintf(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	const char * s = luaL_checkstring(L,2);
	lua_Number temp_return =fprintf(f ,s);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_towupper(lua_State *L){
	lua_Number temp_return =towupper();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_feof(lua_State *L){
	void * x = luaL_checkunsigned(L,1);
	lua_Number temp_return =feof(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_tan(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =tan(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_need_resched(lua_State *L){
	lua_Number temp_return =*(lua_Number *)nk_need_resched();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_get_parent_tid(lua_State *L){

	return 1; 
}
static int naut_simple_strtoull(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	lua_Number temp_return =simple_strtoull(cp ,endp ,base);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_clearerr(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	clearerr(stream);
	return 1; 
}
static int naut_nk_dequeue_keycode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_dequeue_keycode(vc);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_lrand48(lua_State *L){
	lua_Number temp_return =lrand48();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_write(lua_State *L){
	lua_Number temp_return =write();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_smp_bringup_aps(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =smp_bringup_aps(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kbd_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =kbd_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wmemchr(lua_State *L){
	lua_Number temp_return =wmemchr();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_barrier_wait(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_barrier_wait(barrier);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_sin(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =sin(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_putlnn(lua_State *L){
	const char * line = luaL_checkstring(L,1);
	int len = luaL_checkint(L,2);
	serial_putlnn(line ,len);
	return 1; 
}
static int naut_nk_destroy_htable_iter(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	nk_destroy_htable_iter(iter);
	return 1; 
}
static int naut_strncat(lua_State *L){
	char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	char * temp_return =strncat(s1 ,s2 ,limit);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_atan(lua_State *L){
	double __x = luaL_checknumber(L,1);
	lua_Number temp_return =atan(__x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_cpu_topo_discover(lua_State *L){
	struct cpu * me = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_cpu_topo_discover(me);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ioctl(lua_State *L){
	int d = luaL_checkint(L,1);
	long unsigned int request = luaL_checkunsigned(L,2);
	lua_Number temp_return =ioctl(d ,request);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pmc_init(lua_State *L){
	lua_Number temp_return =pmc_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nemo_event_broadcast(lua_State *L){
	int eid = luaL_checkint(L,1);
	nemo_event_broadcast(eid);
	return 1; 
}
static int naut_strcasecmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	lua_Number temp_return =strcasecmp(s1 ,s2);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rwlock_rd_unlock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_rwlock_rd_unlock(l);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___duplocale(lua_State *L){
	void * locobj = luaL_checkunsigned(L,1);

	return 1; 
}
static int naut_mm_get_all_mem(lua_State *L){
	lua_Number temp_return =mm_get_all_mem();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_insert(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	lua_Number temp_return =nk_htable_insert(htable ,key ,value);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wctob(lua_State *L){
	lua_Number temp_return =wctob();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_atan2(lua_State *L){
	double y = luaL_checknumber(L,1);
	double x = luaL_checknumber(L,2);
	lua_Number temp_return =atan2(y ,x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wmemmove(lua_State *L){
	lua_Number temp_return =wmemmove();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mb_get_first_hrt_addr(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);

	return 1; 
}
static int naut_btowc(lua_State *L){
	lua_Number temp_return =btowc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_test_nemo(lua_State *L){
	test_nemo();
	return 1; 
}
static int naut_wcsnrtombs(lua_State *L){
	lua_Number temp_return =wcsnrtombs();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vscnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	struct __va_list_tag * args = luaL_checkunsigned(L,4);
	lua_Number temp_return =vscnprintf(buf ,size ,fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_init(lua_State *L){
	serial_init();
	return 1; 
}
static int naut_main(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int magic = luaL_checkunsigned(L,2);
	main(mbd ,magic);
	return 1; 
}
static int naut_nk_timer_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_timer_handler(excp ,vec);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_scrollup_specific(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_vc_scrollup_specific(vc);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_kmem_init(lua_State *L){
	mm_boot_kmem_init();
	return 1; 
}
static int naut___uselocale(lua_State *L){
	lua_Number temp_return =__uselocale();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_deinit(lua_State *L){
	lua_Number temp_return =nk_vc_deinit();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_multiboot_parse(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	long unsigned int magic = luaL_checkunsigned(L,2);
	lua_Number temp_return =*(lua_Number *)multiboot_parse(mbd ,magic);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___wcsftime_l(lua_State *L){
	lua_Number temp_return =__wcsftime_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strcoll(lua_State *L){
	const char * str1 = luaL_checkstring(L,1);
	const char * str2 = luaL_checkstring(L,2);
	lua_Number temp_return =strcoll(str1 ,str2);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___popcountdi2(lua_State *L){
	long long int a = luaL_checkint(L,1);
	lua_Number temp_return =__popcountdi2(a);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_gets(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	int n = luaL_checkint(L,2);
	int display = luaL_checkint(L,3);
	lua_Number temp_return =nk_vc_gets(buf ,n ,display);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_panic(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	panic(fmt);
	return 1; 
}
static int naut_fmod(lua_State *L){
	double y = luaL_checknumber(L,1);
	double x = luaL_checknumber(L,2);
	lua_Number temp_return =fmod(y ,x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_get_num_domains(lua_State *L){
	lua_Number temp_return =nk_get_num_domains();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_clock_gettime(lua_State *L){
	int clk_id = luaL_checkint(L,1);
	struct timespec * tp = luaL_checkunsigned(L,2);
	lua_Number temp_return =clock_gettime(clk_id ,tp);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vsscanf(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	struct __va_list_tag * args = luaL_checkunsigned(L,3);
	lua_Number temp_return =vsscanf(buf ,fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_wait(lua_State *L){
	nk_vc_wait();
	return 1; 
}
static int naut_nk_print_regs(lua_State *L){
	struct nk_regs * r = luaL_checkunsigned(L,1);
	nk_print_regs(r);
	return 1; 
}
static int naut_nk_condvar_init(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_condvar_init(c);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pci_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =pci_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___stack_chk_fail(lua_State *L){
	lua_Number temp_return =__stack_chk_fail();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_thread_queue_wake_one(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_thread_queue_wake_one(q);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_print(lua_State *L){
	char * s = luaL_checkstring(L,1);
	lua_Number temp_return =nk_vc_print(s);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_multiboot_get_sys_ram(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	lua_Number temp_return =multiboot_get_sys_ram(mbd);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_acpi_init(lua_State *L){
	nk_acpi_init();
	return 1; 
}
static int naut_reboot(lua_State *L){
	reboot();
	return 1; 
}
static int naut_nk_release_vc(lua_State *L){
	struct nk_thread * thread = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_release_vc(thread);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_sprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	lua_Number temp_return =sprintf(buf ,fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_print_list(lua_State *L){
	const char * format = luaL_checkstring(L,1);
	struct __va_list_tag * ap = luaL_checkunsigned(L,2);
	serial_print_list(format ,ap);
	return 1; 
}
static int naut___ctype_b_loc(lua_State *L){
	lua_Number temp_return =__ctype_b_loc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strrchr(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	int c = luaL_checkint(L,2);
	char * temp_return =strrchr(s ,c);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_vga_init(lua_State *L){
	vga_init();
	return 1; 
}
static int naut___do_backtrace(lua_State *L){
	void * * fp = luaL_checkunsigned(L,1);
	unsigned int depth = luaL_checkunsigned(L,2);
	__do_backtrace(fp ,depth);
	return 1; 
}
static int naut_strcspn(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	const char * reject = luaL_checkstring(L,2);
	lua_Number temp_return =strcspn(s ,reject);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ferror(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	lua_Number temp_return =ferror(f);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_free(lua_State *L){
	void * addr = luaL_checkunsigned(L,1);
	free(addr);
	return 1; 
}
static int naut_nk_condvar_bcast(lua_State *L){
	struct nk_condvar * c = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_condvar_bcast(c);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_log(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =log(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_timer_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_timer_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rb_replace_node(lua_State *L){
	struct rb_node * victim = luaL_checkunsigned(L,1);
	struct rb_node * new = luaL_checkunsigned(L,2);
	struct rb_root * root = luaL_checkunsigned(L,3);
	nk_rb_replace_node(victim ,new ,root);
	return 1; 
}
static int naut_nk_vc_printf(lua_State *L){
	char * fmt = luaL_checkstring(L,1);
	lua_Number temp_return =nk_vc_printf(fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_read_timer(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	lua_Number temp_return =apic_read_timer(apic);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_msr_write(lua_State *L){
	unsigned int msr = luaL_checkunsigned(L,1);
	long unsigned int data = luaL_checkunsigned(L,2);
	msr_write(msr ,data);
	return 1; 
}
static int naut_rand(lua_State *L){
	lua_Number temp_return =rand();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ischar(lua_State *L){
	unsigned char * str = luaL_checkstring(L,1);
	lua_Number temp_return =ischar(str);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ldexp(lua_State *L){
	double x = luaL_checknumber(L,1);
	int exp = luaL_checkint(L,2);
	lua_Number temp_return =ldexp(x ,exp);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_handle_input(lua_State *L){
	short unsigned int scan = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_vc_handle_input(scan);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_queue_create(lua_State *L){
	lua_Number temp_return =*(lua_Number *)nk_queue_create();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strncpy(lua_State *L){
	char * dest = luaL_checkstring(L,1);
	const char * src = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	char * temp_return =strncpy(dest ,src ,limit);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_apic_wait_for_send(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	lua_Number temp_return =apic_wait_for_send(apic);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_get_maxlvt(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	lua_Number temp_return =apic_get_maxlvt(apic);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___wcsxfrm_l(lua_State *L){
	lua_Number temp_return =__wcsxfrm_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kmem_add_memory(lua_State *L){
	struct mem_region * mem = luaL_checkunsigned(L,1);
	long unsigned int base_addr = luaL_checkunsigned(L,2);
	long unsigned int size = luaL_checkunsigned(L,3);
	kmem_add_memory(mem ,base_addr ,size);
	return 1; 
}
static int naut_mm_boot_alloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);

	return 1; 
}
static int naut_system(lua_State *L){
	const char * command = luaL_checkstring(L,1);
	lua_Number temp_return =system(command);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_release_perf_event(lua_State *L){
	struct pmc_event * event = luaL_checkunsigned(L,1);
	release_perf_event(event);
	return 1; 
}
static int naut_strict_strtoull(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long long unsigned int * res = luaL_checkunsigned(L,3);
	lua_Number temp_return =strict_strtoull(cp ,base ,res);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_test_setlong(lua_State *L){
	lua_Number temp_return =test_setlong();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_thread_exit(lua_State *L){
	void * retval = luaL_checkunsigned(L,1);
	nk_thread_exit(retval);
	return 1; 
}
static int naut_nk_sleep(lua_State *L){
	unsigned int msec = luaL_checkunsigned(L,1);
	nk_sleep(msec);
	return 1; 
}
static int naut_nk_dequeue_entry(lua_State *L){
	struct nk_queue_entry * entry = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_dequeue_entry(entry);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rwlock_rd_lock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_rwlock_rd_lock(l);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_hash_long(lua_State *L){
	long unsigned int val = luaL_checkunsigned(L,1);
	unsigned int bits = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_hash_long(val ,bits);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_buddy_dump_mempool(lua_State *L){
	struct buddy_mempool * mp = luaL_checkunsigned(L,1);
	buddy_dump_mempool(mp);
	return 1; 
}
static int naut_fpu_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	fpu_init(naut);
	return 1; 
}
static int naut_fscanf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	lua_Number temp_return =fscanf(stream ,format);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wcscmp(lua_State *L){
	lua_Number temp_return =wcscmp();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_idle(lua_State *L){
	void * in = luaL_checkunsigned(L,1);
	void * * out = luaL_checkunsigned(L,2);
	idle(in ,out);
	return 1; 
}
static int naut_vsnprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	const char * fmt = luaL_checkstring(L,3);
	struct __va_list_tag * args = luaL_checkunsigned(L,4);
	lua_Number temp_return =vsnprintf(buf ,size ,fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___assert_fail(lua_State *L){
	const char * assertion = luaL_checkstring(L,1);
	const char * file = luaL_checkstring(L,2);
	unsigned int line = luaL_checkunsigned(L,3);
	const char * function = luaL_checkstring(L,4);
	__assert_fail(assertion ,file ,line ,function);
	return 1; 
}
static int naut_nk_core_barrier_wait(lua_State *L){
	lua_Number temp_return =nk_core_barrier_wait();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_smp_ap_entry(lua_State *L){
	struct cpu * core = luaL_checkunsigned(L,1);
	smp_ap_entry(core);
	return 1; 
}
static int naut_bindtextdomain(lua_State *L){
	const char * domainname = luaL_checkstring(L,1);
	const char * dirname = luaL_checkstring(L,2);
	char * temp_return =bindtextdomain(domainname ,dirname);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_wmemcpy(lua_State *L){
	lua_Number temp_return =wmemcpy();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rand_init(lua_State *L){
	struct cpu * cpu = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_rand_init(cpu);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_alloc_aligned(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);
	long unsigned int align = luaL_checkunsigned(L,2);

	return 1; 
}
static int naut_kmem_get_base_zone(lua_State *L){
	lua_Number temp_return =*(lua_Number *)kmem_get_base_zone();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fseek(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	long int offset = luaL_checkint(L,2);
	int whence = luaL_checkint(L,3);
	lua_Number temp_return =fseek(stream ,offset ,whence);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_destroy_vc(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_destroy_vc(vc);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_launch_shell(lua_State *L){
	char * name = luaL_checkstring(L,1);
	int cpu = luaL_checkint(L,2);

	return 1; 
}
static int naut_nk_numa_init(lua_State *L){
	lua_Number temp_return =nk_numa_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rwlock_wr_unlock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_rwlock_wr_unlock(l);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_enqueue_scancode(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	short unsigned int scan = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_enqueue_scancode(vc ,scan);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_get_iter_value(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_htable_get_iter_value(iter);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_switch_to_next_vc(lua_State *L){
	lua_Number temp_return =nk_switch_to_next_vc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_search(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_htable_search(htable ,key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_tls_key_delete(lua_State *L){
	unsigned int key = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_tls_key_delete(key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_srand48(lua_State *L){
	long int seedval = luaL_checkint(L,1);
	srand48(seedval);
	return 1; 
}
static int naut_strtold_l(lua_State *L){
	lua_Number temp_return =strtold_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_exp(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =exp(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fseeko64(lua_State *L){
	void * fp = luaL_checkunsigned(L,1);
	long unsigned int offset = luaL_checkunsigned(L,2);
	int whence = luaL_checkint(L,3);
	lua_Number temp_return =fseeko64(fp ,offset ,whence);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_iter_advance(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_htable_iter_advance(iter);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_setvbuf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	char * buf = luaL_checkstring(L,2);
	int type = luaL_checkint(L,3);
	long unsigned int size = luaL_checkunsigned(L,4);
	lua_Number temp_return =setvbuf(stream ,buf ,type ,size);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strncasecmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	lua_Number temp_return =strncasecmp(s1 ,s2 ,limit);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_simple_strtoll(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	char * * endp = luaL_checkstring(L,2);
	unsigned int base = luaL_checkunsigned(L,3);
	lua_Number temp_return =simple_strtoll(cp ,endp ,base);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_imcr_begin_sym_io(lua_State *L){
	imcr_begin_sym_io();
	return 1; 
}
static int naut_lseek64(lua_State *L){
	int fd = luaL_checkint(L,1);
	long unsigned int offset = luaL_checkunsigned(L,2);
	int whence = luaL_checkint(L,3);
	lua_Number temp_return =lseek64(fd ,offset ,whence);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strtol(lua_State *L){
	const char * str = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	int base = luaL_checkint(L,3);
	lua_Number temp_return =strtol(str ,endptr ,base);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fputc(lua_State *L){
	int c = luaL_checkint(L,1);
	void * f = luaL_checkunsigned(L,2);
	lua_Number temp_return =fputc(c ,f);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_bcast_iipi(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	apic_bcast_iipi(apic);
	return 1; 
}
static int naut_strtoi(lua_State *L){
	const char * nptr = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	lua_Number temp_return =strtoi(nptr ,endptr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_deinit_iipi(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	unsigned int remote_id = luaL_checkunsigned(L,2);
	apic_deinit_iipi(apic ,remote_id);
	return 1; 
}
static int naut_strtod(lua_State *L){
	const char * string = luaL_checkstring(L,1);
	char * * endPtr = luaL_checkstring(L,2);
	lua_Number temp_return =strtod(string ,endPtr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strtof(lua_State *L){
	lua_Number temp_return =strtof();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_writev(lua_State *L){
	lua_Number temp_return =writev();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_frexp(lua_State *L){
	double x = luaL_checknumber(L,1);
	int * e = luaL_checkunsigned(L,2);
	lua_Number temp_return =frexp(x ,e);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fputs(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	void * stream = luaL_checkunsigned(L,2);
	lua_Number temp_return =fputs(s ,stream);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strtox(lua_State *L){
	const char * nptr = luaL_checkstring(L,1);
	char * * endptr = luaL_checkstring(L,2);
	lua_Number temp_return =strtox(nptr ,endptr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_set_thread_fork_output(lua_State *L){
	void * result = luaL_checkunsigned(L,1);
	nk_set_thread_fork_output(result);
	return 1; 
}
static int naut_nemo_unregister_event_action(lua_State *L){
	int id = luaL_checkint(L,1);
	nemo_unregister_event_action(id);
	return 1; 
}
static int naut_wmemset(lua_State *L){
	lua_Number temp_return =wmemset();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_iswctype(lua_State *L){
	lua_Number temp_return =iswctype();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wcscoll(lua_State *L){
	lua_Number temp_return =wcscoll();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ceil(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =ceil(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strsep(lua_State *L){
	char * * s = luaL_checkstring(L,1);
	const char * ct = luaL_checkstring(L,2);
	char * temp_return =strsep(s ,ct);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_fileno(lua_State *L){
	lua_Number temp_return =fileno();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strict_strtoll(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long long int * res = luaL_checkunsigned(L,3);
	lua_Number temp_return =strict_strtoll(cp ,base ,res);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_remove(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	lua_Number temp_return =remove(path);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_apic_send_iipi(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	unsigned int remote_id = luaL_checkunsigned(L,2);
	apic_send_iipi(apic ,remote_id);
	return 1; 
}
static int naut_apic_self_ipi(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	unsigned int vector = luaL_checkunsigned(L,2);
	apic_self_ipi(apic ,vector);
	return 1; 
}
static int naut_strncmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	long unsigned int limit = luaL_checkunsigned(L,3);
	lua_Number temp_return =strncmp(s1 ,s2 ,limit);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strcat(lua_State *L){
	char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	char * temp_return =strcat(s1 ,s2);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_xm_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vec = luaL_checkunsigned(L,2);
	lua_Number temp_return =xm_handler(excp ,vec);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_acpi_shutdown(lua_State *L){
	acpi_shutdown();
	return 1; 
}
static int naut_nk_get_rand_bytes(lua_State *L){
	unsigned char * buf = luaL_checkstring(L,1);
	unsigned int len = luaL_checkunsigned(L,2);
	nk_get_rand_bytes(buf ,len);
	return 1; 
}
static int naut_putwc(lua_State *L){
	lua_Number temp_return =putwc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vga_get_cursor(lua_State *L){
	unsigned char * x = luaL_checkstring(L,1);
	unsigned char * y = luaL_checkstring(L,2);
	vga_get_cursor(x ,y);
	return 1; 
}
static int naut_strchr(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	int c = luaL_checkint(L,2);
	char * temp_return =strchr(s ,c);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_acpi_reboot(lua_State *L){
	acpi_reboot();
	return 1; 
}
static int naut_nk_mwait_init(lua_State *L){
	lua_Number temp_return =nk_mwait_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_i8254_calib_tsc(lua_State *L){
	lua_Number temp_return =i8254_calib_tsc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___kernel_standard(lua_State *L){
	lua_Number temp_return =__kernel_standard();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_core_barrier_lower(lua_State *L){
	lua_Number temp_return =nk_core_barrier_lower();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ungetwc(lua_State *L){
	lua_Number temp_return =ungetwc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_barrier_init(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	unsigned int count = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_barrier_init(barrier ,count);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_cos(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =cos(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_disable_8259pic(lua_State *L){
	disable_8259pic();
	return 1; 
}
static int naut_nk_get_tid(lua_State *L){

	return 1; 
}
static int naut_nk_kmem_init(lua_State *L){
	lua_Number temp_return =nk_kmem_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strftime(lua_State *L){
	char * str = luaL_checkstring(L,1);
	long unsigned int maxsize = luaL_checkunsigned(L,2);
	const char * format = luaL_checkstring(L,3);
	const struct tm * timeptr = luaL_checkunsigned(L,4);
	lua_Number temp_return =strftime(str ,maxsize ,format ,timeptr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_int_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_int_init(sys);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pow(lua_State *L){
	double x = luaL_checknumber(L,1);
	double y = luaL_checknumber(L,2);
	lua_Number temp_return =pow(x ,y);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_barrier_test(lua_State *L){
	nk_barrier_test();
	return 1; 
}
static int naut___strxfrm_l(lua_State *L){
	lua_Number temp_return =__strxfrm_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_poll(lua_State *L){
	struct pollfd * fds = luaL_checkunsigned(L,1);
	long unsigned int nfds = luaL_checkunsigned(L,2);
	int timeout = luaL_checkint(L,3);
	lua_Number temp_return =poll(fds ,nfds ,timeout);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_paging_init(lua_State *L){
	struct nk_mem_info * mem = luaL_checkunsigned(L,1);
	long unsigned int mbd = luaL_checkunsigned(L,2);
	nk_paging_init(mem ,mbd);
	return 1; 
}
static int naut_arch_early_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =arch_early_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rand_set_xi(lua_State *L){
	long unsigned int xi = luaL_checkunsigned(L,1);
	nk_rand_set_xi(xi);
	return 1; 
}
static int naut_mm_get_usable_ram(lua_State *L){
	lua_Number temp_return =mm_get_usable_ram();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_create_htable_iter(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_create_htable_iter(htable);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_putc(lua_State *L){
	lua_Number temp_return =putc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___nl_langinfo_l(lua_State *L){
	int item = luaL_checkint(L,1);
	void * locale = luaL_checkunsigned(L,2);
	char * temp_return =__nl_langinfo_l(item ,locale);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_mbrtowc(lua_State *L){
	lua_Number temp_return =mbrtowc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_kmem_cleanup(lua_State *L){
	mm_boot_kmem_cleanup();
	return 1; 
}
static int naut_nk_thread_destroy(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	nk_thread_destroy(t);
	return 1; 
}
static int naut_mbsrtowcs(lua_State *L){
	lua_Number temp_return =mbsrtowcs();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fmodnew(lua_State *L){
	int y = luaL_checkint(L,1);
	int x = luaL_checkint(L,2);
	lua_Number temp_return =fmodnew(y ,x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_arch_reserve_boot_regions(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	arch_reserve_boot_regions(mbd);
	return 1; 
}
static int naut_nk_core_barrier_raise(lua_State *L){
	lua_Number temp_return =nk_core_barrier_raise();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_inc(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	long unsigned int key = luaL_checkunsigned(L,2);
	long unsigned int value = luaL_checkunsigned(L,3);
	lua_Number temp_return =nk_htable_inc(htable ,key ,value);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_drand48(lua_State *L){
	lua_Number temp_return =drand48();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rwlock_wr_lock(lua_State *L){
	struct nk_rwlock * l = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_rwlock_wr_lock(l);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_tanh(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =tanh(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vsprintf(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	struct __va_list_tag * args = luaL_checkunsigned(L,3);
	lua_Number temp_return =vsprintf(buf ,fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_enable_all_events(lua_State *L){
	enable_all_events();
	return 1; 
}
static int naut_rename(lua_State *L){
	const char * old = luaL_checkstring(L,1);
	const char * new = luaL_checkstring(L,2);
	lua_Number temp_return =rename(old ,new);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_malloc(lua_State *L){
	long unsigned int size = luaL_checkunsigned(L,1);

	return 1; 
}
static int naut_nk_rwlock_test(lua_State *L){
	nk_rwlock_test();
	return 1; 
}
static int naut_srand(lua_State *L){
	unsigned int seed = luaL_checkunsigned(L,1);
	srand(seed);
	return 1; 
}
static int naut_nk_hash_buffer(lua_State *L){
	unsigned char * msg = luaL_checkstring(L,1);
	unsigned int length = luaL_checkunsigned(L,2);
	lua_Number temp_return =nk_hash_buffer(msg ,length);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_enable_perf_event(lua_State *L){
	struct pmc_event * event = luaL_checkunsigned(L,1);
	enable_perf_event(event);
	return 1; 
}
static int naut_getwc(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	lua_Number temp_return =getwc(stream);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_get_base_region_by_cpu(lua_State *L){
	unsigned int cpu = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_get_base_region_by_cpu(cpu);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strict_strtol(lua_State *L){
	const char * cp = luaL_checkstring(L,1);
	unsigned int base = luaL_checkunsigned(L,2);
	long int * res = luaL_checkunsigned(L,3);
	lua_Number temp_return =strict_strtol(cp ,base ,res);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fabs(lua_State *L){
	double __x = luaL_checknumber(L,1);
	lua_Number temp_return =fabs(__x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_getc(lua_State *L){
	void * arg = luaL_checkunsigned(L,1);
	lua_Number temp_return =getc(arg);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_sqrt(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =sqrt(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_towlower(lua_State *L){
	lua_Number temp_return =towlower();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_last_pfn(lua_State *L){
	lua_Number temp_return =mm_boot_last_pfn();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_detect_cpu(lua_State *L){
	detect_cpu();
	return 1; 
}
static int naut___ctype_tolower_loc(lua_State *L){
	lua_Number temp_return =__ctype_tolower_loc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_str_toupper(lua_State *L){
	char * s = luaL_checkstring(L,1);
	str_toupper(s);
	return 1; 
}
static int naut_mm_boot_reserve_vmem(lua_State *L){
	long unsigned int start = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	mm_boot_reserve_vmem(start ,size);
	return 1; 
}
static int naut_textdomain(lua_State *L){
	const char * domainname = luaL_checkstring(L,1);
	char * temp_return =textdomain(domainname);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_fopen64(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	void * f = luaL_checkunsigned(L,2);

	return 1; 
}
static int naut_wmemcmp(lua_State *L){
	lua_Number temp_return =wmemcmp();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rb_next(lua_State *L){
	struct rb_node * node = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_rb_next(node);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vga_puts(lua_State *L){
	char * buf = luaL_checkstring(L,1);
	vga_puts(buf);
	return 1; 
}
static int naut_fflush(lua_State *L){
	void * f = luaL_checkunsigned(L,1);
	lua_Number temp_return =fflush(f);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___iswctype_l(lua_State *L){
	lua_Number temp_return =__iswctype_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_tmpnam(lua_State *L){
	char * s = luaL_checkstring(L,1);
	char * temp_return =tmpnam(s);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_strxfrm(lua_State *L){
	lua_Number temp_return =strxfrm();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___strtod_l(lua_State *L){
	lua_Number temp_return =__strtod_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_read(lua_State *L){
	lua_Number temp_return =read();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_puts(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	serial_puts(buf);
	return 1; 
}
static int naut_nk_vc_init(lua_State *L){
	lua_Number temp_return =nk_vc_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rand_seed(lua_State *L){
	long unsigned int seed = luaL_checkunsigned(L,1);
	nk_rand_seed(seed);
	return 1; 
}
static int naut_nemo_event_await(lua_State *L){
	nemo_event_await();
	return 1; 
}
static int naut_nk_vc_scrollup(lua_State *L){
	lua_Number temp_return =nk_vc_scrollup();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strstr(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	char * temp_return =strstr(s1 ,s2);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut___strtof_l(lua_State *L){
	lua_Number temp_return =__strtof_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_early_printk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	struct __va_list_tag * args = luaL_checkunsigned(L,2);
	lua_Number temp_return =early_printk(fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___strcoll_l(lua_State *L){
	lua_Number temp_return =__strcoll_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_freopen(lua_State *L){
	const char * fname = luaL_checkstring(L,1);
	const char * mode = luaL_checkstring(L,2);
	void * stream = luaL_checkunsigned(L,3);

	return 1; 
}
static int naut_mm_boot_get_region(lua_State *L){
	unsigned int i = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)mm_boot_get_region(i);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strcmp(lua_State *L){
	const char * s1 = luaL_checkstring(L,1);
	const char * s2 = luaL_checkstring(L,2);
	lua_Number temp_return =strcmp(s1 ,s2);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_tmpfile(lua_State *L){

	return 1; 
}
static int naut_nk_dequeue_first(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_dequeue_first(q);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fgets(lua_State *L){
	char * str = luaL_checkstring(L,1);
	int n = luaL_checkint(L,2);
	void * stream = luaL_checkunsigned(L,3);
	char * temp_return =fgets(str ,n ,stream);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_ftell(lua_State *L){
	void * x = luaL_checkunsigned(L,1);
	lua_Number temp_return =ftell(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_exit(lua_State *L){
	int status = luaL_checkint(L,1);
	exit(status);
	return 1; 
}
static int naut_null_excp_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	long unsigned int fault_addr = luaL_checkunsigned(L,3);
	lua_Number temp_return =null_excp_handler(excp ,vector ,fault_addr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_pf_handler(lua_State *L){
	struct excp_entry_state * excp = luaL_checkunsigned(L,1);
	long unsigned int vector = luaL_checkunsigned(L,2);
	long unsigned int fault_addr = luaL_checkunsigned(L,3);
	lua_Number temp_return =nk_pf_handler(excp ,vector ,fault_addr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vga_scrollup(lua_State *L){
	vga_scrollup();
	return 1; 
}
static int naut_read_event_count(lua_State *L){
	struct pmc_event * event = luaL_checkunsigned(L,1);
	lua_Number temp_return =read_event_count(event);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_sched_init_ap(lua_State *L){
	lua_Number temp_return =nk_sched_init_ap();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_modf(lua_State *L){
	double y = luaL_checknumber(L,1);
	double * x = luaL_checkunsigned(L,2);
	lua_Number temp_return =modf(y ,x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_serial_print(lua_State *L){
	const char * format = luaL_checkstring(L,1);
	serial_print(format);
	return 1; 
}
static int naut_nk_thread_queue_wake_all(lua_State *L){
	struct nk_queue * q = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_thread_queue_wake_all(q);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_gmtime(lua_State *L){
	const long int * timer = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)gmtime(timer);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_setup_idt(lua_State *L){
	lua_Number temp_return =setup_idt();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_htable_iter_search(lua_State *L){
	struct nk_hashtable_iter * iter = luaL_checkunsigned(L,1);
	struct nk_hashtable * htable = luaL_checkunsigned(L,2);
	long unsigned int key = luaL_checkunsigned(L,3);
	lua_Number temp_return =nk_htable_iter_search(iter ,htable ,key);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_strcpy(lua_State *L){
	char * dest = luaL_checkstring(L,1);
	const char * src = luaL_checkstring(L,2);
	char * temp_return =strcpy(dest ,src);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut___towupper_l(lua_State *L){
	lua_Number temp_return =__towupper_l();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_get_scancode(lua_State *L){
	int wait = luaL_checkint(L,1);
	lua_Number temp_return =nk_vc_get_scancode(wait);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_acos(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =acos(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_get_base_region_by_num(lua_State *L){
	unsigned int num = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_get_base_region_by_num(num);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_barrier_destroy(lua_State *L){
	struct nk_barrier * barrier = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_barrier_destroy(barrier);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_setlocale(lua_State *L){
	int category = luaL_checkint(L,1);
	const char * locale = luaL_checkstring(L,2);
	char * temp_return =setlocale(category ,locale);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_nemo_init(lua_State *L){
	lua_Number temp_return =nemo_init();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_smp_setup_xcall_bsp(lua_State *L){
	struct cpu * core = luaL_checkunsigned(L,1);
	lua_Number temp_return =smp_setup_xcall_bsp(core);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___fxstat64(lua_State *L){
	lua_Number temp_return =__fxstat64();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fopen(lua_State *L){
	const char * path = luaL_checkstring(L,1);
	void * f = luaL_checkunsigned(L,2);

	return 1; 
}
static int naut_apic_bcast_deinit_iipi(lua_State *L){
	struct apic_dev * apic = luaL_checkunsigned(L,1);
	apic_bcast_deinit_iipi(apic);
	return 1; 
}
static int naut___newlocale(lua_State *L){
	int category_mask = luaL_checkint(L,1);
	const char * locale = luaL_checkstring(L,2);
	void * base = luaL_checkunsigned(L,3);

	return 1; 
}
static int naut_fdopen(lua_State *L){
	int fd = luaL_checkint(L,1);
	const char * mode = luaL_checkstring(L,2);

	return 1; 
}
static int naut_wcslen(lua_State *L){
	lua_Number temp_return =wcslen();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_smp_early_init(lua_State *L){
	struct naut_info * naut = luaL_checkunsigned(L,1);
	lua_Number temp_return =smp_early_init(naut);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_log10(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =log10(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_detect_cpu_freq(lua_State *L){
	unsigned int cpu = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_detect_cpu_freq(cpu);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_switch_to_vc(lua_State *L){
	struct nk_virtual_console * vc = luaL_checkunsigned(L,1);
	lua_Number temp_return =nk_switch_to_vc(vc);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_atox(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	lua_Number temp_return =atox(buf);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vprintk(lua_State *L){
	const char * fmt = luaL_checkstring(L,1);
	struct __va_list_tag * args = luaL_checkunsigned(L,2);
	lua_Number temp_return =vprintk(fmt ,args);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_dump_numa_info(lua_State *L){
	nk_dump_numa_info();
	return 1; 
}
static int naut_nk_free_htable(lua_State *L){
	struct nk_hashtable * htable = luaL_checkunsigned(L,1);
	int free_values = luaL_checkint(L,2);
	int free_keys = luaL_checkint(L,3);
	nk_free_htable(htable ,free_values ,free_keys);
	return 1; 
}
static int naut_getenv(lua_State *L){
	const char * name = luaL_checkstring(L,1);
	char * temp_return =getenv(name);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_atoi(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	lua_Number temp_return =atoi(buf);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_vfprintf(lua_State *L){
	void * stream = luaL_checkunsigned(L,1);
	const char * format = luaL_checkstring(L,2);
	struct __va_list_tag * arg = luaL_checkunsigned(L,3);
	lua_Number temp_return =vfprintf(stream ,format ,arg);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_pthread_mutex_unlock(lua_State *L){
	lua_Number temp_return =pthread_mutex_unlock();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_rb_first(lua_State *L){
	struct rb_root * root = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_rb_first(root);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_reset_all_counters(lua_State *L){
	reset_all_counters();
	return 1; 
}
static int naut_warn_slowpath(lua_State *L){
	const char * file = luaL_checkstring(L,1);
	int line = luaL_checkint(L,2);
	const char * fmt = luaL_checkstring(L,3);
	warn_slowpath(file ,line ,fmt);
	return 1; 
}
static int naut_strspn(lua_State *L){
	const char * s = luaL_checkstring(L,1);
	const char * accept = luaL_checkstring(L,2);
	lua_Number temp_return =strspn(s ,accept);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ungetc(lua_State *L){
	int character = luaL_checkint(L,1);
	void * stream = luaL_checkunsigned(L,2);
	lua_Number temp_return =ungetc(character ,stream);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mm_boot_init(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	lua_Number temp_return =mm_boot_init(mbd);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_log(lua_State *L){
	char * fmt = luaL_checkstring(L,1);
	lua_Number temp_return =nk_vc_log(fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_wait(lua_State *L){
	void * t = luaL_checkunsigned(L,1);
	nk_wait(t);
	return 1; 
}
static int naut_nk_rb_last(lua_State *L){
	struct rb_root * root = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)nk_rb_last(root);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_sscanf(lua_State *L){
	const char * buf = luaL_checkstring(L,1);
	const char * fmt = luaL_checkstring(L,2);
	lua_Number temp_return =sscanf(buf ,fmt);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_syscall(lua_State *L){
	int number = luaL_checkint(L,1);
	lua_Number temp_return =syscall(number);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_switch_to_vc_list(lua_State *L){
	lua_Number temp_return =nk_switch_to_vc_list();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_fread(lua_State *L){
	void * ptr = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	long unsigned int count = luaL_checkunsigned(L,3);
	void * stream = luaL_checkunsigned(L,4);
	lua_Number temp_return =fread(ptr ,size ,count ,stream);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_wctype(lua_State *L){
	lua_Number temp_return =wctype();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kbd_translate(lua_State *L){
	short unsigned int scan = luaL_checkunsigned(L,1);
	lua_Number temp_return =kbd_translate(scan);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kbd_reset(lua_State *L){
	lua_Number temp_return =kbd_reset();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_nk_vc_get_keycode(lua_State *L){
	int wait = luaL_checkint(L,1);
	lua_Number temp_return =nk_vc_get_keycode(wait);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_floor(lua_State *L){
	double x = luaL_checknumber(L,1);
	lua_Number temp_return =floor(x);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_gettext(lua_State *L){
	const char * msgid = luaL_checkstring(L,1);
	char * temp_return =gettext(msgid);
	lua_pushstring(L, temp_return);
	return 1; 
}
static int naut_mm_boot_free_mem(lua_State *L){
	long unsigned int start = luaL_checkunsigned(L,1);
	long unsigned int size = luaL_checkunsigned(L,2);
	mm_boot_free_mem(start ,size);
	return 1; 
}
static int naut_multiboot_get_phys_mem(lua_State *L){
	long unsigned int mbd = luaL_checkunsigned(L,1);
	lua_Number temp_return =multiboot_get_phys_mem(mbd);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kbd_deinit(lua_State *L){
	lua_Number temp_return =kbd_deinit();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_ioapic_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	lua_Number temp_return =ioapic_init(sys);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_arch_numa_init(lua_State *L){
	struct sys_info * sys = luaL_checkunsigned(L,1);
	lua_Number temp_return =arch_numa_init(sys);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_kmem_get_region_by_addr(lua_State *L){
	long unsigned int addr = luaL_checkunsigned(L,1);
	lua_Number temp_return =*(lua_Number *)kmem_get_region_by_addr(addr);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut___ctype_toupper_loc(lua_State *L){
	lua_Number temp_return =__ctype_toupper_loc();
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_disable_perf_event(lua_State *L){
	struct pmc_event * event = luaL_checkunsigned(L,1);
	disable_perf_event(event);
	return 1; 
}
static int naut_difftime(lua_State *L){
	long int time1 = luaL_checkint(L,1);
	long int time2 = luaL_checkint(L,2);
	lua_Number temp_return =difftime(time1 ,time2);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_time(lua_State *L){
	long int * timer = luaL_checkunsigned(L,1);
	lua_Number temp_return =time(timer);
	lua_pushnumber(L, temp_return);
	return 1; 
}
static int naut_mbsnrtowcs(lua_State *L){
	lua_Number temp_return =mbsnrtowcs();
	lua_pushnumber(L, temp_return);
	return 1; 
}

static const luaL_Reg nautlib[] = { 
{"wcsftime", naut_wcsftime} ,
{"mm_boot_reserve_mem", naut_mm_boot_reserve_mem} ,
{"fclose", naut_fclose} ,
{"pthread_mutex_lock", naut_pthread_mutex_lock} ,
{"nk_condvar_test", naut_nk_condvar_test} ,
{"simple_strtoul", naut_simple_strtoul} ,
{"nk_thread_queue_sleep", naut_nk_thread_queue_sleep} ,
{"nk_dequeue_entry_atomic", naut_nk_dequeue_entry_atomic} ,
{"nk_dequeue_first_atomic", naut_nk_dequeue_first_atomic} ,
{"mm_boot_free_vmem", naut_mm_boot_free_vmem} ,
{"nk_condvar_destroy", naut_nk_condvar_destroy} ,
{"apic_timer_setup", naut_apic_timer_setup} ,
{"mktime", naut_mktime} ,
{"init", naut_init} ,
{"nk_htable_count", naut_nk_htable_count} ,
{"disable_all_events", naut_disable_all_events} ,
{"__strftime_l", naut___strftime_l} ,
{"strict_strtoul", naut_strict_strtoul} ,
{"nk_enqueue_keycode", naut_nk_enqueue_keycode} ,
{"nk_switch_to_prev_vc", naut_nk_switch_to_prev_vc} ,
{"vga_init_screen", naut_vga_init_screen} ,
{"msr_read", naut_msr_read} ,
{"nk_sched_init", naut_nk_sched_init} ,
{"nk_stack_dump", naut_nk_stack_dump} ,
{"nk_my_numa_node", naut_nk_my_numa_node} ,
{"strnlen", naut_strnlen} ,
{"buddy_init", naut_buddy_init} ,
{"nk_rb_erase", naut_nk_rb_erase} ,
{"nk_dequeue_scancode", naut_nk_dequeue_scancode} ,
{"nk_yield", naut_nk_yield} ,
{"multiboot_get_size", naut_multiboot_get_size} ,
{"__wctype_l", naut___wctype_l} ,
{"perf_report", naut_perf_report} ,
{"mb_is_hrt_environ", naut_mb_is_hrt_environ} ,
{"snprintf", naut_snprintf} ,
{"mm_dump_page_map", naut_mm_dump_page_map} ,
{"str_tolower", naut_str_tolower} ,
{"cosh", naut_cosh} ,
{"__ctype_get_mb_cur_max", naut___ctype_get_mb_cur_max} ,
{"wcrtomb", naut_wcrtomb} ,
{"i8254_init", naut_i8254_init} ,
{"asin", naut_asin} ,
{"clock", naut_clock} ,
{"__mm_boot_alloc", naut___mm_boot_alloc} ,
{"nk_htable_remove", naut_nk_htable_remove} ,
{"abs", naut_abs} ,
{"apic_init", naut_apic_init} ,
{"nk_htable_iter_remove", naut_nk_htable_iter_remove} ,
{"__freelocale", naut___freelocale} ,
{"buddy_free", naut_buddy_free} ,
{"nk_htable_dec", naut_nk_htable_dec} ,
{"sinh", naut_sinh} ,
{"nk_vc_puts", naut_nk_vc_puts} ,
{"null_irq_handler", naut_null_irq_handler} ,
{"nk_rb_insert_color", naut_nk_rb_insert_color} ,
{"nk_bind_vc", naut_nk_bind_vc} ,
{"wcsxfrm", naut_wcsxfrm} ,
{"serial_mem_dump", naut_serial_mem_dump} ,
{"__towlower_l", naut___towlower_l} ,
{"mf_handler", naut_mf_handler} ,
{"realloc", naut_realloc} ,
{"nk_thread_run", naut_nk_thread_run} ,
{"__get_cpu_features", naut___get_cpu_features} ,
{"printf", naut_printf} ,
{"scnprintf", naut_scnprintf} ,
{"printk", naut_printk} ,
{"pthread_mutex_init", naut_pthread_mutex_init} ,
{"__thread_fork", naut___thread_fork} ,
{"nemo_event_notify", naut_nemo_event_notify} ,
{"nk_tls_test", naut_nk_tls_test} ,
{"arch_detect_mem_map", naut_arch_detect_mem_map} ,
{"nk_htable_change", naut_nk_htable_change} ,
{"strdup", naut_strdup} ,
{"buddy_alloc", naut_buddy_alloc} ,
{"ftello64", naut_ftello64} ,
{"nk_join", naut_nk_join} ,
{"mm_boot_num_regions", naut_mm_boot_num_regions} ,
{"serial_printlevel", naut_serial_printlevel} ,
{"nk_rb_prev", naut_nk_rb_prev} ,
{"__wcscoll_l", naut___wcscoll_l} ,
{"__errno_location", naut___errno_location} ,
{"strerror", naut_strerror} ,
{"nk_vc_getchar_extended", naut_nk_vc_getchar_extended} ,
{"localtime", naut_localtime} ,
{"nk_core_barrier_arrive", naut_nk_core_barrier_arrive} ,
{"mm_boot_free", naut_mm_boot_free} ,
{"Format_Output", naut_Format_Output} ,
{"nk_htable_get_iter_key", naut_nk_htable_get_iter_key} ,
{"strtold", naut_strtold} ,
{"abort", naut_abort} ,
{"fprintf", naut_fprintf} ,
{"towupper", naut_towupper} ,
{"feof", naut_feof} ,
{"tan", naut_tan} ,
{"nk_need_resched", naut_nk_need_resched} ,
{"nk_get_parent_tid", naut_nk_get_parent_tid} ,
{"simple_strtoull", naut_simple_strtoull} ,
{"clearerr", naut_clearerr} ,
{"nk_dequeue_keycode", naut_nk_dequeue_keycode} ,
{"lrand48", naut_lrand48} ,
{"write", naut_write} ,
{"smp_bringup_aps", naut_smp_bringup_aps} ,
{"kbd_init", naut_kbd_init} ,
{"wmemchr", naut_wmemchr} ,
{"nk_barrier_wait", naut_nk_barrier_wait} ,
{"sin", naut_sin} ,
{"serial_putlnn", naut_serial_putlnn} ,
{"nk_destroy_htable_iter", naut_nk_destroy_htable_iter} ,
{"strncat", naut_strncat} ,
{"atan", naut_atan} ,
{"nk_cpu_topo_discover", naut_nk_cpu_topo_discover} ,
{"ioctl", naut_ioctl} ,
{"pmc_init", naut_pmc_init} ,
{"nemo_event_broadcast", naut_nemo_event_broadcast} ,
{"strcasecmp", naut_strcasecmp} ,
{"nk_rwlock_rd_unlock", naut_nk_rwlock_rd_unlock} ,
{"__duplocale", naut___duplocale} ,
{"mm_get_all_mem", naut_mm_get_all_mem} ,
{"nk_htable_insert", naut_nk_htable_insert} ,
{"wctob", naut_wctob} ,
{"atan2", naut_atan2} ,
{"wmemmove", naut_wmemmove} ,
{"mb_get_first_hrt_addr", naut_mb_get_first_hrt_addr} ,
{"btowc", naut_btowc} ,
{"test_nemo", naut_test_nemo} ,
{"wcsnrtombs", naut_wcsnrtombs} ,
{"vscnprintf", naut_vscnprintf} ,
{"serial_init", naut_serial_init} ,
{"main", naut_main} ,
{"nk_timer_handler", naut_nk_timer_handler} ,
{"nk_vc_scrollup_specific", naut_nk_vc_scrollup_specific} ,
{"mm_boot_kmem_init", naut_mm_boot_kmem_init} ,
{"__uselocale", naut___uselocale} ,
{"nk_vc_deinit", naut_nk_vc_deinit} ,
{"multiboot_parse", naut_multiboot_parse} ,
{"__wcsftime_l", naut___wcsftime_l} ,
{"strcoll", naut_strcoll} ,
{"__popcountdi2", naut___popcountdi2} ,
{"nk_vc_gets", naut_nk_vc_gets} ,
{"panic", naut_panic} ,
{"fmod", naut_fmod} ,
{"nk_get_num_domains", naut_nk_get_num_domains} ,
{"clock_gettime", naut_clock_gettime} ,
{"vsscanf", naut_vsscanf} ,
{"nk_vc_wait", naut_nk_vc_wait} ,
{"nk_print_regs", naut_nk_print_regs} ,
{"nk_condvar_init", naut_nk_condvar_init} ,
{"pci_init", naut_pci_init} ,
{"__stack_chk_fail", naut___stack_chk_fail} ,
{"nk_thread_queue_wake_one", naut_nk_thread_queue_wake_one} ,
{"nk_vc_print", naut_nk_vc_print} ,
{"multiboot_get_sys_ram", naut_multiboot_get_sys_ram} ,
{"nk_acpi_init", naut_nk_acpi_init} ,
{"reboot", naut_reboot} ,
{"nk_release_vc", naut_nk_release_vc} ,
{"sprintf", naut_sprintf} ,
{"serial_print_list", naut_serial_print_list} ,
{"__ctype_b_loc", naut___ctype_b_loc} ,
{"strrchr", naut_strrchr} ,
{"vga_init", naut_vga_init} ,
{"__do_backtrace", naut___do_backtrace} ,
{"strcspn", naut_strcspn} ,
{"ferror", naut_ferror} ,
{"free", naut_free} ,
{"nk_condvar_bcast", naut_nk_condvar_bcast} ,
{"log", naut_log} ,
{"nk_timer_init", naut_nk_timer_init} ,
{"nk_rb_replace_node", naut_nk_rb_replace_node} ,
{"nk_vc_printf", naut_nk_vc_printf} ,
{"apic_read_timer", naut_apic_read_timer} ,
{"msr_write", naut_msr_write} ,
{"rand", naut_rand} ,
{"ischar", naut_ischar} ,
{"ldexp", naut_ldexp} ,
{"nk_vc_handle_input", naut_nk_vc_handle_input} ,
{"nk_queue_create", naut_nk_queue_create} ,
{"strncpy", naut_strncpy} ,
{"apic_wait_for_send", naut_apic_wait_for_send} ,
{"apic_get_maxlvt", naut_apic_get_maxlvt} ,
{"__wcsxfrm_l", naut___wcsxfrm_l} ,
{"kmem_add_memory", naut_kmem_add_memory} ,
{"mm_boot_alloc", naut_mm_boot_alloc} ,
{"system", naut_system} ,
{"release_perf_event", naut_release_perf_event} ,
{"strict_strtoull", naut_strict_strtoull} ,
{"test_setlong", naut_test_setlong} ,
{"nk_thread_exit", naut_nk_thread_exit} ,
{"nk_sleep", naut_nk_sleep} ,
{"nk_dequeue_entry", naut_nk_dequeue_entry} ,
{"nk_rwlock_rd_lock", naut_nk_rwlock_rd_lock} ,
{"nk_hash_long", naut_nk_hash_long} ,
{"buddy_dump_mempool", naut_buddy_dump_mempool} ,
{"fpu_init", naut_fpu_init} ,
{"fscanf", naut_fscanf} ,
{"wcscmp", naut_wcscmp} ,
{"idle", naut_idle} ,
{"vsnprintf", naut_vsnprintf} ,
{"__assert_fail", naut___assert_fail} ,
{"nk_core_barrier_wait", naut_nk_core_barrier_wait} ,
{"smp_ap_entry", naut_smp_ap_entry} ,
{"bindtextdomain", naut_bindtextdomain} ,
{"wmemcpy", naut_wmemcpy} ,
{"nk_rand_init", naut_nk_rand_init} ,
{"mm_boot_alloc_aligned", naut_mm_boot_alloc_aligned} ,
{"kmem_get_base_zone", naut_kmem_get_base_zone} ,
{"fseek", naut_fseek} ,
{"nk_destroy_vc", naut_nk_destroy_vc} ,
{"nk_launch_shell", naut_nk_launch_shell} ,
{"nk_numa_init", naut_nk_numa_init} ,
{"nk_rwlock_wr_unlock", naut_nk_rwlock_wr_unlock} ,
{"nk_enqueue_scancode", naut_nk_enqueue_scancode} ,
{"nk_htable_get_iter_value", naut_nk_htable_get_iter_value} ,
{"nk_switch_to_next_vc", naut_nk_switch_to_next_vc} ,
{"nk_htable_search", naut_nk_htable_search} ,
{"nk_tls_key_delete", naut_nk_tls_key_delete} ,
{"srand48", naut_srand48} ,
{"strtold_l", naut_strtold_l} ,
{"exp", naut_exp} ,
{"fseeko64", naut_fseeko64} ,
{"nk_htable_iter_advance", naut_nk_htable_iter_advance} ,
{"setvbuf", naut_setvbuf} ,
{"strncasecmp", naut_strncasecmp} ,
{"simple_strtoll", naut_simple_strtoll} ,
{"imcr_begin_sym_io", naut_imcr_begin_sym_io} ,
{"lseek64", naut_lseek64} ,
{"strtol", naut_strtol} ,
{"fputc", naut_fputc} ,
{"apic_bcast_iipi", naut_apic_bcast_iipi} ,
{"strtoi", naut_strtoi} ,
{"apic_deinit_iipi", naut_apic_deinit_iipi} ,
{"strtod", naut_strtod} ,
{"strtof", naut_strtof} ,
{"writev", naut_writev} ,
{"frexp", naut_frexp} ,
{"fputs", naut_fputs} ,
{"strtox", naut_strtox} ,
{"nk_set_thread_fork_output", naut_nk_set_thread_fork_output} ,
{"nemo_unregister_event_action", naut_nemo_unregister_event_action} ,
{"wmemset", naut_wmemset} ,
{"iswctype", naut_iswctype} ,
{"wcscoll", naut_wcscoll} ,
{"ceil", naut_ceil} ,
{"strsep", naut_strsep} ,
{"fileno", naut_fileno} ,
{"strict_strtoll", naut_strict_strtoll} ,
{"remove", naut_remove} ,
{"apic_send_iipi", naut_apic_send_iipi} ,
{"apic_self_ipi", naut_apic_self_ipi} ,
{"strncmp", naut_strncmp} ,
{"strcat", naut_strcat} ,
{"xm_handler", naut_xm_handler} ,
{"acpi_shutdown", naut_acpi_shutdown} ,
{"nk_get_rand_bytes", naut_nk_get_rand_bytes} ,
{"putwc", naut_putwc} ,
{"vga_get_cursor", naut_vga_get_cursor} ,
{"strchr", naut_strchr} ,
{"acpi_reboot", naut_acpi_reboot} ,
{"nk_mwait_init", naut_nk_mwait_init} ,
{"i8254_calib_tsc", naut_i8254_calib_tsc} ,
{"__kernel_standard", naut___kernel_standard} ,
{"nk_core_barrier_lower", naut_nk_core_barrier_lower} ,
{"ungetwc", naut_ungetwc} ,
{"nk_barrier_init", naut_nk_barrier_init} ,
{"cos", naut_cos} ,
{"disable_8259pic", naut_disable_8259pic} ,
{"nk_get_tid", naut_nk_get_tid} ,
{"nk_kmem_init", naut_nk_kmem_init} ,
{"strftime", naut_strftime} ,
{"nk_int_init", naut_nk_int_init} ,
{"pow", naut_pow} ,
{"nk_barrier_test", naut_nk_barrier_test} ,
{"__strxfrm_l", naut___strxfrm_l} ,
{"poll", naut_poll} ,
{"nk_paging_init", naut_nk_paging_init} ,
{"arch_early_init", naut_arch_early_init} ,
{"nk_rand_set_xi", naut_nk_rand_set_xi} ,
{"mm_get_usable_ram", naut_mm_get_usable_ram} ,
{"nk_create_htable_iter", naut_nk_create_htable_iter} ,
{"putc", naut_putc} ,
{"__nl_langinfo_l", naut___nl_langinfo_l} ,
{"mbrtowc", naut_mbrtowc} ,
{"mm_boot_kmem_cleanup", naut_mm_boot_kmem_cleanup} ,
{"nk_thread_destroy", naut_nk_thread_destroy} ,
{"mbsrtowcs", naut_mbsrtowcs} ,
{"fmodnew", naut_fmodnew} ,
{"arch_reserve_boot_regions", naut_arch_reserve_boot_regions} ,
{"nk_core_barrier_raise", naut_nk_core_barrier_raise} ,
{"nk_htable_inc", naut_nk_htable_inc} ,
{"drand48", naut_drand48} ,
{"nk_rwlock_wr_lock", naut_nk_rwlock_wr_lock} ,
{"tanh", naut_tanh} ,
{"vsprintf", naut_vsprintf} ,
{"enable_all_events", naut_enable_all_events} ,
{"rename", naut_rename} ,
{"malloc", naut_malloc} ,
{"nk_rwlock_test", naut_nk_rwlock_test} ,
{"srand", naut_srand} ,
{"nk_hash_buffer", naut_nk_hash_buffer} ,
{"enable_perf_event", naut_enable_perf_event} ,
{"getwc", naut_getwc} ,
{"nk_get_base_region_by_cpu", naut_nk_get_base_region_by_cpu} ,
{"strict_strtol", naut_strict_strtol} ,
{"fabs", naut_fabs} ,
{"getc", naut_getc} ,
{"sqrt", naut_sqrt} ,
{"towlower", naut_towlower} ,
{"mm_boot_last_pfn", naut_mm_boot_last_pfn} ,
{"detect_cpu", naut_detect_cpu} ,
{"__ctype_tolower_loc", naut___ctype_tolower_loc} ,
{"str_toupper", naut_str_toupper} ,
{"mm_boot_reserve_vmem", naut_mm_boot_reserve_vmem} ,
{"textdomain", naut_textdomain} ,
{"fopen64", naut_fopen64} ,
{"wmemcmp", naut_wmemcmp} ,
{"nk_rb_next", naut_nk_rb_next} ,
{"vga_puts", naut_vga_puts} ,
{"fflush", naut_fflush} ,
{"__iswctype_l", naut___iswctype_l} ,
{"tmpnam", naut_tmpnam} ,
{"strxfrm", naut_strxfrm} ,
{"__strtod_l", naut___strtod_l} ,
{"read", naut_read} ,
{"serial_puts", naut_serial_puts} ,
{"nk_vc_init", naut_nk_vc_init} ,
{"nk_rand_seed", naut_nk_rand_seed} ,
{"nemo_event_await", naut_nemo_event_await} ,
{"nk_vc_scrollup", naut_nk_vc_scrollup} ,
{"strstr", naut_strstr} ,
{"__strtof_l", naut___strtof_l} ,
{"early_printk", naut_early_printk} ,
{"__strcoll_l", naut___strcoll_l} ,
{"freopen", naut_freopen} ,
{"mm_boot_get_region", naut_mm_boot_get_region} ,
{"strcmp", naut_strcmp} ,
{"tmpfile", naut_tmpfile} ,
{"nk_dequeue_first", naut_nk_dequeue_first} ,
{"fgets", naut_fgets} ,
{"ftell", naut_ftell} ,
{"exit", naut_exit} ,
{"null_excp_handler", naut_null_excp_handler} ,
{"nk_pf_handler", naut_nk_pf_handler} ,
{"vga_scrollup", naut_vga_scrollup} ,
{"read_event_count", naut_read_event_count} ,
{"nk_sched_init_ap", naut_nk_sched_init_ap} ,
{"modf", naut_modf} ,
{"serial_print", naut_serial_print} ,
{"nk_thread_queue_wake_all", naut_nk_thread_queue_wake_all} ,
{"gmtime", naut_gmtime} ,
{"setup_idt", naut_setup_idt} ,
{"nk_htable_iter_search", naut_nk_htable_iter_search} ,
{"strcpy", naut_strcpy} ,
{"__towupper_l", naut___towupper_l} ,
{"nk_vc_get_scancode", naut_nk_vc_get_scancode} ,
{"acos", naut_acos} ,
{"nk_get_base_region_by_num", naut_nk_get_base_region_by_num} ,
{"nk_barrier_destroy", naut_nk_barrier_destroy} ,
{"setlocale", naut_setlocale} ,
{"nemo_init", naut_nemo_init} ,
{"smp_setup_xcall_bsp", naut_smp_setup_xcall_bsp} ,
{"__fxstat64", naut___fxstat64} ,
{"fopen", naut_fopen} ,
{"apic_bcast_deinit_iipi", naut_apic_bcast_deinit_iipi} ,
{"__newlocale", naut___newlocale} ,
{"fdopen", naut_fdopen} ,
{"wcslen", naut_wcslen} ,
{"smp_early_init", naut_smp_early_init} ,
{"log10", naut_log10} ,
{"nk_detect_cpu_freq", naut_nk_detect_cpu_freq} ,
{"nk_switch_to_vc", naut_nk_switch_to_vc} ,
{"atox", naut_atox} ,
{"vprintk", naut_vprintk} ,
{"nk_dump_numa_info", naut_nk_dump_numa_info} ,
{"nk_free_htable", naut_nk_free_htable} ,
{"getenv", naut_getenv} ,
{"atoi", naut_atoi} ,
{"vfprintf", naut_vfprintf} ,
{"pthread_mutex_unlock", naut_pthread_mutex_unlock} ,
{"nk_rb_first", naut_nk_rb_first} ,
{"reset_all_counters", naut_reset_all_counters} ,
{"warn_slowpath", naut_warn_slowpath} ,
{"strspn", naut_strspn} ,
{"ungetc", naut_ungetc} ,
{"mm_boot_init", naut_mm_boot_init} ,
{"nk_vc_log", naut_nk_vc_log} ,
{"nk_wait", naut_nk_wait} ,
{"nk_rb_last", naut_nk_rb_last} ,
{"sscanf", naut_sscanf} ,
{"syscall", naut_syscall} ,
{"nk_switch_to_vc_list", naut_nk_switch_to_vc_list} ,
{"fread", naut_fread} ,
{"wctype", naut_wctype} ,
{"kbd_translate", naut_kbd_translate} ,
{"kbd_reset", naut_kbd_reset} ,
{"nk_vc_get_keycode", naut_nk_vc_get_keycode} ,
{"floor", naut_floor} ,
{"gettext", naut_gettext} ,
{"mm_boot_free_mem", naut_mm_boot_free_mem} ,
{"multiboot_get_phys_mem", naut_multiboot_get_phys_mem} ,
{"kbd_deinit", naut_kbd_deinit} ,
{"ioapic_init", naut_ioapic_init} ,
{"arch_numa_init", naut_arch_numa_init} ,
{"kmem_get_region_by_addr", naut_kmem_get_region_by_addr} ,
{"__ctype_toupper_loc", naut___ctype_toupper_loc} ,
{"disable_perf_event", naut_disable_perf_event} ,
{"difftime", naut_difftime} ,
{"time", naut_time} ,
{"mbsnrtowcs", naut_mbsnrtowcs},
{NULL, NULL}
};
LUAMOD_API int luaopen_naut (lua_State *L) {
          luaL_newlib(L, nautlib);
          return 1;
}