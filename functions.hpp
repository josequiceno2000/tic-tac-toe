#include <vector>
#include <array>

// FIXME: Declare functions
void greet();
void endgame();
void display_board(std::array<char, 9> board, int board_size);
void display_current_round(int turn_count);
std::array<char, 9> get_player1_input(std::array<char, 9> board, int board_size);
std::array<char, 9> get_player2_input(std::array<char, 9> board, int board_size);
int check_winner(std::array<char, 9> board, int board_size, char player_symbol);