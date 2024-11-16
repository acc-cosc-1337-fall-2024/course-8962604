//h
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include "tic_tac_toe.h"

/**
 * Derived class for a 4x4 TicTacToe game.
 * Implements specific logic for checking row, column, and diagonal wins.
 */
class TicTacToe4 : public TicTacToe {
public:
    // Constructor initializes a 4x4 TicTacToe board by invoking the base class constructor
    TicTacToe4() : TicTacToe(4) {}

    // Implements the pure virtual function game_over() to check for game over conditions
    bool game_over() const ;

private:
    // Checks for a column win in a 4x4 board
    bool check_column_win() const ;

    // Checks for a row win in a 4x4 board
    bool check_row_win() const ;

    // Checks for a diagonal win in a 4x4 board
    bool check_diagonal_win() const ;
};

#endif // TIC_TAC_TOE_4_H