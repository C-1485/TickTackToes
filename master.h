#ifndef MASTER_H
#define MASTER_H

#define SIZE 3
#define SSIZE 9

typedef char Grid[SSIZE][SIZE][SIZE];

typedef struct
{
    char marks[SIZE];
}PlayerQueue;

struct Players
{
    int player;
    char cell_mark;
    int score;
};

void InitGrid(Grid grid);

void GenGrid(Grid grid);

void placeMark(Grid grid, Queue *q, int row, int col, char mark);

void SelectGridCell(Grid grid, int *select_grid, int *select_grid_cell, struct Players *player);

void SelectGrid(int *select_grid, int *player);

void PlayerGridCellSelection(Grid grid, int *grid_selection, struct Players *player, struct Players *bot);

void PlayerGridSelection(Grid grid, int *grid_selection, struct Players *player, struct Players *bot);

void Game(Grid grid, struct Players *player, struct Players *bot);

#endif
