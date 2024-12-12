game: gol.o square.o
	@clang gol.o square.o -o game
	@make clean
gol.o: gol.c
	@clang -c gol.c -o gol.o
#game_logic.o: game_logic.c
#	@clang -c game_logic.c -o log
square.o: square_struct.c
	@clang -c square_struct.c -o square.o
clean:
	@rm -f *.o
