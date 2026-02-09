board = [
    [" ", " ", " "],
    [" ", " ", " "],
    [" ", " ", " "],
]

current_player = "human"   # or "computer"

game_over = False

while not game_over:
    # 1. Display board
    print("---------")
    for row in board:
        print("|".join(row))
    print("---------")

    # 2. Human move
    if current_player == "human":
        # TODO: take input row, col and place "O" on empty cell
        pass

    # 3. Check win/draw
    # TODO: if someone won or draw -> set game_over = True and continue
    # e.g. winner = check_winner(board)

    if game_over:
        break

    # 4. Computer move (rule-based)
    # TODO: apply your heuristic rules and place "X"
    # e.g. computer_move(board)

    # 5. Check win/draw again
    # TODO: same as above; if game end, set game_over = True

    # (Optional) swap who starts next round, or just always human first
