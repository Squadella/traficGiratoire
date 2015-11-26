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
    struct timespec sleep_time;
    int probabilty=0;
    bool dangerous=false;
    sleep_time.tv_sec = 0;
    sleep_time.tv_nsec = 500000000L; //125 000 000
    int i=0;

    refreshBoard(existingCar, board);

    mode = mainMenu();

    if(mode==1)
    {
        probabilty=20;
    }
    else
    {
        probabilty=10;
    }
    if(mode==3)
    {
        dangerous=true;
    }

    while (1)
    {
        showAllCars(existingCar);
        affichage(board);
        printf("%d\n", i);
        ++i;
        nanosleep(&sleep_time, NULL);
        moveAllCars(board, existingCar);
        existingCar=removeBroken(existingCar);
        refreshBoard(existingCar, board);
        existingCar=deleteCar(existingCar, board);
        existingCar=spawnCar(board, probabilty, dangerous, existingCar);
    }
    return 0;
}
