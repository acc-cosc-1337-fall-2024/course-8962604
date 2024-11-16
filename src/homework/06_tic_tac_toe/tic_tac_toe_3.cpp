

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
#include "tic_tac_toe_3.h"
#include <algorithm>
/**
 * Checks if there is a row win in the 3x3 board.
 * A row win occurs when all three elements in any row are the same and not empty.
 */
bool TicTacToe3::check_row_win() const {
    for (int row = 0; row < 3; ++row) {
        int start_index = row * 3;
        if (pegs[start_index] != " " && 
            pegs[start_index] == pegs[start_index + 1] && 
            pegs[start_index + 1] == pegs[start_index + 2]) {
            return true;
        }
    }
    return false;
}

/**
 * Checks if there is a column win in the 3x3 board.
 * A column win occurs when all three elements in any column are the same and not empty.
 */
bool TicTacToe3::check_column_win() const {
    for (int col = 0; col < 3; ++col) {
        if (pegs[col] != " " && 
            pegs[col] == pegs[col + 3] && 
            pegs[col + 3] == pegs[col + 6]) {
            return true;
        }
    }
    return false;
}

/**
 * Checks if there is a diagonal win in the 3x3 board.
 * A diagonal win occurs when all three elements in either diagonal are the same and not empty.
 */
bool TicTacToe3::check_diagonal_win() const {
    return (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8]) ||  // Top-left to bottom-right
           (pegs[2] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6]);   // Top-right to bottom-left
}

bool TicTacToe3::game_over() const {
    return check_row_win() || check_column_win() || check_diagonal_win() || std::none_of(pegs.begin(), pegs.end(), [](const std::string& peg) { return peg == " "; });
}