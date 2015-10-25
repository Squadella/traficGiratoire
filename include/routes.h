#ifndef ROUTES_H
#define ROUTES_H

#include "car.h"
#include "moves.h"

void in_north(char board[51][101], Car* vehicle);
void out_north(char board[51][101], Car* vehicle);

void in_east(char board[51][101], Car* vehicle);
void out_east(char board[51][101], Car* vehicle);

void in_south(char board[51][101], Car* vehicle);
void out_south(char board[51][101], Car* vehicle);

void in_west(char board[51][101], Car* vehicle);
void out_west(char board[51][101], Car* vehicle);

void round_north(char board[51][101], Car* vehicle);
void round_east(char board[51][101], Car* vehicle);
void round_south(char board[51][101], Car* vehicle);
void round_west(char board[51][101], Car* vehicle);

void corner_north_east(char board[51][101], Car* vehicle);
void corner_south_east(char board[51][101], Car* vehicle);
void corner_south_west(char board[51][101], Car* vehicle);
void corner_north_west(char board[51][101], Car* vehicle);

void fixBroken(char board[51][101], listCar vehicle);

//Complete itineraries
  //Starting from the north
void north_to_north(char board[51][101], Car* vehicle);
void north_to_east(char board[51][101], Car* vehicle);
void north_to_south(char board[51][101], Car* vehicle);
void north_to_west(char board[51][101], Car* vehicle);
  //Starting from the east
void east_to_east(char board[51][101], Car* vehicle);
void east_to_south(char board[51][101], Car* vehicle);
void east_to_west(char board[51][101], Car* vehicle);
void east_to_north(char board[51][101], Car* vehicle);
  //Starting from the south
void south_to_south(char board[51][101], Car* vehicle);
void south_to_west(char board[51][101], Car* vehicle);
void south_to_north(char board[51][101], Car* vehicle);
void south_to_east(char board[51][101], Car* vehicle);
  //Starting from the west
void west_to_west(char board[51][101], Car* vehicle);
void west_to_north(char board[51][101], Car* vehicle);
void west_to_east(char board[51][101], Car* vehicle);
void west_to_south(char board[51][101], Car* vehicle);

#endif
