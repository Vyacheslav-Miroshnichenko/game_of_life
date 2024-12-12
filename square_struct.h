#ifndef SQUARE_STRUCT
#define SQUARE_STRUCT

#include <stdint.h>

#define STD_WIDTH 5
#define STD_HEIGHT 5

typedef struct{
	//This bool keeps track of whether or not the square was alive
	//	- 0 if never been
	//	- 1 if have been traversed to 
	uint8_t lived;

	//This bool keeps track of whether or not the square is alive
	//	- 0 if not alive
	//	- 1 if alive
	uint8_t alive;

	//This int keeps track of how many neighbors the square has
	//	- Any number between 0 and 8
	uint8_t neighbors;

	//This character keeps track of what should be on the board
	char rep;

} Square;

typedef struct{
	//Create a 2D array of squares
	Square ** board;
	int height, width;
}Board;

Board * BOARD_INIT(int, int);
void FREE_BOARD(Board *);
void PRINT_BOARD(Board *);
int UPDATE_POS(Board *,int, int);

#endif
