include cppsources.mk

CPP := /usr/bin/g++
LD := /usr/bin/ld
OBJDUMP := /usr/bin/objdump

CPPOBJS := $(CPPSRCS:.cpp=.o)

%.o : %.cpp
	$(CPP) -c $< -o $@

.PHONY: compile-all
compile-all: $(CPPOBJS)

.PHONY: clean
clean:
	rm -rf *.o