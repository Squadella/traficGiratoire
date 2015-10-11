#include "moves.h"

void moveAllCars(char board[51][101], listCar existingCar)
{
    listCar tmp = existingCar;
    while (tmp != NULL)
    {
        if(tmp->broken==false)
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
                case s_round_east:
                    round_east(board, tmp);
                    break;
                case s_out_west:
                    out_west(board, tmp);
                    break;
                case s_out_south:
                    out_south(board, tmp);
                    break;
                case s_out_east:
                    out_east(board, tmp);
                    break;
                case s_out_north:
                    out_north(board, tmp);
                    break;
                default:
                    break;
            }
        }
        else
        {
            //TRY TO FIX THE CAR
        }
        tmp=tmp->next;
    }
}

void moveCar(Car* vehicle, char board[51][101], int x, int y)
{
    if(board[vehicle->x_pos][vehicle->y_pos]!='A')
    {
            board[vehicle->x_pos][vehicle->y_pos]=' ';
        if(board[vehicle->x_pos+x][vehicle->y_pos+y]==' ' && vehicle->broken==false)
        {
            board[vehicle->x_pos+x][vehicle->y_pos+y]=vehicle->vehicle;
        }
        else
        {
            board[vehicle->x_pos+x][vehicle->y_pos+y]='A';
            vehicle->broken=true;
        }
        vehicle->x_pos=vehicle->x_pos+x;
        vehicle->y_pos=vehicle->y_pos+y;
    }
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

bool obeyToCode()
{
    if(rand()%10==0)
    {
        return false;
    }
    return true;
}
