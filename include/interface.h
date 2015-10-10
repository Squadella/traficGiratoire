#ifndef INTERFACE_H
#define INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

unsigned int mainMenu();
void affichage(char board[51][101]);
//UTF-8 symbols code:
//Bord de route: \u2551 (doubles barres verticales) \u2550 (horizontales)
//Séparation de voies: \u254e (barre verticale pointillée) \u254c (horizontales)
//Coins S-G: \u2554 S-D: \u2557 I-G:\255A I-D: \255D
//Rond-point : \u2573
#endif
