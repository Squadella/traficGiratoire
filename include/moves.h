/*! \file moves.h
    \brief Defines the functions that will determine car movement.
*/
#ifndef MOVES_H
#define MOVES_H

#include "car.h"
#include "routes.h"

/*! \fn void moveAllCars(char board[51][101], listCar existingCar)
    \brief Moves all the cars at the same time.
    \param board The board containing all of the cars.
    \param existingCar List of already existing cars.*/
void moveAllCars(char board[51][101], listCar existingCar);

/*! \fn void moveCar(Car* vehicle, char board[51][101], int x, int y)
    \brief Moves a car given its position.
    \param vehicle The vehicle that will be moved.
    \param board The board containing all of the cars.
    \param x The x position of the vehicle.
    \param y The y position of the vehicle.*/
void moveCar(Car* vehicle, char board[51][101], int x, int y);

/*! \fn void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering)
    \brief Changes the zone of a car.
    \param vehicle The vehicle that will be moved.
    \param board The board containing all of the cars.
    \param x The x position of the vehicle.
    \param y The y position of the vehicle.
    \param entering The new zone that will be affected to the vehicle.*/
void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering);

/*! \fn void removeCar(Car* vehicle, char board[51][101])
    \brief Sets the status of a car for future deletion.
    \param vehicle The vehicle that will be moved.
    \param board The board containing all of the cars.*/
void removeCar(Car* vehicle, char board[51][101]);

///Defines if a dangerous will respect the rules.
bool obeyToCode();

/*! \fn void refreshBoard(listCar existingCar, char board[51][101])
    \brief Forces the refresh of the board with the elements of the linked list.
    \param existingCar List of already existing cars.
    \param board The board containing all of the cars.*/
void refreshBoard(listCar existingCar, char board[51][101]);

#endif
