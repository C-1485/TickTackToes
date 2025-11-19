#ifndef MASTER_H
#define MASTER_H

#define SIZE 3
#define SSIZE 9

struct Players
{
    int player;
    char cell_mark;
    int score;
};

void InitGrid(char grid[SSIZE][SIZE][SIZE]);

void GenGrid(char grid[SSIZE][SIZE][SIZE]);

void SelectGridCell(int *select_grid, int *select_grid_cell, struct Players *player);

void SelectGrid(int *select_grid, int *player);

void PlayerGridCellSelection(int *grid_selection, struct Players *player);

void PlayersGridSelection(int *grid_selection, struct Players *player);

void Game(struct Players *player, struct Players *bot, bool *game_on);

#endif
