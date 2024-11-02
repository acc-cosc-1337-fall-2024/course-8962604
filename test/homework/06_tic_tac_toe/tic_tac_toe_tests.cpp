#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Verify game over when all positions are filled") {
    TicTacToe game;
    game.start_game("X");

    // Fill the board with alternating moves
    game.mark_board(1); // X
    REQUIRE(game.game_over() == false);
    game.mark_board(2); // O
    REQUIRE(game.game_over() == false);
    game.mark_board(3); // X
    REQUIRE(game.game_over() == false);
    game.mark_board(4); // O
    REQUIRE(game.game_over() == false);
    game.mark_board(5); // X
    REQUIRE(game.game_over() == false);
    game.mark_board(6); // O
    REQUIRE(game.game_over() == false);
    game.mark_board(7); // X
    REQUIRE(game.game_over() == false);
    game.mark_board(8); // O
    REQUIRE(game.game_over() == false);
    game.mark_board(9); // X
    REQUIRE(game.game_over() == true);  // Now the board is full
}

TEST_CASE("Verify invalid move handling") {
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1); // X
    REQUIRE(game.get_player() == "O"); // Next player should be O
    game.mark_board(1); // Invalid move on the same spot
    REQUIRE(game.get_player() == "O"); // Still O's turn
}
TEST_CASE("Test win by first column") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    game.mark_board(2); // O's move
    game.mark_board(4);
    game.mark_board(5); // O's move
    game.mark_board(7);
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}
