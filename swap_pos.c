#include <stdio.h>

void check(int FirstIndex, int startSecond)
{
    if (FirstIndex < 0){
        printf("Error\n");
        return;
    }
    if (startSecond < 0){
        printf("Error\n");
        return;
    }
    if (FirstIndex > 8){
        printf("Error\n");
        return;
    }
    if (startSecond > 8){
        printf("Error\n");
        return;
    }    
}




void swap(int size, char a[size][size], int n,  char firstpos[n], char secondpos[n])
{
    int ALetter = 96; // A - ASCII
    int ANumber = 56;
    int startFirstIndex = firstpos[0] - ALetter;
    int startSecondIndex = 8 - ((firstpos[1] - ANumber)*(-1));
    
    check(startFirstIndex, startSecondIndex);

    printf("%d - %d\n",startFirstIndex, startSecondIndex);
    printf("%c\n", a[startSecondIndex][startFirstIndex]);
    
    int finalFirstIndex = secondpos[0] - ALetter;
    int finalSecondIndex = 8 - ((secondpos[1] - ANumber)*(-1));
    
    check(finalFirstIndex, finalSecondIndex);

    printf("%c\n", a[finalSecondIndex][finalFirstIndex]);

    if (a[finalSecondIndex][finalFirstIndex] == ' '){
        a[finalSecondIndex][finalFirstIndex] = a[startSecondIndex][startFirstIndex];
        a[startSecondIndex][startFirstIndex] = ' ';
    }


}

