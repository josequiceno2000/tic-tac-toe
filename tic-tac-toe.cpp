#include <iostream>
#include <array>
#include "functions.hpp"

int main() {

    // Initial variables
    bool player1_wins = false;
    bool player2_wins = false;
    std::array<char, 9> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int board_size = 9;
    int turn_count = 1;
    char player_symbol;

    // Greet players
    greet();

    // Game loop
    while (not player1_wins && not player2_wins && turn_count < 10) {

        // Print Round Number
        display_current_round(turn_count);

        // Display Board Function
        display_board(board, board_size);

        // Get Player 1 Input
        player_symbol = 'X';
        board = get_player1_input(board, board_size);

        // Display Board Function
        display_board(board, board_size);

        // Check for win condition
        int winner;
        winner = check_winner(board, board_size, player_symbol);

        switch(winner) {
            case 0:
                break;
            case 1:
                std::cout 
                << "\nPLAYER 1 WINS!";
                endgame();
                return 0;
        } 

        // Update turn count
        turn_count++;

        if (turn_count == 10) {
            break;
        }

        // Get Player 2 Input
        player_symbol = 'O';
        board = get_player2_input(board, board_size);

        // Display Board Function
        display_board(board, board_size);

        // Check for win condition
        winner = check_winner(board, board_size, player_symbol);

        switch(winner) {
            case 0:
                break;
            case 1:
                std::cout 
                << "\nPLAYER 2 WINS!";
                endgame();
                return 0;
        } 

        // Update turn count
        turn_count++;
    }

    // Farewell/ Tie
    std::cout << "\nTIE BETWEEN BOTH PLAYERS\n";
    endgame();
}