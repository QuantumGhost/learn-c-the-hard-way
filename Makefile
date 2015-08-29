CFLAGS=-Wall -g -std=c99 -D_GNU_SOURCE

clean:
	@rm -rf temp
	@rm -rf *.dSYM
	@find -maxdepth 1 -name "ex*" -and -not -name "*.c" -type f -delete
