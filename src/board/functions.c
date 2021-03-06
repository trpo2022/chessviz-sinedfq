#include <stdio.h>

int checkMove(int startFirstIndex, int startSecondIndex)
{
    if (startSecondIndex == 7 || startSecondIndex == 2){
        int temp = startSecondIndex - startFirstIndex;
        if (temp > 2){
            return 1;
        } else if (temp == 0){
            return 1;
        } else return 0;
    }  
    return 0;
}

int check(int FirstIndex, int startSecond)
{
    if (FirstIndex < 0){
        return 0;
    } else if (startSecond < 0){
        return 0;
    } else if (FirstIndex > 8){
        return 0;
    } else if (startSecond > 8){
        return 0;
    } else return 1;   

    return 3;
}

void swap(int size, char a[size][size], int n,  char firstpos[n], char secondpos[n])
{
    int ALetter = 96; // A - ASCII
    int ANumber = 56;
    int startFirstIndex = firstpos[0] - ALetter;
    int startSecondIndex = 8 - ((firstpos[1] - ANumber)*(-1));
    
    check(startFirstIndex, startSecondIndex);
    
    int finalFirstIndex = secondpos[0] - ALetter;
    int finalSecondIndex = 8 - ((secondpos[1] - ANumber)*(-1));

    if (check(finalFirstIndex, finalSecondIndex) == 0){
        printf("Выход на за границу поля\n");
    }
    
    if (checkMove(finalSecondIndex, startSecondIndex) == 1){
        printf("Данная фигура так ходить не может\n");
    }

    if ((checkMove(finalSecondIndex, startSecondIndex)) != 1){
        if (a[finalSecondIndex][finalFirstIndex] == ' '){
            a[finalSecondIndex][finalFirstIndex] = a[startSecondIndex][startFirstIndex];
            a[startSecondIndex][startFirstIndex] = ' ';
    }
    }
}


void chess(char a[][9])
{
    a[0][0] = ' ';
    a[0][1] = 'a';
    a[0][2] = 'b';
    a[0][3] = 'c';
    a[0][4] = 'd';
    a[0][5] = 'e';
    a[0][6] = 'f';
    a[0][7] = 'g';
    a[0][8] = 'h';
    

    a[1][1] = 'r';
    a[1][2] = 'n';
    a[1][3] = 'b';
    a[1][4] = 'q';
    a[1][5] = 'k';
    a[1][6] = 'b';
    a[1][7] = 'n';
    a[1][8] = 'r';
    
    int k;
    int l;

    for (k = 0; k < 9; k++){
        a[2][k] = 'p';
    }
    
    for(k = 3; k < 7; k++){
        for (l = 1; l < 9; l++){
            a[k][l] = ' ';
        }
    }
    
    for (l = 0; l < 9; l++){
        a[7][l] = 'P';
    }
    a[8][0] = ' ';
    a[8][1] = 'R';
    a[8][2] = 'N';
    a[8][3] = 'B';
    a[8][4] = 'Q';
    a[8][5] = 'K';
    a[8][6] = 'B';
    a[8][7] = 'N';
    a[8][8] = 'R';
    
    a[0][0] = ' ';
    a[1][0] = '1';
    a[2][0] = '2';
    a[3][0] = '3';
    a[4][0] = '4';
    a[5][0] = '5';
    a[6][0] = '6';
    a[7][0] = '7';
    a[8][0] = '8';


}
