# Modified from https://github.com/jeremyherbert/stm32-templates/blob/master/stm32vl-discovery/Makefile

include ./Makefile.common

# all the files will be generated with this name (main.elf, main.bin, main.hex, etc)

FW_NAME=main

USR_SRCS = $(wildcard $(SRC_DIR)/*.c)
USR_OBJS = $(USR_SRCS:.c=.o)

.PHONY: lib src firmware

all: 	lib src firmware

lib:
	$(MAKE) -C lib

src:
	$(MAKE) -C src

firmware: $(FW_NAME).elf

$(FW_NAME).elf: $(USR_OBJS)
	$(LD) $(LDFLAGS) -o $@ $(USR_OBJS) -lstm32f10x
	$(OBJCOPY) -O ihex $(FW_NAME).elf $(FW_NAME).hex
	$(OBJCOPY) -O binary $(FW_NAME).elf $(FW_NAME).bin

clean:
	$(MAKE) -C src $@
#---Attention---#
# Please comment it if there is no need to update libstm32f10x.a
	#$(MAKE) -C lib $@
	rm -f $(FW_NAME).elf
	rm -f $(FW_NAME).hex
	rm -f $(FW_NAME).bin
