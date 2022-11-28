%.o: %.c
	gcc -c $< -o $@

all: main.o
	gcc main.o libgame.o -o main

.PHONY: clean

clean:
	rm *.exe main.o
