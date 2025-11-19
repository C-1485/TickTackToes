#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "master.h"

void InitGrid(char grid[SSIZE][SIZE][SIZE])
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

void GenGrid(char grid[SSIZE][SIZE][SIZE])
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

void SelectGridCell(int *select_grid, int *select_grid_cell, struct Players *player)
{
    for (int i = SIZE - 1; i > -1; i--)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int cell = i * SIZE + j;

            if (cell == *select_grid_cell - 1)
            {
                //grid[*select_grid - 1][i][j] = player->cell_mark;
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

void PlayerGridCellSelection(int *grid_selection, struct Players *player)
{
    int game_on = 1;
    int player_turn = player->player;

    int player_select_cell;

    while (game_on)
    {
        if (player->player == 0)
        {
            scanf("%d", &player_select_cell);
            SelectGridCell(grid_selection, &player_select_cell, player);
        }
    }
}

void PlayersGridSelection(int *grid_selection, struct Players *player)
{
    for (int grid = 1; grid <= SIZE*SIZE; grid++)
    {
        if (grid == *grid_selection)
        {
            PlayerGridCellSelection(grid_selection, player);
        }
    }
}

void Game(struct Players *player, struct Players *bot, bool *game_on)
{

    //int first_plays = rand() % 2;
    int first_plays = 0;

    int select_grid;
    int bot_select_grid;

    if (first_plays == 0){
        scanf("%d", &select_grid);
        PlayersGridSelection(&select_grid, player);
    }
    else
    {
        bot_select_grid = rand() % 8 + 1;
        PlayersGridSelection(&bot_select_grid, bot);
    }

}
