//cpp
#include "tic_tac_toe.h"
#include <iostream>

TicTacToe::TicTacToe() : pegs(9, " "), winner(" ") {}

void TicTacToe::start_game(const std::string& first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    if (position >= 1 && position <= 9 && pegs[position - 1] == " ") {
        pegs[position - 1] = player;
        if (check_row_win() || check_column_win() || check_diagonal_win()) {
            set_winner();
        } else if (check_board_full()) {
            winner = "C"; // Tie
        }
        set_next_player();
    }
}

bool TicTacToe::game_over() const {
    return winner != " ";
}

std::string TicTacToe::get_winner() const {
    return winner;
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 3; ++i) {
        std::cout << pegs[i * 3] << " | " << pegs[i * 3 + 1] << " | " << pegs[i * 3 + 2] << "\n";
        if (i < 2) std::cout << "---------\n";
    }
}

void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

void TicTacToe::clear_board() {
    std::fill(pegs.begin(), pegs.end(), " ");
    winner = " ";
}

bool TicTacToe::check_board_full() const {
    for (size_t i = 0; i < pegs.size(); ++i) {
        if (pegs[i] == " ") {
            return false; // Found an empty spot
        }
    }
    return true; // No empty spots found
}


bool TicTacToe::check_row_win() const {
    for (int i = 0; i < 3; ++i) {
        if (pegs[i * 3] == player && pegs[i * 3 + 1] == player && pegs[i * 3 + 2] == player) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_column_win() const {
    for (int i = 0; i < 3; ++i) {
        if (pegs[i] == player && pegs[i + 3] == player && pegs[i + 6] == player) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() const {
    return (pegs[0] == player && pegs[4] == player && pegs[8] == player) ||
           (pegs[2] == player && pegs[4] == player && pegs[6] == player);
}

void TicTacToe::set_winner() {
    winner = player;
}