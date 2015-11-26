/*! \file routes.h
    \brief List all the possible moving function on the giratoire.
*/
#ifndef ROUTES_H
#define ROUTES_H

#include "car.h"
#include "moves.h"


/*! \fn void in_north(char board[51][101], Car* vehicle)
    \brief Managing moves in the north insertion branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void in_north(char board[51][101], Car* vehicle);

/*! \fn void out_north(char board[51][101], Car* vehicle)
    \brief Managing moves in the north outgoing branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void out_north(char board[51][101], Car* vehicle);


/*! \fn void in_east(char board[51][101], Car* vehicle)
    \brief Managing moves in the east insertion branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void in_east(char board[51][101], Car* vehicle);

/*! \fn void out_east(char board[51][101], Car* vehicle)
    \brief Managing moves in the east outgoing branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void out_east(char board[51][101], Car* vehicle);


/*! \fn void in_south(char board[51][101], Car* vehicle)
    \brief Managing moves in the south insertion branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void in_south(char board[51][101], Car* vehicle);

/*! \fn void out_south(char board[51][101], Car* vehicle)
    \brief Managing moves in the south outgoing branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void out_south(char board[51][101], Car* vehicle);


/*! \fn void in_west(char board[51][101], Car* vehicle)
    \brief Managing moves in the west insertion branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void in_west(char board[51][101], Car* vehicle);

/*! \fn void out_west(char board[51][101], Car* vehicle)
    \brief Managing moves in the west outgoing branch.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void out_west(char board[51][101], Car* vehicle);


/*! \fn void round_north(char board[51][101], Car* vehicle)
    \brief Managing trafic in the north giratoire zone.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void round_north(char board[51][101], Car* vehicle);

/*! \fn void round_east(char board[51][101], Car* vehicle)
    \brief Managing trafic in the east giratoire zone.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void round_east(char board[51][101], Car* vehicle);

/*! \fn void round_south(char board[51][101], Car* vehicle)
    \brief Managing trafic in the south giratoire zone.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void round_south(char board[51][101], Car* vehicle);

/*! \fn void round_west(char board[51][101], Car* vehicle)
    \brief Managing trafic in the west giratoire zone.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void round_west(char board[51][101], Car* vehicle);


/*! \fn void fixBroken(char board[51][101], listCar vehicle)
    \brief Randomly fix a broken car.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void fixBroken(char board[51][101], listCar vehicle);

/*! \fn void randHs(char board[51][101], listCar vehicle)
    \brief Randomly fix a broken car.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void randHs(char board[51][101], listCar vehicle);

/*! \fn void fixHs(char board[51][101], listCar vehicle)
    \brief Randomly repair a car.
    \param board The playing board with all the cars on it.
    \param vehicle The vehicle that will be moved.*/
void fixHs(char board[51][101], listCar vehicle);

#endif
