#include <iostream>
#include "functions.hpp"

int main() {

    // Initial variables
    int player1_input;
    int player2_input;
    bool player1_wins = false;
    bool player2_wins = false;
    char board[9];
    int board_size = 9;
    int turn_count = 1;

    // Greet players
    greet();

    // Game loop
    while (not player1_wins && not player2_wins && turn_count < 10) {

        // Print Round Number
        display_current_round(turn_count);

        // Display Board Function
        display_board(board, board_size);

        // Update turn count
        turn_count++;
    }

    // Farewell
    endgame();
}