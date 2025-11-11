#include <stdio.h>

#include "master.h"

void GenerateGrid()
{
    char grid[SIZE][SIZE];

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", grid[i][j]);

            if (j < SIZE - 1)
            {
                printf(" |");
            }
        }
        printf("\n");

        if (i < SIZE - 1)
        {
            for (int k = 0; k < SIZE; k++)
            {
                printf("---");

                if (k < SIZE - 1)
                {
                    printf("+");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

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
