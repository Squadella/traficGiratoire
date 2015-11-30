/*! \file car.h
    \brief This file defines all the cars of the giratoire.
*/
#ifndef CAR_H
#define CAR_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/*! \enum Direction
    \brief Implements the different destinations of a driver.*/
typedef enum Direction
{
  north,/*!< Nothern destination.*/
  east,/*!< Eastern destination.*/
  south,/*!< Southern destination.*/
  west/*!< Western destination.*/
} Direction;

/*! \enum Section
    \brief Defines the different zones of the giratoire.*/
typedef enum Section
{
  s_in_north,/*!< Northern insertion branch.*/
  s_in_east,/*!< Eastern insertion branch.*/
  s_in_south,/*!< Southern insertion branch.*/
  s_in_west,/*!< Western insertion branch.*/
  s_out_north,/*!< Northern outgoing branch.*/
  s_out_east,/*!< Eastern outgoing branch.*/
  s_out_south,/*!< Southern outgoing branch.*/
  s_out_west,/*!< Western outgoing branch.*/
  s_round_north,/*!< Northern giratoire zone.*/
  s_round_east,/*!< Eastern giratoire zone.*/
  s_round_south,/*!< Southern giratoire zone.*/
  s_round_west,/*!< Western giratoire zone.*/
} Section;

///Definition of the Car type.
typedef struct Car Car;

/*! \struct Car */
///The Car structure used to build a linked list containing existing cars.
struct Car
{
  //N(orth), S(outh), E(ast), W(est), D(angerous), B(roken down), A(ccident)
  char vehicle;                 ///<Defines what will be printed on the board.
  bool speed;                   ///<Define sthe speed of a car (TRUE=fast, FALSE=slow).
  unsigned short x_pos;         ///<Defines the x position of a car.
  unsigned short y_pos;         ///<Defines the y position of a car.

  Direction destination;        ///<Defines the destination of the car.
  Section current_section;      ///<Defines the zone where the driver currently is.

  bool state;                   ///<Defines if the car has to be deleted (TRUE=active, FALSE=inactive).
  bool broken;                  ///<Defines if the car is broken (TRUE=broken down, FALSE=intact).
  bool hs;                      ///<Defines if the car has broken down by itself (TRUE=broken down, FALSE=intact).
  bool dangerous;               ///<Defines if the driver of the car is dangerous.

  struct Car *next;             ///<Pointer on next element of the list.
};

///Defines the listCar type.
typedef Car* listCar;

///Returns a random destination.
char chooseDest();

/*! \fn listCar setDest(listCar tmpCar)
    \brief Sets a destination for a car.
    \param tmpCar A car. */
listCar setDest(listCar tmpCar);

/*! \fn listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar)
    \brief Creates a new car.
    \param x_pos The position of the car on the x axis.
    \param y_pos The position of the car on the y axis.
    \param speed Is the car slow or fast.
    \param direction The destination of the driver.
    \param dangerous The flag to know if the car is dangerous.
    \param zone The current zone of the vehicle.
    \param existingCar List of already existing cars.
    \return A new car. */
listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar);

/*! \fn listCar spawnCar(char board[51][101], int probability, bool dangerous, listCar existingCar)
    \brief Creates a new car and places it on the board.
    \param board The board with all the cars on it.
    \param probability The chance for a car to spawn.
    \param dangerous The flag to know if the car is dangerous.
    \param existingCar List of already existing cars.
    \return The list of cars. */
listCar spawnCar(char board[51][101], int probability, bool dangerous, listCar existingCar);

/*! \fn listCar deleteCar(listCar existingCar, char board[51][101])
    \brief Removes a car from the linked list.
    \param existingCar List of already existing cars.
    \param board The board with all the cars on it.
    \return The list without the removed car. */
listCar deleteCar(listCar existingCar, char board[51][101]);

/*! \fn listCar removeBroken(listCar existingCar)
    \brief Removes a duplicate when two car crash together.
    \param existingCar List of already existing cars. */
listCar removeBroken(listCar existingCar);

/*! \fn listCar searchAndDestroy(listCar existingCar, unsigned short x, unsigned short y)
    \brief Searches for a car and removes it for the linked list.
    \param existingCar List of already existing cars.
    \param x The x position of the researched vehicle.
    \param y The y position of the researched vehicle.
    \return The list without the destroyed car.*/
listCar searchAndDestroy(listCar existingCar, unsigned short x, unsigned short y);
#endif
