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
    grid[1][2][0] = 'x';
    grid[7][1][1] = 'x';
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

}

void SelectGrid(int *select_grid)
{
    int game_on = 1;
    int selected_grid = SIZE * SIZE - *select_grid;
    int select_grid_cell;
    int selected_grid_cell;

    while (game_on)
    {
        scanf("%d", &select_grid_cell);

        switch (*select_grid)
        {
            case 1:
                SelectGridCell(&selected_grid, &selected_grid_cell);
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
