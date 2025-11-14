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

        // horizontal separators between rows
        for (int sep_j = 0; sep_j < SIZE*SIZE; sep_j++)
        {
            if ((i + 1) != SIZE*SIZE)
            {
                if ((sep_j != 0) && (sep_j % SIZE == 0) && (sep_j < SIZE*SIZE - 1) && (i + 1) % SIZE == 0)
                {
                    printf("  ");
                }
                else if ((sep_j != 0) && (sep_j % SIZE == 0) && (sep_j < SIZE*SIZE - 1))
                {
                    printf("||");
                }

                if ((i + 1) % SIZE == 0)
                {
                    printf("===");
                }
                else if ((i + 1) % SIZE != 0)
                {
                    printf("---");
                }

                if ((sep_j + 1) % (SIZE) != 0)
                {
                    printf("+");
                }
            }
        }
        printf("\n");

    }
    printf("\n");

}

void MarkMatrix(int *mark_matrix_idx)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (mark_matrix_idx)
            {
                break;
            }
        }
    }
}

void Matrix(int *matrix_idx)
{
    int game_on = 1;
    int user_input;

    while (game_on)
    {
        scanf("%d", &user_input);

        switch (user_input)
        {
            case 1:
                MarkMatrix(&user_input);
        }
    }
}

void MainGame()
{
    int val;
    scanf("%d", &val);

    switch (val)
    {
        case 1:
            Matrix(&val);
            break;
        default:
            printf("values between 1-9");
            break;
    }


}
