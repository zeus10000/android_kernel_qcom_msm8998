<<<<<<< HEAD:tools/perf/util/help.h
#ifndef __PERF_HELP_H
#define __PERF_HELP_H
=======
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SUBCMD_HELP_H
#define __SUBCMD_HELP_H

#include <sys/types.h>
#include <stdio.h>
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license):tools/lib/subcmd/help.h

struct cmdnames {
	size_t alloc;
	size_t cnt;
	struct cmdname {
		size_t len; /* also used for similarity index in help.c */
		char name[FLEX_ARRAY];
	} **names;
};

static inline void mput_char(char c, unsigned int num)
{
	while(num--)
		putchar(c);
}

void load_command_list(const char *prefix,
		struct cmdnames *main_cmds,
		struct cmdnames *other_cmds);
void add_cmdname(struct cmdnames *cmds, const char *name, size_t len);
/* Here we require that excludes is a sorted list. */
void exclude_cmds(struct cmdnames *cmds, struct cmdnames *excludes);
int is_in_cmdlist(struct cmdnames *c, const char *s);
void list_commands(const char *title, struct cmdnames *main_cmds,
		   struct cmdnames *other_cmds);

#endif /* __PERF_HELP_H */
