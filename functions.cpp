#include <iostream>
#include <vector>

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
        std::cout << "\nGreat! Let's begin:\n";
    }
    else {
        std::cout << "\nOkay. Maybe another time then.\n";
    }
}