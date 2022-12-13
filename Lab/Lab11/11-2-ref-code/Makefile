CC=gcc
EXE=lab11-2
SRCS:= $(wildcard *.c)
OBJS:= $(patsubst %.c,%.o,$(SRCS))


%.o: %.c
	$(CC) -std=c99 -c $< -o $@

all: $(OBJS)
	$(CC) libta.so $(OBJS) -o $(EXE)

.PHONY: clean

clean:
	rm *.o *.exe 
