.PHONY: compile-all
compile-all:
	make -C C compile-all
	make -C CPP compile-all

.PHONY: clean
clean:
	make -C C clean
	make -C CPP clean