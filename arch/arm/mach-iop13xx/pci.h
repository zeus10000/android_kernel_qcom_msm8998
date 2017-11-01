/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _IOP13XX_PCI_H_
#define _IOP13XX_PCI_H_
#include <linux/io.h>
#include <mach/irqs.h>

#include <linux/types.h>

extern void __iomem *iop13xx_atue_mem_base;
extern void __iomem *iop13xx_atux_mem_base;
extern size_t iop13xx_atue_mem_size;
extern size_t iop13xx_atux_mem_size;
