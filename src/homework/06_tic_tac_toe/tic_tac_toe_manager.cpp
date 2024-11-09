//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"  // Include TicTacToe class definition if needed

TicTacToeManager::TicTacToeManager() : x_wins(0), o_wins(0), ties(0) {}

void TicTacToeManager::save_game(const TicTacToe& game) {
    if (game.get_winner() == "X") {
        x_wins++;
    } else if (game.get_winner() == "O") {
        o_wins++;
    } else {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t) const {
    x = x_wins;
    o = o_wins;
    t = ties;
}