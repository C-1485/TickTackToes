#include "master.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    Grid grid;
    char mark[2] = {'x', 'o'};

    InitGrid(grid);
    struct Players *player;
    struct Players *bot;

    // initialize players
    player->player = 0;
    player->cell_mark = mark[rand() % 2];

    bot->player = 1;
    if (player->cell_mark == mark[0])
    {
        bot->cell_mark = mark[1];
    }
    else
    {
        bot->cell_mark = mark[0];
    }


    player->player = 1;

    bool game_on = true;

    Game(grid, player, bot);


    // ====
    /*
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        int random_val = rand();
        int random = rand() % 9;
        printf("%d - ", random_val);
        printf("%d\n", random);
    }
    */
}
