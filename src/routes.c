#include "routes.h"

void in_north(char board[51][101], Car* vehicle)
{

    if(vehicle->speed && vehicle->x_pos==14)
    {
        if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, 1, 0);
        }
    }
    else if(vehicle->x_pos==15 && ((board[16][vehicle->y_pos]==' ') && (board[16][vehicle->y_pos+1]==' ')))
    {
        changeZone(vehicle, board, 1, 0, s_round_north);
    }
    else if(vehicle->x_pos!=15)
    {
        if(vehicle->speed==false)
        {
            if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 1, 0);
            }
        }
        else
        {
            if(board[vehicle->x_pos+2][vehicle->y_pos]==' ' && board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 2, 0);
            }
            else if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 1, 0);
            }
        }
    }
}
void out_north(char board[51][101], Car* vehicle)
{
    if(vehicle->x_pos==0)
    {
        removeCar(vehicle, board);
    }
    else if (board[vehicle->x_pos-1][vehicle->y_pos]==' ')
    {
        moveCar(vehicle, board, -1, 0);
    }
}

void in_east(char board[51][101], Car* vehicle)
{
    if(vehicle->speed &&((vehicle->x_pos==22 || vehicle->x_pos==24) && vehicle->y_pos==75))
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
    }
    else if((vehicle->x_pos==22 || vehicle->x_pos==24) && vehicle->y_pos==74)
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ' && board[vehicle->x_pos+1][vehicle->y_pos-1]==' ')
        {
            changeZone(vehicle, board, 0, -1, s_round_east);
        }
    }
    else if (vehicle->y_pos!=74)
    {
        if (vehicle->speed==false)
        {
            if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
            {
                moveCar(vehicle, board, 0, -1);
            }
        }
        else
        {
            if (board[vehicle->x_pos][vehicle->y_pos-2]==' ' && board[vehicle->x_pos][vehicle->y_pos-1]==' ')
            {
                moveCar(vehicle, board, 0, -2);
            }
            else if (board[vehicle->x_pos][vehicle->y_pos-1]==' ')
            {
                moveCar(vehicle, board, 0, -1);
            }
        }
    }
}
void out_east(char board[51][101], Car* vehicle)
{
    if(vehicle->y_pos==100)
    {
        removeCar(vehicle, board);
    }
    else if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
    {
        moveCar(vehicle, board, 0, 1);
    }
}

void in_south(char board[51][101], Car* vehicle)
{
    if(vehicle->speed && (vehicle->x_pos==36 && (vehicle->y_pos==52 || vehicle->y_pos==56)))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, -1, 0);
        }
    }
    else if(vehicle->x_pos==35 && (vehicle->y_pos==52 || vehicle->y_pos==56))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ' && board[vehicle->x_pos-1][vehicle->y_pos-1]==' ')
        {
            changeZone(vehicle, board, -1, 0, s_round_south);
        }
    }
    else if(vehicle->x_pos!=35)
    {
        if (vehicle->speed==false)
        {
            if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, -1, 0);
            }
        }
        else
        {
            if (board[vehicle->x_pos-2][vehicle->y_pos]==' ' && board[vehicle->x_pos-1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, -2, 0);
            }
            else if (board[vehicle->x_pos-1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, -1, 0);
            }
        }
    }
}
void out_south(char board[51][101], Car* vehicle)
{
    if(vehicle->x_pos==50)
    {
        removeCar(vehicle, board);
    }
    else if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
    {
        moveCar(vehicle, board, 1, 0);
    }
}

void in_west(char board[51][101], Car* vehicle)
{
    if(vehicle->speed &&((vehicle->x_pos==26 || vehicle->x_pos==28) && vehicle->y_pos==25))
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
    }
    else if(vehicle->y_pos==26 && (board[vehicle->x_pos][vehicle->y_pos+1]==' ') && board[vehicle->x_pos-1][vehicle->y_pos+1]==' ')
    {
        changeZone(vehicle, board, 0, 1, s_round_west);
    }
    else if(vehicle->y_pos!=26)
    {
        if (vehicle->speed==false)
        {
            if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
            {
                moveCar(vehicle, board, 0, 1);
            }
        }
        else
        {
            if (board[vehicle->x_pos][vehicle->y_pos+2]==' ' && board[vehicle->x_pos][vehicle->y_pos+1]==' ')
            {
                moveCar(vehicle, board, 0, 2);
            }
            else if (board[vehicle->x_pos][vehicle->y_pos+1]==' ')
            {
                moveCar(vehicle, board, 0, 1);
            }
        }
    }
}
void out_west(char board[51][101], Car* vehicle)
{
    if(vehicle->y_pos==0)
    {
        removeCar(vehicle, board);
    }
    else
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
    }
}

void round_north(char board[51][101], Car* vehicle)
{
    if(((vehicle->x_pos==16 && vehicle->y_pos==28) && board[17][27]==' ')||((vehicle->x_pos==17 && vehicle->y_pos==29) && board[18][28]==' '))
    {
        changeZone(vehicle, board, 1, -1, s_round_west);
    }
    else if (vehicle->destination==north && vehicle->x_pos==17 && (vehicle->y_pos==51 || vehicle->y_pos==52))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, -1, 0);
        }
    }
    else if (vehicle->destination==north && vehicle->x_pos==16 && (vehicle->y_pos==52 || vehicle->y_pos==56))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
        {
            changeZone(vehicle, board, -1, 0, s_out_north);
        }
    }
    else if(vehicle->dangerous && !obeyToCode())
    {
        if(vehicle->x_pos==16 && (vehicle->y_pos!=72 || vehicle->y_pos!=28))
        {
            moveCar(vehicle, board, 1, 0);
        }
        else
        {
            moveCar(vehicle, board, -1, 0);
        }
    }
    //Changement de voie
    else if((vehicle->destination==north || vehicle->destination==east) && vehicle->x_pos==16 && vehicle->y_pos<50)
    {
        if((board[vehicle->x_pos+1][vehicle->y_pos]==' ') && (board[vehicle->x_pos+1][vehicle->y_pos+1]==' '))
        {
            moveCar(vehicle, board, 1, 0);
        }
        else if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
    }
    else if ((!(vehicle->x_pos==16 && vehicle->y_pos==28)) && (!(vehicle->x_pos==17 && vehicle->y_pos==29))) //Avancé normale
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
    }

}
void round_east(char board[51][101], Car* vehicle)
{
    if((vehicle->x_pos==17 && vehicle->y_pos==73) || (vehicle->x_pos==18 && vehicle->y_pos==72))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos-1]==' ')
        {
            changeZone(vehicle, board, -1, -1, s_round_north);
        }
    }
    else if(vehicle->destination==east && vehicle->y_pos==72 && (vehicle->x_pos==25 || vehicle->x_pos==26))
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
    }
    else if(vehicle->destination==east && vehicle->y_pos==73 && (vehicle->x_pos==28 || vehicle->x_pos==26))
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            changeZone(vehicle, board, 0, 1, s_out_east);
        }
    }
    else if((vehicle->destination==east || vehicle->destination==south) && vehicle->y_pos==73 && vehicle->x_pos<25)
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ' && board[vehicle->x_pos-1][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
        else if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, -1, 0);
        }
    }
    else if(!(vehicle->x_pos==17 && vehicle->y_pos==73) && !(vehicle->x_pos==18 && vehicle->y_pos==71))
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, -1, 0);
        }
    }
}
void round_south(char board[51][101], Car* vehicle)
{
    if((vehicle->x_pos==33 && vehicle->y_pos==71 && board[vehicle->x_pos-1][vehicle->y_pos+1]==' ')||(vehicle->x_pos==34 && vehicle->y_pos==72 && board[vehicle->x_pos-1][vehicle->y_pos+1]==' '))
    {
        changeZone(vehicle, board, -1, 1, s_round_east);
    }
    else if(vehicle->destination==south && vehicle->x_pos==33 && (vehicle->y_pos==47 || vehicle->y_pos==48))
    {
        if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, 1, 0);
        }
    }
    else if(vehicle->destination==south && vehicle->x_pos==34 && (vehicle->y_pos==44 || vehicle->y_pos==48))
    {
        if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            changeZone(vehicle, board, 1, 0, s_out_south);
        }
    }
    else if((vehicle->destination==west || vehicle->destination==south) && vehicle->x_pos==34 && vehicle->y_pos>50)
    {
        if(board[vehicle->x_pos-1][vehicle->y_pos]==' ' && board[vehicle->x_pos-1][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, -1, 0);
        }
        else if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
    }
    else if ((!(vehicle->x_pos==33 && vehicle->y_pos==71)) && (!(vehicle->x_pos==34 && vehicle->y_pos==72)))
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
    }
}
void round_west(char board[51][101], Car* vehicle)
{
    if((vehicle->x_pos==33 && vehicle->y_pos==27 && board[34][28]==' ') || (vehicle->x_pos==32 && vehicle->y_pos==28 && board[33][29]==' '))
    {
        changeZone(vehicle, board, 1, 1, s_round_south);
    }
    else if((vehicle->destination==north || vehicle->destination==west) && vehicle->y_pos==27 && vehicle->x_pos>25)
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ' && board[vehicle->x_pos-1][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
        else if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, 1, 0);
        }
    }
    else if ((vehicle->destination==west) && (vehicle->x_pos==23) && (vehicle->y_pos==28))
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            moveCar(vehicle, board, 0, -1);
        }
    }
    else if((vehicle->destination==west && (vehicle->x_pos==22 || vehicle->x_pos==24)) && vehicle->y_pos==27)
    {
        if(board[vehicle->x_pos][vehicle->y_pos-1]==' ')
        {
            changeZone(vehicle, board, 0, -1, s_out_west);
        }
    }
    else if (!(vehicle->x_pos==33 && vehicle->y_pos==27) && !(vehicle->x_pos==32 && vehicle->y_pos==28))
    {
        if (board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, 1, 0);
        }
    }
}

void fixBroken(char board[51][101], listCar vehicle)
{
    if(rand()%10==0)
    {
        printf("removing car at %d | %d\n", vehicle->x_pos, vehicle->y_pos);
        removeCar(vehicle,board);
    }
}

void corner_north_east(char board[51][101], Car* vehicle)
{

}
void corner_south_east(char board[51][101], Car* vehicle)
{

}
void corner_south_west(char board[51][101], Car* vehicle)
{

}
void corner_north_west(char board[51][101], Car* vehicle)
{

}
void north_to_north(char board[51][101], Car* vehicle)
{

}
void north_to_east(char board[51][101], Car* vehicle)
{

}
void north_to_south(char board[51][101], Car* vehicle)
{

}
void north_to_west(char board[51][101], Car* vehicle)
{

}

void east_to_east(char board[51][101], Car* vehicle)
{

}
void east_to_south(char board[51][101], Car* vehicle)
{

}
void east_to_west(char board[51][101], Car* vehicle)
{

}
void east_to_north(char board[51][101], Car* vehicle)
{

}

void south_to_south(char board[51][101], Car* vehicle)
{

}
void south_to_west(char board[51][101], Car* vehicle)
{

}
void south_to_north(char board[51][101], Car* vehicle)
{

}
void south_to_east(char board[51][101], Car* vehicle)
{

}

void west_to_west(char board[51][101], Car* vehicle)
{

}
void west_to_north(char board[51][101], Car* vehicle)
{

}
void west_to_east(char board[51][101], Car* vehicle)
{

}
void west_to_south(char board[51][101], Car* vehicle)
{

}
