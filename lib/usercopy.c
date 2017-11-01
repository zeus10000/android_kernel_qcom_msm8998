<<<<<<< HEAD
#include <linux/export.h>
#include <linux/bug.h>
=======
// SPDX-License-Identifier: GPL-2.0
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license)
#include <linux/uaccess.h>

void copy_from_user_overflow(void)
{
	WARN(1, "Buffer overflow detected!\n");
}
EXPORT_SYMBOL(copy_from_user_overflow);
