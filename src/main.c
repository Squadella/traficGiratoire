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
    //DEBUG
    struct timespec sleep_time;
    int probabilty=0;
    bool dangerous=false;
    sleep_time.tv_sec = 0;
    sleep_time.tv_nsec = 500000000L; //125 000 000
    int i=0;

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
    if(mode==3)
    {
        dangerous=true;
    }

    //DEBUG
    /*
    probabilty++;
    dangerous++;
    existingCar = newCar(17, 34, false, 'E', false, s_round_north, existingCar);
    board[17][34]='E';
    existingCar = newCar(17, 35, false, 'E', false, s_round_north, existingCar);
    board[17][35]='E';
    existingCar = newCar(17, 33, false, 'E', false, s_round_north, existingCar);
    existingCar->next->next->broken=true;
    board[17][33]='A';
    */

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
