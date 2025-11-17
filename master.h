#ifndef MASTER_H
#define MASTER_H

#define SIZE 3

struct Players
{
    int player;
    int score;
};

void InitGrid();

void GenGrid();

void SelectGridCell(int *select_grid, int *select_grid_cell);

void SelectGrid(int *select_grid);

void Game();

#endif
