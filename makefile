chessviz.o: main_func.c
	gcc -Wall -Werror main_func.c  table_create.c  swap_pos.c -o main