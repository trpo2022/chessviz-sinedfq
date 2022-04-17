#include <stdio.h>
#include "board/functions.h"


int main()
{
    int size = 9;
    char a[size][size];
    chess(a);
        
    int i, j;
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            printf("%3c", a[i][j]);
        }
    printf("\n");
    }

    int n = 2;
    char startPosN[n];
    char finalPosN[n];
    for (int i = 0; i < n; i++){
        scanf("%1c", &startPosN[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%1c", &finalPosN[i]);
    }
    swap(size, a, n, startPosN, finalPosN);
    
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            printf("%3c", a[i][j]);
        }
    printf("\n");
    }

}