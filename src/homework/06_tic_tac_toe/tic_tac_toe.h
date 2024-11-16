//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <vector>
#include <string>
#include <iostream>

class TicTacToe {
public:
    explicit TicTacToe(int size); // Constructor with board size
    virtual ~TicTacToe() = default; // Virtual destructor for polymorphism

    void start_game(const std::string& first_player); // Starts the game
    void mark_board(int position); // Marks the board at the given position
    virtual bool game_over() const = 0; // Pure virtual: checks if the game is over
    std::string get_winner() const; // Gets the winner of the game
    std::string get_player() const; // Gets the current player
    void display_board() const; // Displays the board

    // Overload operators for input and output
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    std::vector<std::string> pegs; // TicTacToe board
    virtual bool check_column_win() const = 0; // Pure virtual: checks column win
    virtual bool check_row_win() const = 0; // Pure virtual: checks row win
    virtual bool check_diagonal_win() const = 0; // Pure virtual: checks diagonal win

private:
    void set_next_player(); // Sets the next player
    void clear_board(); // Clears the board
    bool check_board_full() const; // Checks if the board is full
    void set_winner(); // Sets the winner of the game

    std::string player; // Current player: X or O
    std::string winner; // Winner of the game: X, O, or C (for tie)
};

#endif // TIC_TAC_TOE_H