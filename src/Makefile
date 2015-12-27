# src Makefile

include ../Makefile.common

#---Attention---#
# find files in these folders
vpath %.c ./

#---Attention---#
# put your *.c source files here
SRCS  = main.c
SRCS += stm32f10x_it.c

OBJS = $(SRCS:.c=.o)

all:$(OBJS)

$(OBJS):%.o:%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJS)
	rm -f *.o
