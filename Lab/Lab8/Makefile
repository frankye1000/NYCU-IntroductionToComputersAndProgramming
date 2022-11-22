CC=gcc
EXE=main
OBJ=stack.o debug.o $(EXE).o

%.o: %.c
	$(CC) -c $< -o $@

all: $(OBJ)
	$(CC) $(OBJ) -o $(EXE).exe

run: all
	./$(EXE)

.PHONY: clean

clean:
	del *.o q1.exe q2.exe q3.exe
