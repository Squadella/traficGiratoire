#include "car.h"

char chooseDest()
{
    switch (rand()%4)
    {
        case 0:
            return 'N';
            break;
        case 1:
            return 'E';
            break;
        case 2:
            return 'S';
            break;
        case 3:
            return 'W';
            break;
    }
    return 'X';
}

listCar setDest(listCar tmpCar)
{
    switch (tmpCar->vehicle)
    {
        case 'N':
            tmpCar->destination = north;
            break;

        case 'E':
            tmpCar->destination = east;
            break;

        case 'S':
            tmpCar->destination = south;
            break;

        case 'W':
            tmpCar->destination = west;
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    if(tmpCar->dangerous)
    {
        tmpCar->vehicle='D';
    }
    return tmpCar;
}

listCar newCar(int x_pos, int y_pos, bool speed, char direction, bool dangerous, Section zone, listCar existingCar)
{
    Car* carTmp = (Car*)malloc(sizeof(Car));
    carTmp->speed=speed;
    carTmp->x_pos=x_pos;
    carTmp->y_pos=y_pos;
    carTmp->vehicle=direction;
    carTmp->current_section=zone;
    carTmp->state=true;
    carTmp->broken=false;
    carTmp->next=NULL;
    carTmp->dangerous=dangerous;
    carTmp=setDest(carTmp);

    if(existingCar==NULL)
    {
        return carTmp;
    }

    listCar tmp = existingCar;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next=carTmp;

    return existingCar;
}

listCar spawnCar(char board[51][101], int probabilty, bool dangerous, listCar existingCar)
{
    bool speed=false;
    char direction=chooseDest();
    if(rand()%3==0)
    {
        speed=true;
    }
    if(board[0][44]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(0, 44, speed, direction, dangerous, s_in_north, existingCar);
        board[0][44]=direction;
    }
    if(board[0][48]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(0, 48, speed, direction, dangerous, s_in_north, existingCar);
        board[0][48]=direction;
    }
    if(board[22][100]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(22, 100, speed, direction, dangerous, s_in_east, existingCar);
        board[22][100]=direction;
    }
    if(board[24][100]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(24, 100, speed, direction, dangerous, s_in_east, existingCar);
        board[24][100]=direction;
    }
    if(board[26][0]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(26, 0, speed, direction, dangerous, s_in_west, existingCar);
        board[26][0]=direction;
    }
    if(board[28][0]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(28, 0, speed, direction, dangerous, s_in_west, existingCar);
        board[28][0]=direction;
    }
    if(board[50][52]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(50, 52, speed, direction, dangerous, s_in_south, existingCar);
        board[50][52]=direction;
    }
    if(board[50][56]==' ' && (rand()%probabilty)==0)
    {
        existingCar=newCar(50, 56, speed, direction, dangerous, s_in_south, existingCar);
        board[50][56]=direction;
    }
    return existingCar;
}
