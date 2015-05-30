CFLAGS=-Wall -g -std=c99

clean:
	@rm -rf *.dSYM
	@ls | grep -v .c | grep -v Makefile | xargs rm
