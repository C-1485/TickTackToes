#include "master.h"
#include <stdio.h>

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

    int arr[3] = {4,5,6};
    int val = arr[1] - '0';
    int *add = arr;
    int *add2 = arr + 1;
    printf("%d\n", val);
    printf("%p\n", add);
    printf("%p\n", add2);
}
