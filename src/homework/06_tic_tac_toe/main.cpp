#include <iostream>
#include "tic_tac_toe.h"

int main() {
    TicTacToe game;
    char play_again;

    do {
        std::string first_player;
        do {
            std::cout << "Choose first player (X or O): ";
            std::cin >> first_player;
        } while (first_player != "X" && first_player != "O");

        game.start_game(first_player);

        while (!game.game_over()) {
            game.display_board();
            int position;
            std::cout << "Player " << game.get_player() << ", enter your position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        std::string winner = game.get_winner();
        if (winner == "C") {
            std::cout << "It's a tie!\n";
        } else {
            std::cout << "Player " << winner << " wins!\n";
        }

        std::cout << "Play again? (y/n): ";
        std::cin >> play_again;
    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}