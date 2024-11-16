//h
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

#include "tic_tac_toe.h"
#include <vector>
#include <memory>
#include <iostream>

class TicTacToeManager {
private:
    std::vector<std::unique_ptr<TicTacToe>> games; // Stores all games
    int x_win{0}, o_win{0}, ties{0};               // Win and tie counters

    // Private function to update the winner count
    void update_winner_count(const std::string& winner);

public:
    TicTacToeManager() = default;                           // Default constructor
    void save_game(std::unique_ptr<TicTacToe> game);        // Saves a game to the list
    void get_winner_total(int& x, int& o, int& t) const;    // Retrieves win and tie totals
    void display_games() const;                             // Displays all saved games

    // Overloaded output operator to display games
    friend std::ostream& operator<<(std::ostream& os, const TicTacToeManager& manager);
};

#endif // TICTACTOEMANAGER_H