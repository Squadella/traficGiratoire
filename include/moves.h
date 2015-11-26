/*! \file moves.h
    \brief File for functions about make moving the vehicles.
*/
#ifndef MOVES_H
#define MOVES_H

#include "car.h"
#include "routes.h"

/*! \fn void moveAllCars(char board[51][101], listCar existingCar)
    \brief Starting to move all the cars at the same time.
    \param board The playing board with all the cars on it.
    \param existingCar The previous car in the board.*/
void moveAllCars(char board[51][101], listCar existingCar);

/*! \fn void moveCar(Car* vehicle, char board[51][101], int x, int y)
    \brief Move a car given its position.
    \param vehicle The vehicle that will be moved.
    \param board The playing board with all the cars on it.
    \param x The x value of the vehicle.
    \param y The y value of the vehicle.*/
void moveCar(Car* vehicle, char board[51][101], int x, int y);

/*! \fn void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering)
    \brief Change the zone of a car.
    \param vehicle The vehicle that will be moved.
    \param board The playing board with all the cars on it.
    \param x The x value of the vehicle.
    \param y The y value of the vehicle.
    \param entering The new zone that will be affected to the vehicle.*/
void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering);

/*! \fn void removeCar(Car* vehicle, char board[51][101])
    \brief Set the status of a car for future supression.
    \param vehicle The vehicle that will be moved.
    \param board The playing board with all the cars on it.*/
void removeCar(Car* vehicle, char board[51][101]);

///Define if a dangerous will respect the rules.
bool obeyToCode();

/*! \fn void refreshBoard(listCar existingCar, char board[51][101])
    \brief Forces the refresh of the board with the element of the linked list.
    \param existingCar The previous car in the board.
    \param board The playing board with all the cars on it.*/
void refreshBoard(listCar existingCar, char board[51][101]);

#endif
