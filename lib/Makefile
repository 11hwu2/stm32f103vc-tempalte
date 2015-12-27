# lib Makefile
# Modified from https://github.com/jeremyherbert/stm32-templates/blob/master/stm32vl-discovery/lib/Makefile#L5

include ../Makefile.common

# find files in these folders
vpath %.c $(LIB_DIR)/src $(LIB_DIR)/src/core $(LIB_DIR)/src/peripherals
vpath %.S $(LIB_DIR)/src/startup

#---Attention---#
# if some C source files are not needed for the project, please comment it

CSRCS  = core_cm3.c
CSRCS += system_stm32f10x.c 
CSRCS += misc.c
CSRCS += stm32f10x_adc.c
CSRCS += stm32f10x_bkp.c
CSRCS += stm32f10x_can.c
CSRCS += stm32f10x_cec.c
CSRCS += stm32f10x_crc.c
CSRCS += stm32f10x_dac.c
CSRCS += stm32f10x_dbgmcu.c
CSRCS += stm32f10x_dma.c
CSRCS += stm32f10x_exti.c
CSRCS += stm32f10x_flash.c
CSRCS += stm32f10x_fsmc.c
CSRCS += stm32f10x_gpio.c
CSRCS += stm32f10x_i2c.c
CSRCS += stm32f10x_iwdg.c
CSRCS += stm32f10x_pwr.c
CSRCS += stm32f10x_rcc.c
CSRCS += stm32f10x_rtc.c
CSRCS += stm32f10x_sdio.c
CSRCS += stm32f10x_spi.c
CSRCS += stm32f10x_tim.c
CSRCS += stm32f10x_usart.c
CSRCS += stm32f10x_wwdg.c

SSRCS = startup_stm32f10x_hd.S

OBJS = $(CSRCS:.c=.o) $(SSRCS:.S=.o)

libstm32f10x.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

clean:
	rm -f $(OBJS) libstm32f10x.a
