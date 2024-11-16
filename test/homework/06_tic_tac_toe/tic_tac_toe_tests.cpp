#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../../inc/catch.hpp"
#include "TicTacToe.h" 
#include "TicTacToeManager.h" 
#include "TicTacToe_3.h" 
#include "TicTacToe_4.h"  


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// Test case to verify that the game ends after 9 slots are selected (tie scenario)
TEST_CASE("Test game over if 9 slots are selected", "[gameover]") {
    // 1) Create an instance of TicTacToe game
    TicTacToe game;
    
    // 2) Call the TicTacToe start game function with "X" as the first player
    game.start_game("X");
    
    // 3) Call the TicTacToe mark board function 9 times using numbers 1 to 9 (to simulate a full game)
    // Positions are chosen to simulate a game with no winner (a tie game).
    int positions[] = {1, 2, 3, 4, 5, 7, 6, 9, 8};  // Sequence of positions to mark
    
    // 4) Check if the game is over after every mark board function call
    for (int i = 0; i < 9; ++i) {
        // Mark the board at the given position
        game.mark_board(positions[i]);
        
        // After each move, check if the game is over
        if (i < 8) {  // Before the 9th move, the game should not be over
            REQUIRE(game.game_over() == false);
        } else {  // After the 9th move (last move), the game should be over
            REQUIRE(game.game_over() == true);
        }
    }
}

// Test case: Verify that the first player is set to X
TEST_CASE("Test first player set to X", "[first_player_X]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // Verify that the first player is set to "X"
    REQUIRE(game.get_player() == "X");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Verify that the first player is set to O
TEST_CASE("Test first player set to O", "[first_player_O]") {
    TicTacToe game;
    
    // Start the game with "O" as the first player
    game.start_game("O");
    
    // Verify that the first player is set to "O"
    REQUIRE(game.get_player() == "O");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Test game over if 9 slots are selected (Tie scenario)
TEST_CASE("Test game over if 9 slots are selected", "[gameover_tie]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // Simulate 9 moves: A tie game
    int positions[] = {1, 2, 3, 4, 5, 7, 6, 9, 8};
    
    for (int i = 0; i < 9; ++i) {
        game.mark_board(positions[i]);
        REQUIRE(game.game_over() == (i == 8));  // Game should only be over after 9th move
    }
}

// Test case: Test win by first column
TEST_CASE("Test win by first column", "[win_first_column]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the first column: 1, 4, 7
    int x_moves[] = {1, 4, 7};
    int o_moves[] = {2, 3, 5, 6, 8, 9};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 7)
    }
}

// Test case: Test win by second column
TEST_CASE("Test win by second column", "[win_second_column]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the second column: 2, 5, 8
    int x_moves[] = {2, 5, 8};
    int o_moves[] = {1, 3, 4, 6, 7, 9};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 8)
    }
}

// Test case: Test win by third column
TEST_CASE("Test win by third column", "[win_third_column]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the third column: 3, 6, 9
    int x_moves[] = {3, 6, 9};
    int o_moves[] = {1, 2, 4, 5, 7, 8};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 9)
    }
}

// Test case: Test win by first row
TEST_CASE("Test win by first row", "[win_first_row]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the first row: 1, 2, 3
    int x_moves[] = {1, 2, 3};
    int o_moves[] = {4, 5, 6, 7, 8, 9};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 3)
    }
}

// Test case: Test win by second row
TEST_CASE("Test win by second row", "[win_second_row]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the second row: 4, 5, 6
    int x_moves[] = {4, 5, 6};
    int o_moves[] = {1, 2, 3, 7, 8, 9};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 6)
    }
}

// Test case: Test win by third row
TEST_CASE("Test win by third row", "[win_third_row]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the third row: 7, 8, 9
    int x_moves[] = {7, 8, 9};
    int o_moves[] = {1, 2, 3, 4, 5, 6};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 9)
    }
}

// Test case: Test win diagonally from top left
TEST_CASE("Test win diagonally from top left", "[win_diagonal_top_left]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the diagonal from top left: 1, 5, 9
    int x_moves[] = {1, 5, 9};
    int o_moves[] = {2, 3, 4, 6, 7, 8};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 9)
    }
}

// Test case: Test win diagonally from bottom left
TEST_CASE("Test win diagonally from bottom left", "[win_diagonal_bottom_left]") {
    TicTacToe game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the diagonal from bottom left: 7, 5, 3
    int x_moves[] = {7, 5, 3};
    int o_moves[] = {1, 2, 4, 6, 8, 9};  // Remaining moves for O
    
    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 3)
    }
}

/ Test case: Test winner returned by get_winner()
TEST_CASE("Test get winner after game", "[get_winner]") {
    TicTacToe game;

    // Start the game with "X" as the first player
    game.start_game("X");
    
    // Simulate a game with "X" winning (positions: 1, 2, 3)
    game.mark_board(1);  // X
    REQUIRE(game.game_over() == false);
    game.mark_board(4);  // O
    REQUIRE(game.game_over() == false);
    game.mark_board(2);  // X
    REQUIRE(game.game_over() == false);
    game.mark_board(5);  // O
    REQUIRE(game.game_over() == false);
    game.mark_board(3);  // X wins

    // Verify the winner after the game is over
    REQUIRE(game.get_winner() == "X");
    REQUIRE(game.game_over() == true);  // Game is over after X wins

    // Reset and simulate a tie game (positions: 1, 2, 3, 4, 5, 7, 6, 9, 8)
    game.start_game("X");
    int positions[] = {1, 2, 3, 4, 5, 7, 6, 9, 8};
    for (int i = 0; i < 9; ++i) {
        game.mark_board(positions[i]);
    }
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");  // "C" represents a tie (cat game)
}

// Test case: Test TicTacToeManager's tally of wins for X, O, and ties
TEST_CASE("Test TicTacToeManager get winner total", "[manager_tally]") {
    TicTacToeManager manager;

    // Simulate playing 3 games
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1); game1.mark_board(4); game1.mark_board(2); game1.mark_board(5); game1.mark_board(3); // X wins
    manager.add_game(game1);

    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1); game2.mark_board(4); game2.mark_board(2); game2.mark_board(5); game2.mark_board(6); game2.mark_board(9); game2.mark_board(3); game2.mark_board(7); game2.mark_board(8); // Tie game
    manager.add_game(game2);

    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1); game3.mark_board(4); game3.mark_board(2); game3.mark_board(5); game3.mark_board(3); // X wins
    manager.add_game(game3);

    // Verify the tally for wins and ties
    REQUIRE(manager.get_x_wins() == 2);  // X won twice
    REQUIRE(manager.get_o_wins() == 0);  // O didn't win any game
    REQUIRE(manager.get_ties() == 1);   // 1 tie game
}

// Test case: Test TicTacToeManager with no games played
TEST_CASE("Test TicTacToeManager with no games played", "[manager_no_games]") {
    TicTacToeManager manager;

    // No games played, so all tallies should be 0
    REQUIRE(manager.get_x_wins() == 0);
    REQUIRE(manager.get_o_wins() == 0);
    REQUIRE(manager.get_ties() == 0);
}

// Test case: Test first player set to X for TicTacToe3
TEST_CASE("Test first player set to X3", "[first_player_X3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // Verify that the first player is set to "X"
    REQUIRE(game.get_player() == "X");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Test first player set to O for TicTacToe3
TEST_CASE("Test first player set to O3", "[first_player_O3]") {
    TicTacToe3 game;

    // Start the game with "O" as the first player
    game.start_game("O");

    // Verify that the first player is set to "O"
    REQUIRE(game.get_player() == "O");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Test game over if 9 slots are selected (Tie scenario) for TicTacToe3
TEST_CASE("Test game over if 9 slots are selected3", "[gameover_tie3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // Simulate 9 moves for a tie game (positions 1 to 9)
    int positions[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int i = 0; i < 9; ++i) {
        game.mark_board(positions[i]);
        REQUIRE(game.game_over() == (i == 8));  // Game should only be over after 9th move
    }

    // Verify that it's a tie (cat game)
    REQUIRE(game.get_winner() == "C");
}

// Test win by first row for TicTacToe3
TEST_CASE("Test win by first row 3", "[win_first_row3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the first row: positions 1, 2, 3
    int x_moves[] = {1, 2, 3};
    int o_moves[] = {4, 5, 6, 7, 8, 9};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 3)
    }
}

// Test win by second row for TicTacToe3
TEST_CASE("Test win by second row 3", "[win_second_row3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the second row: positions 4, 5, 6
    int x_moves[] = {4, 5, 6};
    int o_moves[] = {1, 2, 3, 7, 8, 9};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 6)
    }
}

// Test win by third row for TicTacToe3
TEST_CASE("Test win by third row 3", "[win_third_row3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the third row: positions 7, 8, 9
    int x_moves[] = {7, 8, 9};
    int o_moves[] = {1, 2, 3, 4, 5, 6};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 3; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 9)
    }
}

// Test win by first column for TicTacToe3
TEST_CASE("Test win by first column 3", "[win_first_column3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the first column: positions 1, 4, 7
    int x_moves[] = {1, 4, 7};
    int o_moves[] = {2, 3, 5, 6, 8, 9};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 7)
    }
}

// Test win by second column for TicTacToe3
TEST_CASE("Test win by second column 3", "[win_second_column3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the second column: positions 2, 5, 8
    int x_moves[] = {2, 5, 8};
    int o_moves[] = {1, 3, 4, 6, 7, 9};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 6; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 8)
    }
}

// Test win by diagonal from top left for TicTacToe3
TEST_CASE("Test win diagonal top left 3", "[win_diagonal_top_left3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the diagonal from top left: positions 1, 5, 9
    int x_moves[] = {1, 5, 9};
    int o_moves[] = {2, 3, 4, 6, 7, 8};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 4; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 9)
    }
}

// Test win by diagonal from top right for TicTacToe3
TEST_CASE("Test win diagonal top right 3", "[win_diagonal_top_right3]") {
    TicTacToe3 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // X places in the diagonal from top right: positions 3, 5, 7
    int x_moves[] = {3, 5, 7};
    int o_moves[] = {1, 2, 4, 6, 8, 9};  // Remaining moves for O

    for (int i = 0; i < 3; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 4; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 2));  // Game should be over after X's last move (position 7)
    }
}

// Test case: Test first player set to X for TicTacToe4
TEST_CASE("Test first player set to X4", "[first_player_X4]") {
    TicTacToe4 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // Verify that the first player is set to "X"
    REQUIRE(game.get_player() == "X");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Test first player set to O for TicTacToe4
TEST_CASE("Test first player set to O4", "[first_player_O4]") {
    TicTacToe4 game;

    // Start the game with "O" as the first player
    game.start_game("O");

    // Verify that the first player is set to "O"
    REQUIRE(game.get_player() == "O");

    // Check if the game is over after starting
    REQUIRE(game.game_over() == false);
}

// Test case: Test game over if 16 slots are selected (Tie scenario) for TicTacToe4
TEST_CASE("Test game over if 16 slots are selected4", "[gameover_tie4]") {
    TicTacToe4 game;

    // Start the game with "X" as the first player
    game.start_game("X");

    // Simulate 16 moves for a tie game (positions 1 to 16)
    int positions[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    
    for (int i = 0; i < 16; ++i) {
        game.mark_board(positions[i]);
        REQUIRE(game.game_over() == (i == 15));  // Game should only be over after 16th move
    }

    // Verify that it's a tie (cat game)
    REQUIRE(game.get_winner() == "C");
}


TEST_CASE("Test win by first column (4x4)", "[win_first_column_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the first column: 1, 5, 9, 13
    int x_moves[] = {1, 5, 9, 13};
    int o_moves[] = {2, 3, 4, 6, 7, 8, 10, 11, 12, 14, 15, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 13)
    }
}

TEST_CASE("Test win by second column (4x4)", "[win_second_column_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the second column: 2, 6, 10, 14
    int x_moves[] = {2, 6, 10, 14};
    int o_moves[] = {1, 3, 4, 5, 7, 8, 9, 11, 12, 13, 15, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 14)
    }
}

TEST_CASE("Test win by third column (4x4)", "[win_third_column_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the third column: 3, 7, 11, 15
    int x_moves[] = {3, 7, 11, 15};
    int o_moves[] = {1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 15)
    }
}

TEST_CASE("Test win by fourth column (4x4)", "[win_fourth_column_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the fourth column: 4, 8, 12, 16
    int x_moves[] = {4, 8, 12, 16};
    int o_moves[] = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 16)
    }
}

TEST_CASE("Test win by first row (4x4)", "[win_first_row_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the first row: 1, 2, 3, 4
    int x_moves[] = {1, 2, 3, 4};
    int o_moves[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 4)
    }
}

TEST_CASE("Test win by second row (4x4)", "[win_second_row_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the second row: 5, 6, 7, 8
    int x_moves[] = {5, 6, 7, 8};
    int o_moves[] = {1, 2, 3, 4, 9, 10, 11, 12, 13, 14, 15, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 8)
    }
}


TEST_CASE("Test win by third row (4x4)", "[win_third_row_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the third row: 9, 10, 11, 12
    int x_moves[] = {9, 10, 11, 12};
    int o_moves[] = {1, 2, 3, 4, 5, 6, 7, 8, 13, 14, 15, 16};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 12)
    }
}


TEST_CASE("Test win by fourth row (4x4)", "[win_fourth_row_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // X places in the fourth row: 13, 14, 15, 16
    int x_moves[] = {13, 14, 15, 16};
    int o_moves[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  // Remaining moves for O
    
    for (int i = 0; i < 4; ++i) {
        game.mark_board(x_moves[i]);
        REQUIRE(game.game_over() == false);
    }
    for (int i = 0; i < 12; ++i) {
        game.mark_board(o_moves[i]);
        REQUIRE(game.game_over() == (i == 3));  // Game should be over after X's last move (position 16)
    }
}

TEST_CASE("Test tie scenario (4x4)", "[tie_4x4]") {
    TicTacToe4 game;
    
    // Start the game with "X" as the first player
    game.start_game("X");
    
    // Simulate moves with no winner (filling all cells without a 4-in-a-row)
    int moves[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    
    for (int i = 0; i < 16; ++i) {
        game.mark_board(moves[i]);
        if (i == 15) {
            REQUIRE(game.game_over() == true);  // Game should end after last move
            REQUIRE(game.get_winner() == 'C');  // "C" for a tie
        }
    }
}



    