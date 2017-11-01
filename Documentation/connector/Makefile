<<<<<<< HEAD:Documentation/connector/Makefile
ifneq ($(CONFIG_CONNECTOR),)
obj-m += cn_test.o
endif
=======
# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_SAMPLE_CONNECTOR) += cn_test.o
>>>>>>> b24413180f56 (License cleanup: add SPDX GPL-2.0 license identifier to files with no license):samples/connector/Makefile

# List of programs to build
hostprogs-y := ucon

# Tell kbuild to always build the programs
always := $(hostprogs-y)

HOSTCFLAGS_ucon.o += -I$(objtree)/usr/include

all: modules

modules clean:
	$(MAKE) -C ../.. SUBDIRS=$(PWD) $@
