CC=gcc
CFLAGS=-Wall -Werror -std=c99
INCDIR=include

SRC=src/main.c src/interface.c src/car.c
INC=include/interface.h include/car.h
OBJ=interface.o car.o main.o

all: main.out

interface.o: src/interface.c include/interface.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

car.o: src/car.c include/car.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

main.o: $(SRC) $(INC)
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

main: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ -I./$(INCDIR)

.PHONY: clean

clean:
	rm -f *.o
