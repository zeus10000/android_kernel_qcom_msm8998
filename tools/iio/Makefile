# SPDX-License-Identifier: GPL-2.0
include ../scripts/Makefile.include

bindir ?= /usr/bin

ifeq ($(srctree),)
srctree := $(patsubst %/,%,$(dir $(CURDIR)))
srctree := $(patsubst %/,%,$(dir $(srctree)))
endif

# Do not use make's built-in rules
# (this improves performance and avoids hard-to-debug behaviour);
MAKEFLAGS += -r

CC = $(CROSS_COMPILE)gcc
CFLAGS += -Wall -g -D_GNU_SOURCE

all: iio_event_monitor lsiio generic_buffer

iio_event_monitor: iio_event_monitor.o iio_utils.o

lsiio: lsiio.o iio_utils.o

generic_buffer: generic_buffer.o iio_utils.o

%.o: %.c iio_utils.h

.PHONY: clean
clean:
	rm -f *.o iio_event_monitor lsiio generic_buffer
