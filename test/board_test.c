#include "../thirdparty/ctest.h"
#include <stdio.h>
#include "../src/board/functions.h"
#include "../src/board/functions.c"


CTEST(read_txt, simple_read_file)
{
    
    FILE* file = fopen("correct.txt", "r");
    if (file == NULL){
        printf("-------\n");
    }
    char result[6];
    if (fgets(result, 6, file) == NULL){
        printf("Error \n");
        fclose(file);
    }
    fclose(file);
    const char expected[6] = {'a', '7', 'a', '6'};
    ASSERT_STR(result, expected);

}

CTEST(read_txt, checkMoveCorrect)
{
    FILE* file = fopen("correct.txt", "r");
    char positions[6];
    fgets(positions, 6, file);
    fclose(file);
    
    int ANumber = 56;
    const int res_error = 0; 
    int size = 9;
    char a[size][size];
    chess(a);

    int startSecondIndex = 8 - ((positions[1] - ANumber)*(-1));
    int finalSecondIndex = 8 - ((positions[3] - ANumber)*(-1));

    printf("%d [%c] - %d [%c] \n", finalSecondIndex, positions[1], startSecondIndex, positions[2]);

    int temp = checkMove(finalSecondIndex, startSecondIndex);
    ASSERT_EQUAL(res_error, temp);
}


CTEST(read_txt, checkMoveUncorrect)
{
    FILE* file = fopen("uncorrect.txt", "r");
    char positions[6];
    fgets(positions, 6, file);
    fclose(file);
    
    int ANumber = 56;
    const int res_error = 1; 
    int size = 9;
    char a[size][size];
    chess(a);
    int startSecondIndex = 8 - ((positions[1] - ANumber)*(-1));
    int finalSecondIndex = 8 - ((positions[3] - ANumber)*(-1));

    printf("%d [%c] - %d [%c] \n", finalSecondIndex, positions[1], startSecondIndex, positions[2]);

    int temp = checkMove(finalSecondIndex, startSecondIndex);
    
    ASSERT_EQUAL(res_error, temp);
}

CTEST(read_txt, checkUncorrect)
{
    FILE* file = fopen("checkUncorrect.txt", "r");
    char positions[6];
    fgets(positions, 6, file);
    fclose(file);
    
    int ANumber = 56;
    int ALetter = 96;
    const int res_error = 0; 
    int size = 9;
    char a[size][size];
    chess(a);
    int startSecondIndex = 8 - ((positions[3] - ANumber)*(-1));
    int startFirstIndex = positions[2] - ALetter;

    int temp = check(startFirstIndex, startSecondIndex);
    
    ASSERT_EQUAL(res_error, temp);
}



CTEST(read_txt, checkCorrect)
{
    FILE* file = fopen("checkCorrect.txt", "r");
    char positions[6];
    fgets(positions, 6, file);
    fclose(file);
    
    int ANumber = 56;
    int ALetter = 96;
    const int res_error = 1; 
    int size = 9;
    char a[size][size];
    chess(a);
    int startSecondIndex = 8 - ((positions[3] - ANumber)*(-1));
    int startFirstIndex = positions[2] - ALetter;

    int temp = check(startFirstIndex, startSecondIndex);
    
    ASSERT_EQUAL(res_error, temp);
}

