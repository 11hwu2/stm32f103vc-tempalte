# src Makefile

include ../Makefile.common

#---Attention---#
# Find files in these folders
vpath %.c ./

#---Attention---#
# Put your *.c source files here
SRCS  = main.c
SRCS += stm32f10x_it.c

OBJS = $(SRCS:.c=.o)

all:$(OBJS)

$(OBJS):%.o:%.c
	$(CC) $(CFLAGS) -o $@ $<

#---Attention---#
# Clean all the object files whether you need or not! Otherwise, the needless files will be compiled in object firmware! 
clean:
	rm -f *.o
