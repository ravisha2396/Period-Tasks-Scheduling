
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_SPI_H
#define Z_INCLUDE_SYSCALLS_SPI_H


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

extern int z_impl_spi_transceive(const struct device * dev, const struct spi_config * config, const struct spi_buf_set * tx_bufs, const struct spi_buf_set * rx_bufs);
static inline int spi_transceive(const struct device * dev, const struct spi_config * config, const struct spi_buf_set * tx_bufs, const struct spi_buf_set * rx_bufs)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke4(*(uintptr_t *)&dev, *(uintptr_t *)&config, *(uintptr_t *)&tx_bufs, *(uintptr_t *)&rx_bufs, K_SYSCALL_SPI_TRANSCEIVE);
	}
#endif
	compiler_barrier();
	return z_impl_spi_transceive(dev, config, tx_bufs, rx_bufs);
}


extern int z_impl_spi_release(const struct device * dev, const struct spi_config * config);
static inline int spi_release(const struct device * dev, const struct spi_config * config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		/* coverity[OVERRUN] */
		return (int) arch_syscall_invoke2(*(uintptr_t *)&dev, *(uintptr_t *)&config, K_SYSCALL_SPI_RELEASE);
	}
#endif
	compiler_barrier();
	return z_impl_spi_release(dev, config);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
