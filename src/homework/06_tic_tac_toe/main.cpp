#include "tic_tac_toe.h"
#include <iostream>
#include <string>

int main() {
    TicTacToe game;
    std::string first_player;
    char play_again;

    do {
        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;
        game.start_game(first_player);

        while (!game.game_over()) {
            int position;
            game.display_board();
            std::cout << "Player " << game.get_player() << ", enter position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
        }

        game.display_board();
        std::cout << "\n\nGame over! \n\nDo you want to play again? (y/n): ";
        std::cin >> play_again;

    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}