CFLAGS=-Wall -g -std=c99

clean:
	@rm -rf *.dSYM
	@ls ex* | grep -v .c | xargs rm -f
