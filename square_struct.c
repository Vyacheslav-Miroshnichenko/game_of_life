#include "square_struct.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Board initialization with parameters
Board * BOARD_INIT(int width, int height){
	Board * b = malloc(sizeof(Board));
	b->height = height;
	b->width = width;
	b->board = malloc(height * sizeof(Square *));

	//This creates rows first
	for (int i = 0 ; i < height; i ++){
		//Allocate room for entries in the rows
		b->board[i] = malloc(width * sizeof(Square *));
		//Create the columns
		for (int j = 0 ; j  < width; j++){
			//Assign the values for the board
			b->board[i][j].lived = 0;
			b->board[i][j].alive = 0;
			b->board[i][j].neighbors = 0;
			b->board[i][j].rep = '0';
		}
	}

	return b;
}

//Function to go through and free every row, ultimatley, freeing itself
void FREE_BOARD(Board *b){
	for (int i = 0 ; i < b->height;	i ++){
		free(b->board[i]);
	}
	free(b->board);
	free(b);
}

//Basic function to print the board
void PRINT_BOARD(Board *b){
	for (int i = 0 ; i < b->height; i ++){
		for (int j = 0 ; j < b->width; j++){
			printf("%c", b->board[i][j].rep);
		}
		printf("\n");
	}
	printf("--------------------------------------\n");
}

//Function that updates the character at some position
//	- Returns a non-zero value if position is out of bounds
//	- Returns zero if position is valid
int UPDATE_POS(Board *b, int r, int c){
	int height_conditions = (r > b->height || r < 0);
	int width_conditions = (c > b->width || c < 0);

	if (height_conditions || width_conditions){
		return 1;
	}else{
		return 0;
	}
}
