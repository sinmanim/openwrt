
obj-m = hello.o

KDIR := /home/seop/openwrt/build_dir/target-i386_i486_uClibc-0.9.33.2/linux-x86_generic/linux-3.10.49/ 
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.ko
	rm -rf *.mod.*
	rm -rf .*.cmd
	rm -rf *.o


