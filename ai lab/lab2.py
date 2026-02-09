class TicTacToeAI:
    def __init__(self):
        # Initialize empty 3x3 board
        self.board = [[' ' for _ in range(3)] for _ in range(3)]

    def display_board(self):
        print()
        for i in range(3):
            print(f" {self.board[i][0]} | {self.board[i][1]} | {self.board[i][2]} ")
            if i != 2:
                print("---|---|---")
        print()

    # Check if moves are left
    def is_moves_left(self):
        for i in range(3):
            for j in range(3):
                if self.board[i][j] == ' ':
                    return True
        return False

    # Evaluation function: +10 for AI win, -10 for Human win, 0 otherwise
    def evaluate(self):
        # Check rows
        for row in range(3):
            if (self.board[row][0] == self.board[row][1] ==
                    self.board[row][2] != ' '):
                if self.board[row][0] == 'O':
                    return 10
                elif self.board[row][0] == 'X':
                    return -10

        # Check columns
        for col in range(3):
            if (self.board[0][col] == self.board[1][col] ==
                    self.board[2][col] != ' '):
                if self.board[0][col] == 'O':
                    return 10
                elif self.board[0][col] == 'X':
                    return -10

        # Check diagonals
        if (self.board[0][0] == self.board[1][1] ==
                self.board[2][2] != ' '):
            if self.board[0][0] == 'O':
                return 10
            elif self.board[0][0] == 'X':
                return -10

        if (self.board[0][2] == self.board[1][1] ==
                self.board[2][0] != ' '):
            if self.board[0][2] == 'O':
                return 10
            elif self.board[0][2] == 'X':
                return -10

        return 0  # No winner

    # The Minimax recursive function
    def minimax(self, depth, is_max):
        score = self.evaluate()

        # If Maximizer or Minimizer has won, return score
        if score == 10 or score == -10:
            return score

        # If no moves left, it's a draw
        if not self.is_moves_left():
            return 0

        # Maximizer's move (AI 'O')
        if is_max:
            best = -1000
            for i in range(3):
                for j in range(3):
                    if self.board[i][j] == ' ':
                        self.board[i][j] = 'O'
                        best = max(best, self.minimax(depth + 1, False))
                        self.board[i][j] = ' '
            return best
        # Minimizer's move (Human 'X')
        else:
            best = 1000
            for i in range(3):
                for j in range(3):
                    if self.board[i][j] == ' ':
                        self.board[i][j] = 'X'
                        best = min(best, self.minimax(depth + 1, True))
                        self.board[i][j] = ' '
            return best

    # Find the best move for AI
    def find_best_move(self):
        best_val = -1000
        best_move_row = -1
        best_move_col = -1

        for i in range(3):
            for j in range(3):
                if self.board[i][j] == ' ':
                    self.board[i][j] = 'O'
                    move_val = self.minimax(0, False)
                    self.board[i][j] = ' '

                    if move_val > best_val:
                        best_move_row = i
                        best_move_col = j
                        best_val = move_val

        self.board[best_move_row][best_move_col] = 'O'
        print(f"Computer chose position ({best_move_row}, {best_move_col})")

    def player_move(self):
        while True:
            try:
                r, c = map(int, input("Enter row (0-2) and column (0-2): ").split())
            except ValueError:
                print("Invalid input format. Enter two numbers separated by space.")
                continue

            if 0 <= r < 3 and 0 <= c < 3 and self.board[r][c] == ' ':
                self.board[r][c] = 'X'
                break
            else:
                print("Invalid move. Try again.")

    def play(self):
        print("=== Tic Tac Toe (Minimax AI) ===")
        self.display_board()
        while self.is_moves_left():
            # Player X Turn
            self.player_move()
            self.display_board()
            if self.evaluate() == -10:
                print("You Win!")
                return
            if not self.is_moves_left():
                print("It's a Draw!")
                return

            # Computer O Turn
            self.find_best_move()
            self.display_board()
            if self.evaluate() == 10:
                print("Computer Wins!")
                return
        print("It's a Draw!")


if __name__ == "__main__":
    game = TicTacToeAI()
    game.play()
