#include "interface.h"

/*                                              */ //46 espaces

void affichage(char board[51][101])
{
    system("printf '\e[8;51;101t'");
	system("clear");
    printf("                                              ║%c╎%c║%c╎%c║\n", board[0][47], board[0][49], board[0][51], board[0][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[1][47], board[1][49], board[1][51], board[1][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[2][47], board[2][49], board[2][51], board[2][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[3][47], board[3][49], board[3][51], board[3][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[4][47], board[4][49], board[4][51], board[4][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[5][47], board[5][49], board[5][51], board[5][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[6][47], board[6][49], board[6][51], board[6][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[7][47], board[7][49], board[7][51], board[7][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[8][47], board[8][49], board[8][51], board[8][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[9][47], board[9][49], board[9][51], board[9][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[10][47], board[10][49], board[10][51], board[10][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[11][47], board[11][49], board[11][51], board[11][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[12][47], board[12][49], board[12][51], board[12][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[13][47], board[13][49], board[13][51], board[13][53]);
    printf("                                              ║%c╎%c║%c╎%c║\n", board[14][47], board[14][49], board[14][51], board[14][53]);
    printf("                          ╔═══════════════════╝%c╎%c║%c╎%c╚═══════════════════╗\n", board[15][47], board[16][49], board[17][51], board[18][53]);
    printf("                          ║ %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ║\n",board[19][29], board[19][30], board[19][31], board[19][32], board[19][33], board[19][34], board[19][35], board[19][36], board[19][37], board[19][38], board[19][39], board[19][40], board[19][41], board[19][42], board[19][43], board[19][44], board[19][45], board[19][46], board[19][47], board[19][48], board[19][49], board[19][50], board[19][51], board[19][52], board[19][53], board[19][54], board[19][55], board[19][56], board[19][57], board[19][58], board[19][59], board[19][60], board[19][61], board[19][62], board[19][63], board[19][64], board[19][65], board[19][66], board[19][67], board[19][68], board[19][69], board[19][70], board[19][71], board[19][72], board[19][73]);
    printf("                          ║%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c║\n", board[20][28], board[20][30], board[20][31], board[20][32], board[20][33], board[20][34], board[20][35], board[20][36], board[20][37], board[20][38], board[20][39], board[20][40], board[20][41], board[20][42], board[20][43], board[20][44], board[20][45], board[20][46], board[20][47], board[20][48], board[20][49], board[20][50], board[20][51], board[20][52], board[20][53], board[20][54], board[20][55], board[20][56], board[20][57], board[20][58], board[20][59], board[20][60], board[20][61], board[20][62], board[20][63], board[20][64], board[20][65], board[20][66], board[20][67], board[20][68], board[20][69], board[20][70], board[20][71], board[20][72], board[20][74]);
    printf("                          ║%c%c ╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳ %c%c║\n", board[21][28], board[21][29], board[21][73], board[21][74]);
    printf("                          ║%c%c╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳%c%c║\n", board[23][28], board[23][29], board[23][73], board[23][74]);
    printf("                          ║%c%c╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳%c%c║\n", board[22][28], board[22][29], board[22][73], board[22][74]);
    printf("══════════════════════════╝%c%c╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳%c%c╚══════════════════════════\n", board[15][47], board[16][49], board[17][51], board[18][53]);

}
