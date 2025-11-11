#include <stdio.h>

#include "master.h"

void GenerateMultiGrids()
{
    char multigrids[SIZE*SIZE][SIZE*SIZE];

    for (int i = 0; i < SIZE * SIZE; i++)
    {
        for (int j = 0; j < SIZE * SIZE; j++)
        {
            multigrids[i][j] = ' ';
        }
    }

    printf("\n");

    for (int i = 0; i < SIZE * SIZE; i++)
    {
        for (int j = 0; j < SIZE * SIZE; j++)
        {
            printf(" %c ", multigrids[i][j]);

            if ((j + 1) % SIZE == 0 && j != SIZE * SIZE - 1)
            {
                printf(" || ");
            }
            else if (j < SIZE * SIZE - 1)
            {
                printf("|");
            }
        }
        printf("\n");

        if ((i + 1) % SIZE == 0 && i != SIZE * SIZE - 1)
        {
            for (int k = 0; k < SIZE * SIZE; k++)
            {
                printf("---");

                if ((k + 1) % SIZE == 0 && k != SIZE * SIZE - 1)
                {
                    printf(" || ");
                }
                else if (k < SIZE * SIZE - 1)
                {
                    printf("+");
                }
            }
            printf("\n============================\n");
        }
        else if (i < SIZE * SIZE - 1)
        {
            for (int k = 0; k < SIZE * SIZE; k++)
            {
                printf("---");

                if ((k + 1) % SIZE == 0 && k != SIZE * SIZE - 1)
                {
                    printf(" || ");
                }
                else if (k < SIZE * SIZE - 1)
                {
                    printf("+");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

void GenGrid()
{
    char grid[SIZE*SIZE][SIZE][SIZE];

    // fill grid with tmp values
    for (int i = 0; i < SIZE*SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                grid[i][j][k] = '+';
            }
        }
    }

    for (int i = 0; i < SIZE*SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                if (k % SIZE != 0)
                {
                    printf(" |");
                }
                printf(" %c", grid[i][j][k]);
            }
            if (j < SIZE - 1)
            {
                printf (" ||");
            }
        }
        printf("\n");

        // horizontal separator between rows
        for (int sep_j = 0; sep_j < SIZE*SIZE; sep_j++)
        {
            if ((sep_j != 0) && (sep_j % SIZE == 0) && (sep_j < SIZE*SIZE - 1))
            {
                printf("||");
            }

            printf("---");
            if ((sep_j + 1) % (SIZE) != 0)
            {
                printf("+");
            }
        }

        printf("\n");
    }
    printf("\n");
}
