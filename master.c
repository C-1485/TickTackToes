#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "master.h"

void InitGrid(Grid grid)
{
    // fill grid with empty spaces
    for (int i = 0; i < SIZE*SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                grid[i][j][k] = ' ';
            }
        }
    }
}

void GenGrid(Grid grid)
{
    printf("\n\n");

    for (int grid_row = SIZE - 1; grid_row > -1; grid_row--)
    {
        for (int cell_row = SIZE - 1; cell_row > -1; cell_row--)
        {
            for (int grid_col = 0; grid_col < SIZE; grid_col++)
            {
                int grid_board = grid_row * SIZE + grid_col;

                for (int cell_col = 0; cell_col < SIZE; cell_col++)
                {
                    printf(" %c", grid[grid_board][cell_row][cell_col]);

                    if (cell_col < 2)
                    {
                        printf(" |");
                    }
                }
                if (grid_col < 2)
                {
                    printf(" ||");
                }
            }
            if (cell_row > 0)
            {
                printf("\n---+---+---||---+---+---||---+---+---\n");
            }

        }
        if (grid_row > 0)
        {
            printf("\n===+===+===  ===+===+===  ===+===+===\n");
        }
    }
    printf("\n\n");
}

void SelectGridCell(Grid grid, int *select_grid, int *select_grid_cell, struct Players *player)
{
    for (int i = SIZE - 1; i > -1; i--)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int cell = i * SIZE + j;

            if (cell == *select_grid_cell - 1)
            {
                grid[*select_grid - 1][i][j] = player->cell_mark;
            }
        }

    }
}

void SelectGrid(int *select_grid, int *player)
{
    int game_on = 1;
    int select_grid_cell;

    while (game_on)
    {
        for (int cell = 1; cell <= SSIZE; cell++)
        {
            if (cell == *select_grid)
            {

            }
        }
    }
}

void PlayerGridCellSelection(Grid grid, int *grid_selection, struct Players *player, struct Players *bot)
{
    int game_on = 1;
    int player_turn = player->player;
    printf("playergridcell %d\n", player->player);

    int player_select_cell;
    int bot_select_cell;

    while (game_on)
    {
        if (player_turn == 0)
        {
            printf("select cell: ");
            scanf("%d", &player_select_cell);
            SelectGridCell(grid, grid_selection, &player_select_cell, player);
            GenGrid(grid);
            player_turn = bot->player;
        }
        else if (player_turn == 1)
        {
            printf("bot select cell");
            bot_select_cell = rand() % 9;
            SelectGridCell(grid, grid_selection, &player_select_cell, bot);
            GenGrid(grid);
            player_turn = player->player;
        }
    }
}

void PlayersGridSelection(Grid grid, int *grid_selection, struct Players *player, struct Players *bot)
{
    for (int grid_idx = 1; grid_idx <= SIZE*SIZE; grid_idx++)
    {
        if (grid_idx == *grid_selection)
        {

            PlayerGridCellSelection(grid, grid_selection, player, bot);
        }
    }
}

void Game(Grid grid, struct Players *player, struct Players *bot)
{
    bool game_on = true;

    //int first_plays = rand() % 2;
    int first_plays = 0;

    int select_grid;
    int bot_select_grid;


    while (game_on)
    {
        if (first_plays == 0){
            printf("select grid: ");
            scanf("%d", &select_grid);
            printf("\nselected grid %d", select_grid);
            PlayersGridSelection(grid, &select_grid, player, bot);
        }
        /*
        else
        {
            bot_select_grid = rand() % 8 + 1;
            PlayersGridSelection(&bot_select_grid, bot);
        }
        */
    }


}
