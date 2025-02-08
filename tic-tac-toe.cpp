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

    // Game loop
    while (not player1_wins && not player2_wins && turn_count < 10) {
        std::cout 
        << "ROUND "
        << turn_count
        << "\n";

        turn_count++;
    }

    // Farewell
    endgame();
}