#include <stdio.h>
#include "game_logic.h"

int get_neighbors(Board * b, int x, int y){
	//Create variables for surrounding area
	//	ul - upper left
	//	u - up
	//	ur - upper right
	//	l - left
	//	r - right
	//	dl - down left
	//	d - down
	//	dr - down right
	int ul, u, ur, l, r, dl, d, dr;
	
	//Ternary to assign values for positions
	ul = (b->board[y - 1][x - 1].alive)? 1 : 0;
	u = (b->board[y - 1][x].alive)? 1 : 0;
	ur = (b->board[y - 1][x + 1].alive)? 1 : 0;
	l = (b->board[y][x - 1].alive)? 1 : 0;
	r = (b->board[y][x + 1].alive)? 1 : 0;
	dl = (b->board[y + 1][x - 1].alive)? 1 : 0;
	d = (b->board[y + 1][x].alive)? 1 : 0;
	dr = (b->board[y + 1][x + 1].alive)? 1 : 0;

	return ul + u + ur + l + r + dl + d + dr;
}
