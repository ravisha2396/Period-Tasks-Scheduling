
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_KOBJECT_H
#define Z_INCLUDE_SYSCALLS_KOBJECT_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern void z_impl_k_object_access_grant(const void * object, struct k_thread * thread);
static inline void k_object_access_grant(const void * object, struct k_thread * thread)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		arch_syscall_invoke2(*(uintptr_t *)&object, *(uintptr_t *)&thread, K_SYSCALL_K_OBJECT_ACCESS_GRANT);
		return;
	}
#endif
	compiler_barrier();
	z_impl_k_object_access_grant(object, thread);
}


extern void z_impl_k_object_release(const void * object);
static inline void k_object_release(const void * object)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		arch_syscall_invoke1(*(uintptr_t *)&object, K_SYSCALL_K_OBJECT_RELEASE);
		return;
	}
#endif
	compiler_barrier();
	z_impl_k_object_release(object);
}


extern void * z_impl_k_object_alloc(enum k_objects otype);
static inline void * k_object_alloc(enum k_objects otype)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (void *) arch_syscall_invoke1(*(uintptr_t *)&otype, K_SYSCALL_K_OBJECT_ALLOC);
	}
#endif
	compiler_barrier();
	return z_impl_k_object_alloc(otype);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
