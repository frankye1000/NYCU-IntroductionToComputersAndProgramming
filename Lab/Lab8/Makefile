# CC=gcc
# EXE=main
# OBJ=stack.o debug.o $(EXE).o

# %.o: %.c
# 	$(CC) -c $< -o $@

# all: $(OBJ)
# 	$(CC) $(OBJ) -o $(EXE).exe

# run: all
# 	./$(EXE)

# .PHONY: clean

# clean:
# 	del *.o q1.exe q2.exe q3.exe


all:
	gcc -o q1.exe q1.c stack.c debug.c
	gcc -o q2.exe q2.c stack.c debug.c
	gcc -o q3.exe q3.c stack.c debug.c
.PHONY: clean

clean:
	del q1.exe q2.exe q3.exe 
