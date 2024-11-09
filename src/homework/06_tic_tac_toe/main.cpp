#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() {
    TicTacToeManager manager;
    char play_again;

    do {
        TicTacToe game;
        std::string player;
        
        // Prompt to start the game and set the first player
        std::cout << "Enter first player (X/O): ";
        std::cin >> player;
        game.start_game(player);

        int position;
        while (!game.game_over()) {
            // Display the current board
            std::cout << game;

            // Prompt current player to enter a position
            std::cout << "Player " << game.get_player() << ", enter your position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }

        // Display final board
        std::cout << game;

        // Announce the result
        if (game.get_winner() == "C") {
            std::cout << "It's a tie!\n";
        } else {
            std::cout << "Player " << game.get_winner() << " wins!\n";
        }

        // Save the completed game to the manager
        manager.save_game(game);

        // Display running totals for wins and ties
        int x, o, t;
        manager.get_winner_total(x, o, t);
        std::cout << "\nCurrent Tally:\n";
        std::cout << "O wins: " << o << "\nX wins: " << x << "\nTIES: " << t << std::endl;

        // Prompt to play again
        std::cout << "\nPlay again? (y/n): ";
        std::cin >> play_again;
    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}
