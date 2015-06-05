CFLAGS=-Wall -g -std=c99 -D_GNU_SOURCE

clean:
	@rm -rf *.dSYM
	@ls ex* | grep -v .c | xargs rm -f
