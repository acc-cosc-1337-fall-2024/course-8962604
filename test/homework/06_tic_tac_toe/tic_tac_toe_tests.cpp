#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToeManager Constructor")
{
    TicTacToeManager manager;
    int x, o, t;
    
    // Check initial win counts (should all be 0)
    manager.get_winner_total(x, o, t);
    REQUIRE(x == 0);  // X wins should be 0
    REQUIRE(o == 0);  // O wins should be 0
    REQUIRE(t == 0);  // Ties should be 0
}

TEST_CASE("Test TicTacToeManager save_game method")
{
    TicTacToeManager manager;

    // Test Case 1: X wins
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);  // X marks position 1
    game1.mark_board(4);  // O marks position 4
    game1.mark_board(2);  // X marks position 2
    game1.mark_board(5);  // O marks position 5
    game1.mark_board(3);  // X wins at position 3
    manager.save_game(game1);

    int x, o, t;
    manager.get_winner_total(x, o, t);
    REQUIRE(x == 1);  // X should have 1 win
    REQUIRE(o == 0);  // O should have 0 wins
    REQUIRE(t == 0);  // Ties should still be 0

    // Test Case 2: O wins
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);  // X marks position 1
    game2.mark_board(4);  // O marks position 4
    game2.mark_board(2);  // X marks position 2
    game2.mark_board(5);  // O marks position 5
    game2.mark_board(3);  // X marks position 3
    game2.mark_board(6);  // O wins at position 6
    manager.save_game(game2);

    manager.get_winner_total(x, o, t);
    REQUIRE(x == 1);  // X should still have 1 win
    REQUIRE(o == 1);  // O should now have 1 win
    REQUIRE(t == 0);  // Ties should still be 0

    // Test Case 3: Tie Game
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);  // X marks position 1
    game3.mark_board(2);  // O marks position 2
    game3.mark_board(3);  // X marks position 3
    game3.mark_board(4);  // O marks position 4
    game3.mark_board(5);  // X marks position 5
    game3.mark_board(6);  // O marks position 6
    game3.mark_board(7);  // X marks position 7
    game3.mark_board(8);  // O marks position 8
    game3.mark_board(9);  // X marks position 9, resulting in a tie
    manager.save_game(game3);

    manager.get_winner_total(x, o, t);
    REQUIRE(x == 1);  // X still has 1 win
    REQUIRE(o == 1);  // O still has 1 win
    REQUIRE(t == 1);  // Now there is 1 tie
}

TEST_CASE("Test TicTacToeManager get_winner_total method")
{
    TicTacToeManager manager;

    // Save a game where X wins
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);  // X marks position 1
    game1.mark_board(4);  // O marks position 4
    game1.mark_board(2);  // X marks position 2
    game1.mark_board(5);  // O marks position 5
    game1.mark_board(3);  // X wins at position 3
    manager.save_game(game1);

    // Save another game where O wins
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);  // X marks position 1
    game2.mark_board(4);  // O marks position 4
    game2.mark_board(2);  // X marks position 2
    game2.mark_board(5);  // O marks position 5
    game2.mark_board(3);  // X marks position 3
    game2.mark_board(6);  // O wins at position 6
    manager.save_game(game2);

    // Save a tie game
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);  // X marks position 1
    game3.mark_board(2);  // O marks position 2
    game3.mark_board(3);  // X marks position 3
    game3.mark_board(4);  // O marks position 4
    game3.mark_board(5);  // X marks position 5
    game3.mark_board(6);  // O marks position 6
    game3.mark_board(7);  // X marks position 7
    game3.mark_board(8);  // O marks position 8
    game3.mark_board(9);  // X marks position 9, resulting in a tie
    manager.save_game(game3);

    int x, o, t;
    manager.get_winner_total(x, o, t);
    REQUIRE(x == 1);  // X should have 1 win
    REQUIRE(o == 1);  // O should have 1 win
    REQUIRE(t == 1);  // There should be 1 tie
}