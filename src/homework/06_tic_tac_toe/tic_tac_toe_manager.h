//h
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include "tic_tac_toe.h"  // Ensure this is included if needed

class TicTacToeManager {
private:
    int x_wins, o_wins, ties;

public:
    TicTacToeManager();  // Constructor declaration
    void save_game(const TicTacToe& game);  // Method declaration
    void get_winner_total(int& x, int& o, int& t) const;  // Method declaration
};

#endif