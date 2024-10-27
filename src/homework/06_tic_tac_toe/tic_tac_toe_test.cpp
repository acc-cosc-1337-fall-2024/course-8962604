#include "tic_tac_toe.h"
#include <cassert>
#include <iostream>

void test_game_over_on_full_board() {
    TicTacToe game;
    game.start_game("X");

    int positions[] = {1, 2, 3, 4, 5, 7, 6, 9, 8};
    for (int i = 0; i < 9; i++) {
        game.mark_board(positions[i]);
        if (i < 8) {
            assert(!game.game_over());  // Ensure game is not over until all spots are filled
        }
    }
    assert(game.game_over()); // Game should be over after all spots are marked
    std::cout << "Test passed: Game over when all spots are filled.\n";
}

int main() {
    test_game_over_on_full_board();
    std::cout << "All tests passed.\n";
    return 0;
}