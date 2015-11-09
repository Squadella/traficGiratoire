#ifndef MOVES_H
#define MOVES_H

#include "car.h"
#include "routes.h"

void moveAllCars(char board[51][101], listCar existingCar);
void moveCar(Car* vehicle, char board[51][101], int x, int y);
void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering);
void removeCar(Car* vehicle, char board[51][101]);
bool obeyToCode();
void refreshBoard(listCar existingCar, char board[51][101]);

#endif
