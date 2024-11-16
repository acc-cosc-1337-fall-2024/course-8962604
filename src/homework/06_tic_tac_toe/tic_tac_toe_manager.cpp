//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>

// Save the game and update winner count
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> game) {
    if (game->game_over()) { // Ensure the game is over before saving
        const std::string& winner = game->get_winner();
        update_winner_count(winner); // Update win/tie counters
        games.push_back(std::move(game)); // Store the game
    } else {
        std::cerr << "Error: Attempted to save an incomplete game.\n";
    }
}

// Update win/tie counters based on the winner
void TicTacToeManager::update_winner_count(const std::string& winner) {
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else if (winner == "C") { // "C" for a tie
        ties++;
    }
}

// Retrieve the total counts of X wins, O wins, and ties
void TicTacToeManager::get_winner_total(int& x, int& o, int& t) const {
    x = x_win;
    o = o_win;
    t = ties;
}

// Display all saved games
void TicTacToeManager::display_games() const {
    if (games.empty()) {
        std::cout << "No games saved yet.\n";
        return;
    }
    
    int game_number = 1;
    for (const auto& game : games) {
        std::cout << "Game " << game_number++ << ":\n";
        std::cout << *game; // Use the overloaded << operator
        std::cout << "-----------------\n";
    }
}