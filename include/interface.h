/*! \file interface.h
    \brief Print the main menu and the board.
*/
#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

///Prints the main menu and returns the selected mode.
unsigned int mainMenu();

/*! \fn void affichage(char board[51][101])
    \brief Prints the board.
    \param board The board containing all of the cars.*/
void affichage(char board[51][101]);

#endif
