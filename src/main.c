#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "car.h"
#include "interface.h"
#include "routes.h"

int main()
{
    char board[51][101];
    size_t j = 0;
    for(int i=0; i<51; ++i)
    {
        for(int k=0; k<101; ++k)
        {
            board[i][k]=' '/*(char)((k%26)+65)*/;
        }
    }
    return 0;
}
