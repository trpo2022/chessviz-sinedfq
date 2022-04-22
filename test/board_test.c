#include "../thirdparty/ctest.h"
#include <stdio.h>
#include "../src/board/functions.h"
#include "../src/board/functions.c"


CTEST(read_txt, simple_read_file)
{
    FILE* file = fopen("test.txt", "r");
    char result[6];
    fgets(result, 6, file);
    fclose(file);

    const char expected[6] = {'a', '7', 'a', '6'};

    ASSERT_STR(result, expected);
}

CTEST(read_txt, checkMoveCorrect)
{
    FILE* file = fopen("test.txt", "r");
    char positions[8];
    fgets(positions, 8, file);
    fclose(file);
    
    int ANumber = 56;
    const int res_error = 0; 
    int size = 9;
    char a[size][size];
    chess(a);

    int startSecondIndex = 8 - ((positions[1] - ANumber)*(-1));
    
    int finalSecondIndex = 8 - ((positions[4] - ANumber)*(-1));

    int temp = checkMove(8, positions, startSecondIndex, finalSecondIndex);
    
    ASSERT_EQUAL(res_error, temp);
}


CTEST(read_txt, checkMoveUncorrect)
{
    FILE* file = fopen("test.txt", "r");
    char positions[8];
    fgets(positions, 8, file);
    fclose(file);
    
    int ANumber = 56;
    const int res_error = 1; 
    int size = 9;
    char a[size][size];
    chess(a);
    int startSecondIndex = 8 - ((positions[1] - ANumber)*(-1));
    int finalSecondIndex = 8 - ((positions[4] - ANumber)*(-1));
    int temp = checkMove(8, positions, startSecondIndex, finalSecondIndex);
    
    ASSERT_EQUAL(res_error, temp);
}

