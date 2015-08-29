CLFAGS=-Wall -g

.PHONY: clean test all

all: ex19

ex19: object.o game.o

clean:
	rm -f ex19
	rm -f *.o

test: ex19
	bash test.sh > /dev/null
	python test.py ex19

