//cpp
#include "tic_tac_toe.h"
bool TicTacToe::game_over() {
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player;
        clear_board();
    }
}

void TicTacToe::mark_board(int position) {
    if (position >= 1 && position <= 9 && pegs[position - 1] == " ") {
        pegs[position - 1] = player;
        set_next_player();
    }
}

std::string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 9; i++) {
        std::cout << pegs[i];
        if ((i + 1) % 3 == 0) {
            std::cout << "\n";
            if (i != 8) std::cout << "-+-+-\n";
        } else {
            std::cout << "|";
        }
    }
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else {
        player = "X";
    }
}

bool TicTacToe::check_board_full() {
    for (const auto& peg : pegs) {
        if (peg == " ") return false;
    }
    return true;
}

void TicTacToe::clear_board() {
    for (auto& peg : pegs) {
        peg = " ";
    }
}