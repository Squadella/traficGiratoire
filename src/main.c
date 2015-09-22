#include <stdio.h>
#include <stdlib.h>

#include "car.h"
#include "interface.h"

int main()
{
    char board[51][101];
    for(int i=0; i<51; ++i)
    {
        for(int k=0; k<101; ++k)
        {
            board[i][k]=(char)((k%20)+65);
        }
    }
    affichage(board);
    return 0;
}
