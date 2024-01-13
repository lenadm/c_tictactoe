#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 9

void print_board(char *board);
int get_user_input(char *gameboard);
int get_ai_move(char *board);
char *setup_gameboard(char *gameboard);

int main(void) {
	char *gameboard = malloc(LENGTH);
	int counter = 0;

	setup_gameboard(gameboard);
	print_board(gameboard);
	while(true) {
		if (counter % 2 == 0) {
			int move = get_user_input(gameboard);
			gameboard[move - 1] = 'x';
			print_board(gameboard);
		}
		if (counter % 2 == 1) {
			int move = get_ai_move(gameboard);
			gameboard[move - 1] = 'o';
		}
		counter += 1;
	}
}

	
int get_ai_move(char *gameboard) {
	return 1;
}

int get_user_input(char *gameboard) {
	int input;
	while(true) {
		printf("\rwhich squaure would you like to place? ");
		scanf("%i", &input);
		if(gameboard[input] != ('x' | 'o')) {
			return input;
		}
	}
}
char *setup_gameboard(char *gameboard) {
	for(char i = '1'; i <= '9'; i++) {
		gameboard[i - 49] = i;
	}
	return gameboard;
}


void print_board(char *board) {
	printf("\r %c | %c | %c \n", board[0], board[1], board[2]);
	printf("\r---+---+---\n");
	printf("\r %c | %c | %c \n", board[3], board[4], board[5]);
	printf("\r---+---+---\n");
	printf("\r %c | %c | %c \n", board[6], board[7], board[8]);
}

