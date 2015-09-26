#ifndef CAR_H
#define CAR_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum Direction
{
  north,
  east,
  south,
  west
} Direction;

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

typedef struct Car Car;

struct Car
{
  char vehicle; //N(orth), S(outh), E(ast), W(est), D(angerous), B(roken down), A(ccident)
  bool speed; //TRUE=fast, FALSE=slow
  unsigned short x_pos;
  unsigned short y_pos;

  unsigned short next_x_pos;
  unsigned short next_y_pos;

  Direction destination;
  Section current_section;

  bool state; //TRUE=active, FALSE=inactive
  bool broken; //TRUE=broken down, FALSE=intact
  bool dangerous;

  struct Car *next;
};

typedef Car* listCar;

char chooseDest();
listCar setDest(listCar tmpCar);
listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar);
listCar spawnCar(char board[51][101], int probability, bool dangerous, listCar existingCar);

#endif
