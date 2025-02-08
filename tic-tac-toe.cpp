#include <iostream>
#include "functions.hpp"

int main() {
    // Initial variables
    int player1_input;
    int player2_input;
    bool player1_wins = false;
    bool player2_wins = false;
    char board[10];
    int turn_count = 0;

    // Greet players
    greet();

    // Farewell
    endgame();
}