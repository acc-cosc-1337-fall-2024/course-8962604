#include "tic_tac_toe_4.h"
#include <algorithm>
/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_column_win() const {
    // Iterate over each column (0 to 3)
    for (int col = 0; col < 4; ++col) {
        if (pegs[col] != " " && 
            pegs[col] == pegs[col + 4] &&
            pegs[col] == pegs[col + 8] &&
            pegs[col] == pegs[col + 12]) {
            return true; // All elements in the column are the same
        }
    }
    return false; // No column win found
}

bool TicTacToe4::check_row_win() const {
    // Iterate over each row (starting indices: 0, 4, 8, 12)
    for (int row_start = 0; row_start < 16; row_start += 4) {
        if (pegs[row_start] != " " && 
            pegs[row_start] == pegs[row_start + 1] &&
            pegs[row_start] == pegs[row_start + 2] &&
            pegs[row_start] == pegs[row_start + 3]) {
            return true; // All elements in the row are the same
        }
    }
    return false; // No row win found
}

bool TicTacToe4::check_diagonal_win() const {
    // Check top-left to bottom-right diagonal
    if (pegs[0] != " " &&
        pegs[0] == pegs[5] &&
        pegs[0] == pegs[10] &&
        pegs[0] == pegs[15]) {
        return true;
    }

    // Check top-right to bottom-left diagonal
    if (pegs[3] != " " &&
        pegs[3] == pegs[6] &&
        pegs[3] == pegs[9] &&
        pegs[3] == pegs[12]) {
        return true;
    }

    return false; // No diagonal win found
}
bool TicTacToe4::game_over() const {
    return check_row_win() || check_column_win() || check_diagonal_win() || std::none_of(pegs.begin(), pegs.end(),[](const std::string& peg) { return peg == " "; });
}