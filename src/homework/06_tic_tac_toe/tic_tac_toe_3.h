//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"

/**
 * Derived class for a 3x3 TicTacToe game.
 * Implements specific logic for checking row, column, and diagonal wins.
 */
class TicTacToe3 : public TicTacToe {
public:
    // Constructor initializes a 3x3 TicTacToe board by invoking the base class constructor
    TicTacToe3() : TicTacToe(3) {}

    // Implements the pure virtual function game_over() to check for game over conditions
    bool game_over() const override;

private:
    // Checks for a column win in a 3x3 board
    bool check_column_win() const override;

    // Checks for a row win in a 3x3 board
    bool check_row_win() const override;

    // Checks for a diagonal win in a 3x3 board
    bool check_diagonal_win() const override;
};

#endif // TIC_TAC_TOE_3_H