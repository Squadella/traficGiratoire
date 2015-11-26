#include "moves.h"

//Goes throught all the linked list and apply the good mooving function
void moveAllCars(char board[51][101], listCar existingCar)
{
    listCar tmp = existingCar;
    while (tmp != NULL)
    {
        if(tmp->broken==false && tmp->hs==false)
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
            fixBroken(board,tmp);
            fixHs(board, tmp);
        }
        randHs(board, tmp);
        tmp=tmp->next;
    }
}

//Make a vehicle move on the board and in the linked list
void moveCar(Car* vehicle, char board[51][101], int x, int y)
{
    if(board[vehicle->x_pos][vehicle->y_pos]!='A' && board[vehicle->x_pos][vehicle->y_pos]!='P')
    {
        board[vehicle->x_pos][vehicle->y_pos]=' ';
        if(board[vehicle->x_pos+x][vehicle->y_pos+y]!=' ')
        {
                vehicle->broken=true;
                vehicle->vehicle='A';
        }
        vehicle->x_pos=vehicle->x_pos+x;
        vehicle->y_pos=vehicle->y_pos+y;
        board[vehicle->x_pos][vehicle->y_pos]=vehicle->vehicle;
    }
}

//Refresh the information in the linked list of the car zone
void changeZone(Car* vehicle, char board[51][101], int x, int y, Section entering)
{
    vehicle->current_section=entering;
    moveCar(vehicle, board, x, y);
}

//Set the flag state to false for future removal
void removeCar(Car* vehicle, char board[51][101])
{
    printf("car removed\n");
    board[vehicle->x_pos][vehicle->y_pos]=' ';
    vehicle->state=false;
}

//Change of a dangerous drive to disrespect code
bool obeyToCode()
{
    if(rand()%10==0)
    {
        return false;
    }
    return true;
}

//Refresh the array with the data in the linked list
void refreshBoard(listCar existingCar, char board[51][101])
{
    for(int i=0; i<51; ++i)
    {
        for(int j=0; j<101; ++j)
        {
            board[i][j]=' ';
        }
    }
    listCar tmp=existingCar;
    while (tmp!=NULL)
    {
        if(tmp->broken==true)
        {
            tmp->vehicle='A';
        }
        tmp=tmp->next;
    }
    tmp=existingCar;
    while (tmp!=NULL)
    {
        board[tmp->x_pos][tmp->y_pos]=tmp->vehicle;
        tmp=tmp->next;
    }
}
