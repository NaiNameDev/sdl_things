FLGSDBG = -lSDL2
FLGSREL = gcc -std=c99 -lSDL2

.PHONY: cl test build dbg

dbg: main.cpp
	g++ main.cpp $(FLGSDBG) -o dbg

build: main.cpp
	g++ main.cpp $(FLGSREL) -o build

cl:
	rm dbg
	rm build

test: dbg
	./dbg
	rm dbg
