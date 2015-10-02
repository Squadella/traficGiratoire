#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "car.h"
#include "interface.h"
#include "moves.h"


int main()
{
    srand(time(NULL));
    char board[51][101];
    listCar existingCar=NULL;
    for (int i = 0; i < 51; ++i)
    {
        for(int j=0; j < 101; ++j)
        {
            board[i][j]=' ';
        }
    }
    int i=0;
    while (i<1000)
    {
        affichage(board);
        printf("%d\n", i);
        ++i;
        usleep(150000);
        moveAllCars(board, existingCar);
        existingCar=spawnCar(board, 10, false, existingCar);
    }
    return 0;
}
