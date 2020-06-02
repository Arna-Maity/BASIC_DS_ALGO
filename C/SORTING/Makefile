include csources.mk

CC := /usr/bin/gcc
LD := /usr/bin/ld
OBJDUMP := /usr/bin/objdump

COBJS := $(CSRCS:.c=.o)

%.o : %.c
	$(CC) -c $< -o $@

.PHONY: compile-all
compile-all: $(COBJS)

.PHONY: clean
clean:
	rm -rf *.o