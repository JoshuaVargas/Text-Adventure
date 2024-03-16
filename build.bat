gcc -c src/scenes.c -o obj/scenes.o -Iinclude
gcc -c src/parse.c -o obj/parse.o -Iinclude
gcc -c src/main.c -o obj/main.o -Iinclude
gcc -o ./bin/zealot ./obj/scenes.o ./obj/main.o ./obj/parse.o