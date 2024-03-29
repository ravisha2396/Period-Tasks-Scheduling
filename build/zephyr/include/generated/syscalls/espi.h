
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_ESPI_H
#define Z_INCLUDE_SYSCALLS_ESPI_H


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

extern int z_impl_espi_config(const struct device * dev, struct espi_cfg * cfg);
static inline int espi_config(const struct device * dev, struct espi_cfg * cfg)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&cfg, K_SYSCALL_ESPI_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_espi_config(dev, cfg);
}


extern bool z_impl_espi_get_channel_status(const struct device * dev, enum espi_channel ch);
static inline bool espi_get_channel_status(const struct device * dev, enum espi_channel ch)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (bool) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&ch, K_SYSCALL_ESPI_GET_CHANNEL_STATUS);
	}
#endif
	compiler_barrier();
	return z_impl_espi_get_channel_status(dev, ch);
}


extern int z_impl_espi_read_request(const struct device * dev, struct espi_request_packet * req);
static inline int espi_read_request(const struct device * dev, struct espi_request_packet * req)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&req, K_SYSCALL_ESPI_READ_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_request(dev, req);
}


extern int z_impl_espi_write_request(const struct device * dev, struct espi_request_packet * req);
static inline int espi_write_request(const struct device * dev, struct espi_request_packet * req)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&req, K_SYSCALL_ESPI_WRITE_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_request(dev, req);
}


extern int z_impl_espi_read_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data);
static inline int espi_read_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&op, *(uintptr_t *)&data, K_SYSCALL_ESPI_READ_LPC_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_lpc_request(dev, op, data);
}


extern int z_impl_espi_write_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data);
static inline int espi_write_lpc_request(const struct device * dev, enum lpc_peripheral_opcode op, uint32_t * data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&op, *(uintptr_t *)&data, K_SYSCALL_ESPI_WRITE_LPC_REQUEST);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_lpc_request(dev, op, data);
}


extern int z_impl_espi_send_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t level);
static inline int espi_send_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t level)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&signal, *(uintptr_t *)&level, K_SYSCALL_ESPI_SEND_VWIRE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_send_vwire(dev, signal, level);
}


extern int z_impl_espi_receive_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t * level);
static inline int espi_receive_vwire(const struct device * dev, enum espi_vwire_signal signal, uint8_t * level)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke3(*(uintptr_t *)&dev, *(uintptr_t *)&signal, *(uintptr_t *)&level, K_SYSCALL_ESPI_RECEIVE_VWIRE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_receive_vwire(dev, signal, level);
}


extern int z_impl_espi_send_oob(const struct device * dev, struct espi_oob_packet * pckt);
static inline int espi_send_oob(const struct device * dev, struct espi_oob_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_SEND_OOB);
	}
#endif
	compiler_barrier();
	return z_impl_espi_send_oob(dev, pckt);
}


extern int z_impl_espi_receive_oob(const struct device * dev, struct espi_oob_packet * pckt);
static inline int espi_receive_oob(const struct device * dev, struct espi_oob_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_RECEIVE_OOB);
	}
#endif
	compiler_barrier();
	return z_impl_espi_receive_oob(dev, pckt);
}


extern int z_impl_espi_read_flash(const struct device * dev, struct espi_flash_packet * pckt);
static inline int espi_read_flash(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_READ_FLASH);
	}
#endif
	compiler_barrier();
	return z_impl_espi_read_flash(dev, pckt);
}


extern int z_impl_espi_write_flash(const struct device * dev, struct espi_flash_packet * pckt);
static inline int espi_write_flash(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_WRITE_FLASH);
	}
#endif
	compiler_barrier();
	return z_impl_espi_write_flash(dev, pckt);
}


extern int z_impl_espi_flash_erase(const struct device * dev, struct espi_flash_packet * pckt);
static inline int espi_flash_erase(const struct device * dev, struct espi_flash_packet * pckt)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&pckt, K_SYSCALL_ESPI_FLASH_ERASE);
	}
#endif
	compiler_barrier();
	return z_impl_espi_flash_erase(dev, pckt);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
