#ifndef CAR_H
#define CAR_H

#include <stdbool.h>

typedef struct Car Car;

struct Car
{
  char vehicle; //N(orth), S(outh), E(ast), W(est), D(angerous), B(roken down), A(ccident)
  bool speed; //TRUE=fast, FALSE=slow
  unsigned int x_pos;
  unsigned int y_pos;

  unsigned int next_x_pos;
  unsigned int next_y_pos;

  bool state; //TRUE=active, FALSE=inactive
  bool broken; //TRUE=broken down, FALSE=intact
};

#endif
