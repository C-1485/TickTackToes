#include <stdio.h>

#include "master.h"

char grid[SIZE*SIZE][SIZE][SIZE];

void InitGrid()
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

void GenGrid()
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

void SelectGridCell(int *select_grid, int *select_grid_cell)
{
    for (int i = SIZE - 1; i > -1; i--)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int cell = i * SIZE + j;

            if (cell == *select_grid_cell - 1)
            {
                grid[*select_grid - 1][i][j] = 'x';
            }
        }

    }
}

void SelectGrid(int *select_grid)
{
    int game_on = 1;
    int select_grid_cell;

    while (game_on)
    {
        scanf("%d", &select_grid_cell);

        switch (*select_grid)
        {
            case 1:
                SelectGridCell(select_grid, &select_grid_cell);
                game_on = 0;
                break;
            default:
                printf("select a cell");
                break;
        }
    }
}

void Game()
{
    int select_grid;
    scanf("%d", &select_grid);

    switch (select_grid)
    {
        case 1:
            SelectGrid(&select_grid);
            break;
        default:
            printf("values between 1-9");
            break;
    }


}
