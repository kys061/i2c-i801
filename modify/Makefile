OUT_EXT := .ko
OBJ_EXT := .o
RUN     := i2c-i801
RUN_EXT := $(RUN)$(OUT_EXT)

obj-m += i2c-i801.o
ccflags-y := -Wno-declaration-after-statement -std=gnu99

.PHONY: clean ins log rm run my-ins

all: $(RUN_EXT) ins_rm_mod.out

i2c-i801.ko: i2c-i801.c
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M="$(PWD)" clean
	rm -f *.out

log:
	dmesg
