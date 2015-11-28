/*! \file routes.h
    \brief Lists all the possible sections on the giratoire.
*/
#ifndef ROUTES_H
#define ROUTES_H

#include "car.h"
#include "moves.h"


/*! \fn void in_north(char board[51][101], Car* vehicle)
    \brief Manages moves in the northern insertion branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void in_north(char board[51][101], Car* vehicle);

/*! \fn void out_north(char board[51][101], Car* vehicle)
    \brief Manages moves in the northern outgoing branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void out_north(char board[51][101], Car* vehicle);


/*! \fn void in_east(char board[51][101], Car* vehicle)
    \brief Manages moves in the eastern insertion branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void in_east(char board[51][101], Car* vehicle);

/*! \fn void out_east(char board[51][101], Car* vehicle)
    \brief Manages moves in the eastern outgoing branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void out_east(char board[51][101], Car* vehicle);


/*! \fn void in_south(char board[51][101], Car* vehicle)
    \brief Manages moves in the southern insertion branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void in_south(char board[51][101], Car* vehicle);

/*! \fn void out_south(char board[51][101], Car* vehicle)
    \brief Manages moves in the southern outgoing branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void out_south(char board[51][101], Car* vehicle);


/*! \fn void in_west(char board[51][101], Car* vehicle)
    \brief Manages moves in the western insertion branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void in_west(char board[51][101], Car* vehicle);

/*! \fn void out_west(char board[51][101], Car* vehicle)
    \brief Manages moves in the western outgoing branch.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void out_west(char board[51][101], Car* vehicle);


/*! \fn void round_north(char board[51][101], Car* vehicle)
    \brief Manages trafic in the northern giratoire zone.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void round_north(char board[51][101], Car* vehicle);

/*! \fn void round_east(char board[51][101], Car* vehicle)
    \brief Manages trafic in the eastern giratoire zone.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void round_east(char board[51][101], Car* vehicle);

/*! \fn void round_south(char board[51][101], Car* vehicle)
    \brief Manages trafic in the southern giratoire zone.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void round_south(char board[51][101], Car* vehicle);

/*! \fn void round_west(char board[51][101], Car* vehicle)
    \brief Manages trafic in the western giratoire zone.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void round_west(char board[51][101], Car* vehicle);


/*! \fn void fixBroken(char board[51][101], listCar vehicle)
    \brief Randomly fixes a broken car.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void fixBroken(char board[51][101], listCar vehicle);

/*! \fn void randHs(char board[51][101], listCar vehicle)
    \brief Randomly spawns a broken down car.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void randHs(char board[51][101], listCar vehicle);

/*! \fn void fixHs(char board[51][101], listCar vehicle)
    \brief Randomly repairs a car.
    \param board The board containing all of the cars.
    \param vehicle The vehicle that will be moved.*/
void fixHs(char board[51][101], listCar vehicle);

#endif
