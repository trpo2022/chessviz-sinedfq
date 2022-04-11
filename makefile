main_func.exe: main_func.c swap_pos.c  table_create.c
	gcc -Wall -Werror main_func.c swap_pos.c  table_create.c  -o main_func.exe