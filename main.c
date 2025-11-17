#include "master.h"
#include <stdio.h>

int main()
{
    InitGrid();
    while (1)
    {

        GenGrid();
        Game();
    }
}
