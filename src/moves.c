#include "moves.h"

void moveAllCars(char board[51][101], listCar existingCar)
{
    listCar tmp = existingCar;
    while (tmp != NULL)
    {
        printf("dish\n");
        switch (tmp->current_section)
        {
            case s_in_north:
                in_north(board, tmp);
                break;
            default:
                break;
        }
        tmp=tmp->next;
    }
}

void moveCar(Car* vehicle, char board[51][101], int x, int y)
{
    printf("GWAK\n");
    board[vehicle->x_pos][vehicle->y_pos]=' ';
    board[vehicle->x_pos+x][vehicle->y_pos+y]=vehicle->vehicle;
    vehicle->x_pos=vehicle->x_pos+x;
    vehicle->y_pos=vehicle->y_pos+y;
}
