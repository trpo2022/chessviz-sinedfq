#include <stdio.h>


void swap(int size, char a[size][size], int n,  char firstpos[n], char secondpos[n])
{
    int ALetter = 96; // A - ASCII
    int ANumber = 56;
    int startFirstIndex = firstpos[0] - ALetter;
    int startSecondIndex = 8 - ((firstpos[1] - ANumber)*(-1));
    
    if (startFirstIndex < 0){
        printf("Error\n");
        return;
    }
    if (startSecondIndex < 0){
        printf("Error\n");
        return;
    }
    if (startFirstIndex > 8){
        printf("Error\n");
        return;
    }
    if (startSecondIndex > 8){
        printf("Error\n");
        return;
    }    


    printf("%d - %d\n",startFirstIndex, startSecondIndex);
    printf("%c\n", a[startSecondIndex][startFirstIndex]);
    
    int finalFirstIndex = secondpos[0] - ALetter;
    int finalSecondIndex = 8 - ((secondpos[1] - ANumber)*(-1));
    
    if (finalFirstIndex < 0){
        printf("Error\n");
        return;
    }
    if (finalSecondIndex < 0){
        printf("Error\n");
        return;
    }
    if (finalFirstIndex > 8){
        printf("Error\n");
        return;
    }
    if (finalSecondIndex > 8){
        printf("Error\n");
        return;
    }
    

    printf("%c\n", a[finalSecondIndex][finalFirstIndex]);

    if (a[finalSecondIndex][finalFirstIndex] == ' '){
        a[finalSecondIndex][finalFirstIndex] = a[startSecondIndex][startFirstIndex];
        a[startSecondIndex][startFirstIndex] = ' ';
    }


}

