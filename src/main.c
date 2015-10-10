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
    unsigned int mode;
    int probabilty=0;
    int i=0;
    struct timespec sleep_time;
    sleep_time.tv_sec = 0;
    sleep_time.tv_nsec = 300000000L; //125 000 000

    for (int i = 0; i < 51; ++i)
    {
        for(int j=0; j < 101; ++j)
        {
            board[i][j]=' ';
        }
    }

    mode = mainMenu();

    if(mode==1)
    {
        probabilty=20;
    }
    else
    {
        probabilty=10;
    }

    while (1)
    {
        affichage(board);
        printf("%d\n", i);
        ++i;
        nanosleep(&sleep_time, NULL);
        moveAllCars(board, existingCar);
        existingCar=deleteCar(existingCar);
        existingCar=spawnCar(board, probabilty, false, existingCar);
    }
    return 0;
}
