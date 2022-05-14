#pragma once

void swap(int size, char a[size][size], int n,  char firstpos[n], char secondpos[n]);
void chess(char a[][9]);
int checkMove(int startFirstIndex, int startSecondIndex);
int check(int FirstIndex, int startSecond);