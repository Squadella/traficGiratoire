#include "routes.h"

void in_north(char board[51][101], Car* vehicle)
{

    if(vehicle->speed && (vehicle->x_pos==14 && (vehicle->y_pos==44 || vehicle->y_pos==48)))
    {
        if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
        {
            moveCar(vehicle, board, 1, 0);
        }
    }
    else if(vehicle->x_pos==15 && (vehicle->y_pos==44 || vehicle->y_pos==48))
    {
        //Changement zone!
    }
    else
    {
        if (vehicle->speed==false)
        {
            if(board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 1, 0);
            }
        }
        else
        {
            if (board[vehicle->x_pos+2][vehicle->y_pos]==' ' && board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 2, 0);
            }
            else if (board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 1, 0);
            }
        }
    }
}
void out_north(char board[51][101], Car* vehicle)
{

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
        //Changement zone!
    }
    else
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
        //Changement zone!
    }
    else
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
}

void in_west(char board[51][101], Car* vehicle)
{
    if(vehicle->speed &&((vehicle->x_pos==22 || vehicle->x_pos==24) && vehicle->y_pos==25))
    {
        if(board[vehicle->x_pos][vehicle->y_pos+1]==' ')
        {
            moveCar(vehicle, board, 0, 1);
        }
    }
    else if((vehicle->x_pos==22 || vehicle->x_pos==24) && vehicle->y_pos==26)
    {
        //Changement zone!
    }
    else
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
}

void inner_north_east(char board[51][101], Car* vehicle)
{
}
void outer_north_east(char board[51][101], Car* vehicle)
{
}

void inner_south_east(char board[51][101], Car* vehicle)
{
}
void outer_south_east(char board[51][101], Car* vehicle)
{
}

void inner_south_west(char board[51][101], Car* vehicle)
{
}
void outer_south_west(char board[51][101], Car* vehicle)
{
}

void inner_north_west(char board[51][101], Car* vehicle)
{
}
void outer_north_west(char board[51][101], Car* vehicle)
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
