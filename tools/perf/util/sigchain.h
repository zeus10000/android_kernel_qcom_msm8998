<<<<<<< HEAD:tools/perf/util/sigchain.h
#ifndef __PERF_SIGCHAIN_H
#define __PERF_SIGCHAIN_H
=======
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SUBCMD_SIGCHAIN_H
#define __SUBCMD_SIGCHAIN_H
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license):tools/lib/subcmd/sigchain.h

typedef void (*sigchain_fun)(int);

int sigchain_pop(int sig);

void sigchain_push_common(sigchain_fun f);

#endif /* __PERF_SIGCHAIN_H */
