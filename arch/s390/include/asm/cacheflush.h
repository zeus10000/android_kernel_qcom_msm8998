<<<<<<< HEAD:arch/s390/include/asm/cacheflush.h
#ifndef _S390_CACHEFLUSH_H
#define _S390_CACHEFLUSH_H

/* Caches aren't brain-dead on the s390. */
#include <asm-generic/cacheflush.h>
=======
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_SET_MEMORY_H
#define __ASM_SET_MEMORY_H
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license):include/asm-generic/set_memory.h

int set_memory_ro(unsigned long addr, int numpages);
int set_memory_rw(unsigned long addr, int numpages);
int set_memory_nx(unsigned long addr, int numpages);
int set_memory_x(unsigned long addr, int numpages);

#endif /* _S390_CACHEFLUSH_H */
