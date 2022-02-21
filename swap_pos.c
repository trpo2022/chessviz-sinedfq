#include <stdio.h>

int getIndex(char a[][9], char letter)
{
    switch (letter)
    {
    case 'a':
        return 1;
    case 'b':
        return 2;
    case 'c':
        return 3;
    case 'd':
        return 4;
    case 'e':
        return 5;
    case 'f':
        return 6;
    case 'g':
        return 7;
    case 'h':
        return 8;
    };
    return 0;
}



void swap(char a[][9], char firstpos[2], char secondpos[2])
{
    int startFirstIndex = firstpos[0] - 96;
    int startSecondIndex = 8 - ((firstpos[1] - 56)*(-1));
    
    if (startFirstIndex < 0){
        printf("Error\n");
        return;
    }
    if (startSecondIndex < 0){
        printf("Error\n");
        return;
    }
    if (startFirstIndex > 9){
        printf("Error\n");
        return;
    }
    if (startSecondIndex > 9){
        printf("Error\n");
        return;
    }    


    printf("%d - %d\n",startFirstIndex, startSecondIndex);
    printf("%c\n", a[startSecondIndex][startFirstIndex]);
    
    int finalFirstIndex = secondpos[0] - 96;
    int finalSecondIndex = 8 - ((secondpos[1] - 56)*(-1));
    
    if (finalFirstIndex < 0){
        printf("Error\n");
        return;
    }
    if (finalSecondIndex < 0){
        printf("Error\n");
        return;
    }
    if (finalFirstIndex > 9){
        printf("Error\n");
        return;
    }
    if (finalSecondIndex > 9){
        printf("Error\n");
        return;
    }
    

    printf("%c\n", a[finalSecondIndex][finalFirstIndex]);

    if (a[finalSecondIndex][finalFirstIndex] == ' '){
        a[finalSecondIndex][finalFirstIndex] = a[startSecondIndex][startFirstIndex];
        a[startSecondIndex][startFirstIndex] = ' ';
    }
    int i, j;
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            printf("%3c", a[i][j]);
        }
    printf("\n");
    }


}

