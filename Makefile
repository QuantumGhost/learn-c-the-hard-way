CFLAGS=-Wall -g

clean:
	@rm -rf *.dSYM
	@ls | grep -v .c | grep -v Makefile | xargs rm
