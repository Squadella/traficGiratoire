CC=gcc
CFLAGS=-Wall -Werror
INCDIR=include

SRC=src/main.c src/interface.c src/car.c src/routes.c src/moves.c
INC=include/interface.h include/car.h include/routes.h include/moves.h
OBJ=interface.o car.o main.o routes.o moves.o

all: main.out

run: main.out
	./main.out

interface.o: src/interface.c include/interface.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

moves.o: src/moves.c include/moves.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

car.o: src/car.c include/car.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

routes.o: src/routes.c include/routes.h
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

main.o: $(SRC) $(INC)
	$(CC) $(CFLAGS) -c $^ -I./$(INCDIR)

main.out: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ -I./$(INCDIR)

.PHONY: clean

clean:
	rm -f *.o *.out include/*.gch
