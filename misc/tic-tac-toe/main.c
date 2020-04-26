#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void print_board(char board_state[]);
void get_player_markers(char* player_marker, char* computer_marker);

int main() {
    char player_marker, computer_marker;
    char board_state[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};


    printf("Starting new game of tic tac toe...\n");
    print_board(board_state);

    get_player_markers(&player_marker, &computer_marker);
    printf("Player marker: %c\nComputer marker: %c", player_marker, computer_marker);
}

// Print current board to stdout
void print_board(char board_state[]) {
    printf("      |     |     \n");
    printf("   %d  |  %d  |  %d  \n", board_state[0], board_state[1], board_state[2]);
    printf(" _____|_____|_____\n");
    printf("      |     |     \n");
    printf("   %d  |  %d  |  %d  \n", board_state[3], board_state[4], board_state[5]);
    printf(" _____|_____|_____\n");
    printf("      |     |     \n");
    printf("   %d  |  %d  |  %d  \n", board_state[6], board_state[7], board_state[8]);
    printf("      |     |     \n");
}

// Random assign players a marker
void get_player_markers(char* player_marker, char* computer_marker) {
    int player_marker_rand;

    assert(player_marker);
    assert(computer_marker);

    srand(time(NULL));
    player_marker_rand = rand() % 100;
    if (player_marker_rand < 50) {
        *player_marker = 'X';
        *computer_marker = 'O';
    } else {
        *player_marker = 'O';
        *computer_marker = 'X';
    }
}
