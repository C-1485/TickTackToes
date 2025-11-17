#include "master.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    /*
    InitGrid();
    while (1)
    {

        GenGrid();
        Game();
    }
    */
    srand(time(NULL));
    for (int i = 0; i < 7; i++)
    {
        int random = rand() % 7;
        printf("%d\n", random);
    }
}
