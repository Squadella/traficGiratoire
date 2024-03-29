#include "interface.h"

//Print and return the information in the main menu
unsigned int mainMenu()
{
    system("clear");
    system("printf '\e[8;52;101t'");

    FILE *logo;
    char tmp;
    unsigned int mode = 0;

    if((logo = fopen("resources/logo.txt", "r")) == NULL)
        printf("Error opening logo.txt : %s\n", strerror(errno));

    while(fscanf(logo, "%c", &tmp) != EOF)
        printf("%c", tmp);

    printf("Welcome, please choose a circulation mode : \n");
    printf("\t1) Fluid\n");
    printf("\t2) Dense\n");
    printf("\t3) Dangerous\n");

    do
    {
        if(scanf("%u", &mode) != 1)
        {
            printf("Please enter a correct mode number (1, 2 or 3).\n");
            exit(-1);
        }
        else if(mode > 3 || mode == 0)
            printf("Please enter a correct mode number (1, 2 or 3).\n");
        fflush(stdin);
    }while(mode > 3 || mode == 0);

    return mode;
}

//Print the giratoire with the given board
void affichage(char board[51][101])
{
    system("clear");

    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[0][44], board[0][48], board[0][52], board[0][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[1][44], board[1][48], board[1][52], board[1][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[2][44], board[2][48], board[2][52], board[2][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[3][44], board[3][48], board[3][52], board[3][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[4][44], board[4][48], board[4][52], board[4][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[5][44], board[5][48], board[5][52], board[5][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[6][44], board[6][48], board[6][52], board[6][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[7][44], board[7][48], board[7][52], board[7][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[8][44], board[8][48], board[8][52], board[8][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[9][44], board[9][48], board[9][52], board[9][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[10][44], board[10][48], board[10][52], board[10][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[11][44], board[11][48], board[11][52], board[11][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[12][44], board[12][48], board[12][52], board[12][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[13][44], board[13][48], board[13][52], board[13][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[14][44], board[14][48], board[14][52], board[14][56]);
    printf("                          \e[90m╔═══════════════╝\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m╚═══════════════╗\e[0m\n", board[15][44], board[15][48], board[15][52], board[15][56]);
    printf("                          \e[90m║\e[0m %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \e[90m║\e[0m\n",board[16][28], board[16][29], board[16][30], board[16][31], board[16][32], board[16][33], board[16][34], board[16][35], board[16][36], board[16][37], board[16][38], board[16][39], board[16][40], board[16][41], board[16][42], board[16][43], board[16][44], board[16][45], board[16][46], board[16][47], board[16][48], board[16][49], board[16][50], board[16][51], board[16][52], board[16][53], board[16][54], board[16][55], board[16][56], board[16][57], board[16][58], board[16][59], board[16][60], board[16][61], board[16][62], board[16][63], board[16][64], board[16][65], board[16][66], board[16][67], board[16][68], board[16][69], board[16][70], board[16][71], board[16][72]);
    printf("                          \e[90m║\e[0m%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c\e[90m║\e[0m\n", board[17][27], board[17][29], board[17][30], board[17][31], board[17][32], board[17][33], board[17][34], board[17][35], board[17][36], board[17][37], board[17][38], board[17][39], board[17][40], board[17][41], board[17][42], board[17][43], board[17][44], board[17][45], board[17][46], board[17][47], board[17][48], board[17][49], board[17][50], board[17][51], board[17][52], board[17][53], board[17][54], board[17][55], board[17][56], board[17][57], board[17][58], board[17][59], board[17][60], board[17][61], board[17][62], board[17][63], board[17][64], board[17][65], board[17][66], board[17][67], board[17][68], board[17][69], board[17][70], board[17][71], board[17][73]);
    printf("                          \e[90m║\e[0m%c%c   \e[90m╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳\e[0m   %c%c\e[90m║\e[0m\n", board[18][27], board[18][28], board[18][72], board[18][73]);
    printf("                          \e[90m║\e[0m%c%c  \e[90m╳\e[0m\e[42m                                     \e[0m\e[90m╳\e[0m  %c%c\e[90m║\e[0m\n", board[19][27], board[19][28], board[19][72], board[19][73]);
    printf("                          \e[90m║\e[0m%c%c  \e[90m╳\e[0m\e[42m                                     \e[0m\e[90m╳\e[0m  %c%c\e[90m║\e[0m\n", board[20][27], board[20][28], board[20][72], board[20][73]);
    printf("\e[90m══════════════════════════╝\e[0m%c%c  \e[90m╳\e[0m\e[42m           \e[38;5;248;48;5;251m▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\e[42m           \e[0m\e[90m╳\e[0m  %c%c\e[90m╚══════════════════════════\e[0m\n", board[21][27], board[21][28], board[21][72], board[21][73]);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \e[90m╳\e[0m\e[42m          \e[38;5;248;48;5;251m▓\e[44m               \e[0m\e[38;5;248;48;5;251m▓\e[42m          \e[0m\e[90m╳\e[0m  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", board[22][0], board[22][1], board[22][2], board[22][3], board[22][4], board[22][5], board[22][6], board[22][7], board[22][8], board[22][9], board[22][10], board[22][11], board[22][12], board[22][13], board[22][14], board[22][15], board[22][16], board[22][17], board[22][18], board[22][19], board[22][20], board[22][21], board[22][22], board[22][23], board[22][24], board[22][25], board[22][26], board[22][27], board[22][28], board[22][72], board[22][73], board[22][74], board[22][75], board[22][76], board[22][77], board[22][78], board[22][79], board[22][80], board[22][81], board[22][82], board[22][83], board[22][84], board[22][85], board[22][86], board[22][87], board[22][88], board[22][89], board[22][90], board[22][91], board[22][92], board[22][93], board[22][94], board[22][95], board[22][96], board[22][97], board[22][98], board[22][99], board[22][100]);
    printf("╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌%c%c  \e[90m╳\e[0m\e[42m         \e[38;5;248;48;5;251m▓\e[44m                 \e[0m\e[38;5;248;48;5;251m▓\e[42m         \e[0m\e[90m╳\e[0m  %c%c╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌\n", board[23][27], board[23][28], board[23][72], board[23][73]);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \e[90m╳\e[0m\e[42m        \e[38;5;248;48;5;251m▓\e[44m                   \e[0m\e[38;5;248;48;5;251m▓\e[42m        \e[0m\e[90m╳\e[0m  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", board[24][0], board[24][1], board[24][2], board[24][3], board[24][4], board[24][5], board[24][6], board[24][7], board[24][8], board[24][9], board[24][10], board[24][11], board[24][12], board[24][13], board[24][14], board[24][15], board[24][16], board[24][17], board[24][18], board[24][19], board[24][20], board[24][21], board[24][22], board[24][23], board[24][24], board[24][25], board[24][26], board[24][27], board[24][28], board[24][72], board[24][73], board[24][74], board[24][75], board[24][76], board[24][77], board[24][78], board[24][79], board[24][80], board[24][81], board[24][82], board[24][83], board[24][84], board[24][85], board[24][86], board[24][87], board[24][88], board[24][89], board[24][90], board[24][91], board[24][92], board[24][93], board[24][94], board[24][95], board[24][96], board[24][97], board[24][98], board[24][99], board[24][100]);
    printf("\e[90m═══════════════════════════\e[0m%c%c  \e[90m╳\e[0m\e[42m       \e[38;5;248;48;5;251m▓\e[44m                     \e[0m\e[38;5;248;48;5;251m▓\e[42m       \e[0m\e[90m╳\e[0m  %c%c\e[90m═══════════════════════════\e[0m\n", board[25][27], board[25][28], board[25][72], board[25][73]);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \e[90m╳\e[0m\e[42m        \e[38;5;248;48;5;251m▓\e[44m                   \e[0m\e[38;5;248;48;5;251m▓\e[42m        \e[0m\e[90m╳\e[0m  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", board[26][0], board[26][1], board[26][2], board[26][3], board[26][4], board[26][5], board[26][6], board[26][7], board[26][8], board[26][9], board[26][10], board[26][11], board[26][12], board[26][13], board[26][14], board[26][15], board[26][16], board[26][17], board[26][18], board[26][19], board[26][20], board[26][21], board[26][22], board[26][23], board[26][24], board[26][25], board[26][26], board[26][27], board[26][28], board[26][72], board[26][73], board[26][74], board[26][75], board[26][76], board[26][77], board[26][78], board[26][79], board[26][80], board[26][81], board[26][82], board[26][83], board[26][84], board[26][85], board[26][86], board[26][87], board[26][88], board[26][89], board[26][90], board[26][91], board[26][92], board[26][93], board[26][94], board[26][95], board[26][96], board[26][97], board[26][98], board[26][99], board[26][100]);
    printf("╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌%c%c  \e[90m╳\e[0m\e[42m         \e[38;5;248;48;5;251m▓\e[44m                 \e[0m\e[38;5;248;48;5;251m▓\e[42m         \e[0m\e[90m╳\e[0m  %c%c╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌\n", board[27][27], board[27][28], board[27][72], board[27][73]);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  \e[90m╳\e[0m\e[42m          \e[38;5;248;48;5;251m▓\e[44m               \e[0m\e[38;5;248;48;5;251m▓\e[42m          \e[0m\e[90m╳\e[0m  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", board[28][0], board[28][1], board[28][2], board[28][3], board[28][4], board[28][5], board[28][6], board[28][7], board[28][8], board[28][9], board[28][10], board[28][11], board[28][12], board[28][13], board[28][14], board[28][15], board[28][16], board[28][17], board[28][18], board[28][19], board[28][20], board[28][21], board[28][22], board[28][23], board[28][24], board[28][25], board[28][26], board[28][27], board[28][28], board[28][72], board[28][73], board[28][74], board[28][75], board[28][76], board[28][77], board[28][78], board[28][79], board[28][80], board[28][81], board[28][82], board[28][83], board[28][84], board[28][85], board[28][86], board[28][87], board[28][88], board[28][89], board[28][90], board[28][91], board[28][92], board[28][93], board[28][94], board[28][95], board[28][96], board[28][97], board[28][98], board[28][99], board[28][100]);
    printf("\e[90m══════════════════════════╗\e[0m%c%c  \e[90m╳\e[0m\e[42m           \e[38;5;248;48;5;251m▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\e[42m           \e[0m\e[90m╳\e[0m  %c%c\e[90m╔══════════════════════════\e[0m\n", board[29][27], board[29][28], board[29][72], board[29][73]);
    printf("                          \e[90m║\e[0m%c%c  \e[90m╳\e[0m\e[42m                                     \e[0m\e[90m╳\e[0m  %c%c\e[90m║\e[0m\n", board[30][27], board[30][28], board[30][72], board[30][73]);
    printf("                          \e[90m║\e[0m%c%c  \e[90m╳\e[0m\e[42m                                     \e[0m\e[90m╳\e[0m  %c%c\e[90m║\e[0m\n", board[31][27], board[31][28], board[31][72], board[31][73]);
    printf("                          \e[90m║\e[0m%c%c   \e[90m╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳╳\e[0m   %c%c\e[90m║\e[0m\n", board[32][27], board[32][28], board[32][72], board[32][73]);
    printf("                          \e[90m║\e[0m%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c\e[90m║\e[0m\n", board[33][27], board[33][29], board[33][30], board[33][31], board[33][32], board[33][33], board[33][34], board[33][35], board[33][36], board[33][37], board[33][38], board[33][39], board[33][40], board[33][41], board[33][42], board[33][43], board[33][44], board[33][45], board[33][46], board[33][47], board[33][48], board[33][49], board[33][50], board[33][51], board[33][52], board[33][53], board[33][54], board[33][55], board[33][56], board[33][57], board[33][58], board[33][59], board[33][60], board[33][61], board[33][62], board[33][63], board[33][64], board[33][65], board[33][66], board[33][67], board[33][68], board[33][69], board[33][70], board[33][71], board[33][73]);
    printf("                          \e[90m║\e[0m %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \e[90m║\e[0m\n",board[34][28], board[34][29], board[34][30], board[34][31], board[34][32], board[34][33], board[34][34], board[34][35], board[34][36], board[34][37], board[34][38], board[34][39], board[34][40], board[34][41], board[34][42], board[34][43], board[34][44], board[34][45], board[34][46], board[34][47], board[34][48], board[34][49], board[34][50], board[34][51], board[34][52], board[34][53], board[34][54], board[34][55], board[34][56], board[34][57], board[34][58], board[34][59], board[34][60], board[34][61], board[34][62], board[34][63], board[34][64], board[34][65], board[34][66], board[34][67], board[34][68], board[34][69], board[34][70], board[34][71], board[34][72]);
    printf("                          \e[90m╚═══════════════╗\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m╔═══════════════╝\e[0m\n", board[35][44], board[35][48], board[35][52], board[35][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[36][44], board[36][48], board[36][52], board[36][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[37][44], board[37][48], board[37][52], board[37][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[38][44], board[38][48], board[38][52], board[38][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[39][44], board[39][48], board[39][52], board[39][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[40][44], board[40][48], board[40][52], board[40][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[41][44], board[41][48], board[41][52], board[41][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[42][44], board[42][48], board[42][52], board[42][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[43][44], board[43][48], board[43][52], board[43][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[44][44], board[44][48], board[44][52], board[44][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[45][44], board[45][48], board[45][52], board[45][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[46][44], board[46][48], board[46][52], board[46][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[47][44], board[47][48], board[47][52], board[47][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[48][44], board[48][48], board[48][52], board[48][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m\n", board[49][44], board[49][48], board[49][52], board[49][56]);
    printf("                                          \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m %c ╎ %c \e[90m║\e[0m", board[50][44], board[50][48], board[50][52], board[50][56]);
}
