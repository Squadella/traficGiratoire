#include "routes.h"

void in_north(char board[51][101], Car* vehicle)
{
    if((vehicle->x_pos==15 && (vehicle->y_pos==44 || vehicle->y_pos==48))||(vehicle->speed && (vehicle->x_pos==14 && (vehicle->y_pos==44 || vehicle->y_pos==48))))
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
            if (board[vehicle->x_pos+2][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 2, 0);
            }
            else if (board[vehicle->x_pos+1][vehicle->y_pos]==' ')
            {
                moveCar(vehicle, board, 1, 0);
            }
        }
    }
}/*
void out_north(char board[51][101], Car vehicle)
{
}

void in_east(char board[51][101], Car vehicle)
{
}
void out_east(char board[51][101], Car vehicle)
{
}

void in_south(char board[51][101], Car vehicle)
{
}
void out_south(char board[51][101], Car vehicle)
{
}

void in_west(char board[51][101], Car vehicle)
{
}
void out_west(char board[51][101], Car vehicle)
{
}

void inner_north_east(char board[51][101], Car vehicle)
{
}
void outer_north_east(char board[51][101], Car vehicle)
{
}

void inner_south_east(char board[51][101], Car vehicle)
{
}
void outer_south_east(char board[51][101], Car vehicle)
{
}

void inner_south_west(char board[51][101], Car vehicle)
{
}
void outer_south_west(char board[51][101], Car vehicle)
{
}

void inner_north_west(char board[51][101], Car vehicle)
{
}
void outer_north_west(char board[51][101], Car vehicle)
{
}

void north_to_north(char board[51][101], Car vehicle)
{

}
void north_to_east(char board[51][101], Car vehicle)
{

}
void north_to_south(char board[51][101], Car vehicle)
{

}
void north_to_west(char board[51][101], Car vehicle)
{

}

void east_to_east(char board[51][101], Car vehicle)
{

}
void east_to_south(char board[51][101], Car vehicle)
{

}
void east_to_west(char board[51][101], Car vehicle)
{

}
void east_to_north(char board[51][101], Car vehicle)
{

}

void south_to_south(char board[51][101], Car vehicle)
{

}
void south_to_west(char board[51][101], Car vehicle)
{

}
void south_to_north(char board[51][101], Car vehicle)
{

}
void south_to_east(char board[51][101], Car vehicle)
{

}

void west_to_west(char board[51][101], Car vehicle)
{

}
void west_to_north(char board[51][101], Car vehicle)
{

}
void west_to_east(char board[51][101], Car vehicle)
{

}
void west_to_south(char board[51][101], Car vehicle)
{

}
*/
