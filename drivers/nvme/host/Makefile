# SPDX-License-Identifier: GPL-2.0
obj-$(CONFIG_NVME_CORE)			+= nvme-core.o
obj-$(CONFIG_BLK_DEV_NVME)		+= nvme.o
obj-$(CONFIG_NVME_FABRICS)		+= nvme-fabrics.o
obj-$(CONFIG_NVME_RDMA)			+= nvme-rdma.o
obj-$(CONFIG_NVME_FC)			+= nvme-fc.o

obj-$(CONFIG_BLK_DEV_NVME)     += nvme.o

lightnvm-$(CONFIG_NVM)	:= lightnvm.o
nvme-y		+= pci.o scsi.o $(lightnvm-y)
