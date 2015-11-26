/*! \file interface.h
    \brief Print the main menu and the board.
*/
#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

///Print the main menu and return the player mode selection.
unsigned int mainMenu();

/*! \fn void affichage(char board[51][101])
    \brief Print the playing board.
    \param board The playing board with all the cars on it.*/
void affichage(char board[51][101]);

#endif
