#include <stdio.h>
#include "square_struct.h"
//#include "game_logic.h"

//Board dimensions
#define WIDTH 15
#define HEIGHT 20

//Game length
#define FRAMES 30


/*
 * Generate an ASCII board that follows the example
 00000
 00000
 00000
 00000
 00000

 0 - means nothing there
 @ - means something is there
*/

int main(){

	//Create a 2D array of squares
	Board *b = BOARD_INIT(WIDTH, HEIGHT);
	PRINT_BOARD(b);
	b->board[2][4].rep = '@';
	printf("\n");
	PRINT_BOARD(b);

	for (int i = 0 ; i < WIDTH; i++){
		for (int j = 0; j < HEIGHT; j++){
			//printf("Number of neighbors at [%d][%d]: %d\n", i, j, get_neighbors(b, j, i));
		}
	}
	FREE_BOARD(b);
	return 0;
}
