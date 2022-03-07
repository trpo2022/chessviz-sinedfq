main_func.o: main_func.c
	gcc -Wall -Werror main_func.c swap_pos.c  table_create.c  -o main