#include <stdio.h>
#include <stdlib.h>

#define LENGTH 9

void print_board(char *board);
char *setup_gameboard(char *gameboard);

int main(void) {
	char *gameboard = malloc(LENGTH);

	setup_gameboard(gameboard);
	print_board(gameboard);
}

char *setup_gameboard(char *gameboard) {
	for(char i = '1'; i <= '9'; i++) {
		gameboard[i - 49] = i;
	}
	return gameboard;
}


void print_board(char *board) {
	printf(" %c | %c | %c \n", board[0], board[1], board[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[3], board[4], board[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

