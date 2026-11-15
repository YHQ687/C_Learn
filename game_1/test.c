#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void InitBoard(char board[ROWS][COLS], int r, int c, char set)
{
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
			board[i][j] = set;
	}
}


void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	for (int j = 0;j <= c;j++)
		printf("%d ", j);
	printf("\n");
	for (int i = 1;i <= r;i++)
	{
		printf("%d ", i);
		for (int j = 1;j <= c;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void SetMine(char board[ROWS][COLS], int r, int c)
{
	int count = 10;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

char GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	if (x < 1 || x > ROW || y < 1 || y > COL)
	{
		return '0';
	}
	if (mine[x][y] == '1')
	{
		return '*';
	}
	else
	{
		return (char)(mine[x - 1][y - 1] + mine[x - 1][y]
			+ mine[x - 1][y + 1] + mine[x][y - 1]
			+ mine[x][y + 1] + mine[x + 1][y - 1]
			+ mine[x + 1][y] + mine[x + 1][y + 1] - 7 * '0');
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r * c - 10)
	{
		printf("输入要打印的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被干死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					show[x][y] = GetMineCount(mine, x, y);
					if (show[x][y] == '0')
					{
						show[x - 1][y - 1] = GetMineCount(mine, x - 1, y - 1);
						show[x - 1][y] = GetMineCount(mine, x - 1, y);
						show[x - 1][y + 1] = GetMineCount(mine, x - 1, y + 1);

						show[x][y - 1] = GetMineCount(mine, x, y - 1);
						show[x][y + 1] = GetMineCount(mine, x, y + 1);

						show[x + 1][y - 1] = GetMineCount(mine, x + 1, y - 1);
						show[x + 1][y] = GetMineCount(mine, x + 1, y);
						show[x + 1][y + 1] = GetMineCount(mine, x + 1, y + 1);
					}
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("该坐标已经被排查过，不用重复排查\n");
			}
			
		}
		else
		{
			printf("输入坐标非法,重新输入");
			while (getchar() != '\n');
			continue;
		}
	}
	if (win == r * c - 10)
	{
		printf("恭喜你，排雷成功。");
		DisplayBoard(mine, ROW, COL);
	}
}