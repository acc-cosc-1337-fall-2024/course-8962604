//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <algorithm>
#include <cmath>

// Constructor: Initialize the game board size and reset game state
TicTacToe::TicTacToe(int size) : pegs(size * size, " "), winner(" "), player(" ") {}

// Start the game with the specified first player
void TicTacToe::start_game(const std::string& first_player) {
    if (first_player == "X" || first_player == "O") {
        player = first_player;
        clear_board();
    } else {
        throw std::invalid_argument("Invalid player. Choose 'X' or 'O' to start the game.");
    }
}

// Mark a position on the board
void TicTacToe::mark_board(int position) {
    int board_size = static_cast<int>(pegs.size());

    if (position >= 1 && position <= board_size && pegs[position - 1] == " ") {
        pegs[position - 1] = player;

        if (check_row_win() || check_column_win() || check_diagonal_win()) {
            set_winner();
        } else if (check_board_full()) {
            winner = "C"; // Tie game
        } else {
            set_next_player();
        }
    } else {
        throw std::out_of_range("Invalid position. Choose a position between 1 and " + std::to_string(board_size) + " that is not already taken.");
    }
}

// Check if the game is over
bool TicTacToe::game_over() const {
    return winner != " ";
}

// Get the winner of the game
std::string TicTacToe::get_winner() const {
    return winner;
}

// Get the current player
std::string TicTacToe::get_player() const {
    return player;
}

// Display the board to the console
void TicTacToe::display_board() const {
    int size = static_cast<int>(std::sqrt(pegs.size()));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << pegs[i * size + j];
            if (j < size - 1) std::cout << " | ";
        }
        std::cout << "\n";
        if (i < size - 1) std::cout << std::string(size * 4 - 1, '-') << "\n";
    }
}

// Switch to the next player
void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

// Clear the game board and reset the game state
void TicTacToe::clear_board() {
    std::fill(pegs.begin(), pegs.end(), " ");
    winner = " ";
}

// Check if the board is full
bool TicTacToe::check_board_full() const {
    return std::none_of(pegs.begin(), pegs.end(), [](const std::string& peg) { return peg == " "; });
}

// Set the current player as the winner
void TicTacToe::set_winner() {
    winner = player;
}

// Overload the output operator for displaying the board
std::ostream& operator<<(std::ostream& os, const TicTacToe& game) {
    int size = static_cast<int>(std::sqrt(game.pegs.size()));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            os << game.pegs[i * size + j];
            if (j < size - 1) os << " | ";
        }
        os << "\n";
        if (i < size - 1) os << std::string(size * 4 - 1, '-') << "\n";
    }
    return os;
}

// Overload the input operator for marking the board
std::istream& operator>>(std::istream& is, TicTacToe& game) {
    int position;
    std::cout << "Enter a position: ";
    is >> position;

    try {
        game.mark_board(position);  // Call the `mark_board` function
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    return is;
}