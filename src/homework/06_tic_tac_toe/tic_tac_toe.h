//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <vector>
#include <string>

class TicTacToe {
public:
    TicTacToe();
    void start_game(const std::string& first_player);
    void mark_board(int position);
    bool game_over() const;
    std::string get_winner() const;
    std::string get_player() const;
    void display_board() const;
    friend std::ostream& operator<<(std::ostream& os, const TicTacToe& game);

private:
    void set_next_player();
    void clear_board();
    bool check_board_full() const;
    bool check_row_win() const;
    bool check_column_win() const;
    bool check_diagonal_win() const;
    void set_winner();
    char board[3][3];

    std::string player; // Current player: X or O
    std::vector<std::string> pegs; // TicTacToe board
    std::string winner; // Winner of the game: X, O or C (for a tie)

    
};

#endif // TIC_TAC_TOE_H