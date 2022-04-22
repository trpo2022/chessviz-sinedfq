CFLAGS = -Wall -Wextra -Werror
CCFLAGS = -Wall -Wextra -Wshadow -Wno-unused-parameter

all: bin/main

bin/main: obj/src/main/main.o obj/src/main/functions.a
	gcc -I src $(CFLAGS) -o $@ $^ -lm

obj/src/main/main.o: src/main/main_func.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/main/functions.o: src/board/functions.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/main/functions.a: obj/src/main/functions.o
	ar rcs $@ $^


test: bin/test/main

bin/test/main: obj/test/board_test.o obj/test/main.o
	gcc -I $(CFLAGS) -o $@ $^ -lm 

obj/test/board_test.o: test/board_test.c
	gcc -c $(CCFLAGS) -o $@ 	$< -lm

obj/test/main.o: test/main.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

.PHONY: clean
clean:
	rm obj/src/main/*.a obj/src/main/*.o bin/main
