#include <iostream>
#include <vector>
#include <array>
#include <cctype>

// FIXME: Define functions:
void greet() {
    std::cout 
    << "--------------------------------------------------------------------\n"
    << "=========================== TIC-TAC-TOE ===========================\n"
    << "--------------------------------------------------------------------\n\n"
    << "************************* [INTRODUCTION] *************************\n\n"
    << "Welcome to Tic-Tac-Toe. This game is for two players! Make sure\n" 
    << "to play with a friend.\n\n"
    << "******************************************************************\n\n"
    
    
    << "************************* [HOW TO PLAY] *************************\n\n"
    << "To win, you must get 3 of your shape ('X' or'O') in a row.\n"
    << "This can happen in any column up or down, any row left or right,\n"
    << "or diagonally!\n\n"
    << "*****************************************************************\n\n"
    << "===================================================================\n\n";

    std::cout
    << "\nTo start the game, type 'p' then hit the 'Enter' key.\n"
    << "Press any other key to quit.\n";

    char play_game;
    std::cin >>play_game;

    if (play_game == 'p') {
        std::cout << "\nGreat! Let's begin:\n\n";
    }
    else {
        std::cout << "\nOkay. Maybe another time then.\n";
    }
}

void display_current_round(int turn_count) {
    std::cout 
        << "----------------------------\n"
        << "          ROUND "
        << turn_count
        << "\n----------------------------\n"
        << "\n\n";
}

void display_board(std::array<char, 9> board, int board_size) {
    std::cout << "\n";
    // Loop to create the board
        for (int i = 0; i < board_size; i++) {
            if (i < 3) {
                std::cout
                << "[" << board[i] << "] ";
            }
            else if (i == 3) {
                std:: cout
                << "\n[" << board[i] << "] ";
            }
            else if (i < 6) {
                std::cout
                << "[" << board[i] << "] ";
            }
            else if (i == 6) {
                std:: cout
                << "\n[" << board[i] << "] ";
            }
            else if (i < 9) {
                std::cout
                << "[" << board[i] << "] ";
            }
            else if (i == 9) {
                std:: cout
                << "\n[" << board[i] << "] ";
            }
            
        }
        std::cout 
        << "\n\n";
}

std::array<char, 9> get_player1_input(std::array<char, 9> board, int board_size) {
    std::cout 
    << "\n********************** [PLAYER 1 TURN] **********************\n"
    << "Please make your selection between 1 - 9.\n"
    << "The board is numbered 1 - 9, 1 being the top-left position,\n"
    << "And 9 being the bottom-right position.\n"\
    << "*************************************************************\n";

    int player1_input;
    std::cin >> player1_input;

    while (player1_input < 1 || player1_input > 9 || not std::isdigit(board[player1_input - 1])) {
        std::cout 
        << "\nInvalid answer:\n"
        << "Please input a value between 1 and 9, then press 'Enter'.\n";

        std::cin >> player1_input;
    }

    board[player1_input - 1] = 'X';

    return board;

}

std::array<char, 9> get_player2_input(std::array<char, 9> board, int board_size) {
    std::cout 
    << "\n********************** [PLAYER 2 TURN] **********************\n"
    << "Please make your selection between 1 - 9.\n"
    << "The board is numbered 1 - 9, 1 being the top-left position,\n"
    << "And 9 being the bottom-right position.\n"\
    << "*************************************************************\n";

    int player2_input;
    std::cin >> player2_input;

    while (player2_input < 1 || player2_input > 9 || not std::isdigit(board[player2_input - 1])) {
        std::cout 
        << "\nInvalid answer:\n"
        << "Please input a value between 1 and 9, then press 'Enter'.\n";

        std::cin >> player2_input;
    }

    board[player2_input - 1] = 'O';

    return board;

}

int check_winner(std::array<char, 9> board, int board_size, char player_symbol) {
    if (
        (board[0] == player_symbol && board[1] == player_symbol && board[2] == player_symbol)
        ||
        (board[3] == player_symbol && board[4] == player_symbol && board[5] == player_symbol)
        ||
        (board[6] == player_symbol && board[7] == player_symbol && board[8] == player_symbol)
        ||
        (board[0] == player_symbol && board[3] == player_symbol && board[6] == player_symbol)
        ||
        (board[1] == player_symbol && board[4] == player_symbol && board[7] == player_symbol)
        ||
        (board[2] == player_symbol && board[5] == player_symbol && board[8] == player_symbol)
        ||
        (board[0] == player_symbol && board[4] == player_symbol && board[8] == player_symbol)
        ||
        (board[2] == player_symbol && board[4] == player_symbol && board[6] == player_symbol)
    ) {
        return 1;
    }

    return 0;
}

void endgame() {
    std::cout
    << "\n\nTHANK YOU FOR PLAYING!"
    << "\n\n--------------------------------------------------------------------\n"
    << "=========================== TIC-TAC-TOE ===========================\n"
    << "--------------------------------------------------------------------\n\n";
}