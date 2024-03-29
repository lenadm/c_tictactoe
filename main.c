#include <stdio.h>
#include <stdlib.h>

#define LENGTH 9

void print_board(char *board);

int main(void) {
	char *gameboard = malloc(LENGTH);

	for(char i = '1'; i <= '9'; i++) {
        gameboard[i - 49] = i;
	}

	print_board(gameboard);
}


void print_board(char *board) {
	printf(" %c | %c | %c \n", board[0], board[1], board[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[3], board[4], board[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

