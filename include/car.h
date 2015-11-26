/*! \file car.h
    \brief This file define all the cars of the giratoire.
*/
#ifndef CAR_H
#define CAR_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*! \struct Direction */
///Implements the different destination of a driver.
typedef enum Direction
{
  north,
  east,
  south,
  west
} Direction;

/*! \struct Section */
///All the zone of the giratoire.
typedef enum Section
{
  s_in_north,
  s_in_east,
  s_in_south,
  s_in_west,
  s_out_north,
  s_out_east,
  s_out_south,
  s_out_west,
  s_round_north,
  s_round_east,
  s_round_south,
  s_round_west,
  s_corner_north_east,
  s_corner_south_east,
  s_corner_south_west,
  s_corner_north_west,
} Section;

///Define the Car type.
typedef struct Car Car;

/*! \struct Car */
///The structure for the car to make a linked list.
struct Car
{
  //N(orth), S(outh), E(ast), W(est), D(angerous), B(roken down), A(ccident)
  char vehicle;                 ///<Define what will be printed on the board.
  bool speed;                   ///<Define the speed of a car (TRUE=fast, FALSE=slow).
  unsigned short x_pos;         ///<Define the x position of a car.
  unsigned short y_pos;         ///<Define the y position of a car.

  Direction destination;        ///<Define the destination of the driver.
  Section current_section;      ///<Define the zone where the driver is on the board.

  bool state;                   ///<Define if the car have to be deleted (TRUE=active, FALSE=inactive).
  bool broken;                  ///<Define if the car is broken (TRUE=broken down, FALSE=intact).
  bool hs;                      ///<Define if the car break down by itself (TRUE=broken down, FALSE=intact).
  bool dangerous;               ///<Define if the driver of the car is dangerous.

  struct Car *next;            ///<Pointer on next element of the list.
};

///Define the listCar type.
typedef Car* listCar;

///Return a random destination.
char chooseDest();

/*! \fn listCar setDest(listCar tmpCar)
    \brief Set a destination for a car.
    \param tmpCar A car. */
listCar setDest(listCar tmpCar);

/*! \fn listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar)
    \brief Create a new car.
    \param x_pos The position on the x axis of the car.
    \param y_pos The position on the y axis of the car.
    \param speed Is the car is slow or fast.
    \param direction The destination of the driver.
    \param dangerous The flag for know if the car is dangerous.
    \param zone The current zone of the vehicle.
    \param existingCar The previous car in the board.
    \return A new car. */
listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar);

/*! \fn listCar spawnCar(char board[51][101], int probability, bool dangerous, listCar existingCar)
    \brief Create a new car and place it on the board.
    \param board The playing board with all the cars on it.
    \param probability The chance of a car to spawn.
    \param dangerous The flag for know if the car is dangerous.
    \param existingCar The previous car in the board.
    \return The list of cars. */
listCar spawnCar(char board[51][101], int probability, bool dangerous, listCar existingCar);

/*! \fn listCar deleteCar(listCar existingCar, char board[51][101])
    \brief Remove a car from the linked list.
    \param existingCar The previous car in the board.
    \param board The playing board with all the cars on it.
    \return The list witout the removed car. */
listCar deleteCar(listCar existingCar, char board[51][101]);

/*! \fn listCar removeBroken(listCar existingCar)
    \brief Remove a duplicate when to car crashes.
    \param existingCar The previous car in the board. */
listCar removeBroken(listCar existingCar);

/*! \fn listCar searchAndDestroy(listCar existingCar, unsigned short x, unsigned short y)
    \brief Search a car and remove it for the linked list.
    \param existingCar The previous car in the board.
    \param x The x value of the vehicle searched.
    \param y The y value of the vehicle searched.
    \return The list without the destroyed car.*/
listCar searchAndDestroy(listCar existingCar, unsigned short x, unsigned short y);

/*! \fn void searchAndDisplay(listCar existingCar, unsigned short x, unsigned short y)
    \brief Search a car and print it.
    \param existingCar The previous car in the board.
    \param x The x value of the vehicle searched.
    \param y The y value of the vehicle searched.*/
void searchAndDisplay(listCar existingCar, unsigned short x, unsigned short y);

/*! \fn void showAllCars(listCar existingCar)
    \brief Print all the cars present in the linked list.
    \param existingCar The previous car in the board.*/
void showAllCars(listCar existingCar);

#endif
