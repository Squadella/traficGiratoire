#include "moves.h"

void moveAllCars(char board[51][101], listCar existingCar)
{
    listCar tmp = existingCar;
    while (tmp != NULL)
    {
        switch (tmp->current_section)
        {
            case s_in_north:
                in_north(board, tmp);
                break;
            case s_in_east:
                in_east(board, tmp);
                break;
            case s_in_west:
                in_west(board, tmp);
                break;
            case s_in_south:
                in_south(board, tmp);
                break;
            case s_round_north:
                round_north(board, tmp);
                break;
            case s_round_west:
                round_west(board, tmp);
                break;
            case s_round_south:
                round_south(board, tmp);
                break;
            case s_out_west:
                out_west(board, tmp);
                break;
            case s_out_south:
                out_south(board, tmp);
                break;
            default:
                break;
        }
        tmp=tmp->next;
    }
}

void moveCar(Car* vehicle, char board[51][101], int x, int y)
{
    board[vehicle->x_pos][vehicle->y_pos]=' ';
    board[vehicle->x_pos+x][vehicle->y_pos+y]=vehicle->vehicle;
    vehicle->x_pos=vehicle->x_pos+x;
    vehicle->y_pos=vehicle->y_pos+y;
}

void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering)
{
    vehicle->current_section=entering;
    moveCar(vehicle, board, x, y);
}

void removeCar(Car* vehicle, char board[51][101])
{
    board[vehicle->x_pos][vehicle->y_pos]=' ';
    vehicle->state=false;
}
