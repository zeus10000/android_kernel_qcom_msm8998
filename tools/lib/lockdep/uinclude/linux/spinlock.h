<<<<<<< HEAD:tools/lib/lockdep/uinclude/linux/spinlock.h
#ifndef _LIBLOCKDEP_SPINLOCK_H_
#define _LIBLOCKDEP_SPINLOCK_H_
=======
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LINUX_SPINLOCK_H_
#define __LINUX_SPINLOCK_H_
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license):tools/include/linux/spinlock.h

#include <pthread.h>
#include <stdbool.h>

#define arch_spinlock_t pthread_mutex_t
#define __ARCH_SPIN_LOCK_UNLOCKED PTHREAD_MUTEX_INITIALIZER

static inline void arch_spin_lock(arch_spinlock_t *mutex)
{
	pthread_mutex_lock(mutex);
}

static inline void arch_spin_unlock(arch_spinlock_t *mutex)
{
	pthread_mutex_unlock(mutex);
}

static inline bool arch_spin_is_locked(arch_spinlock_t *mutex)
{
	return true;
}

#endif
