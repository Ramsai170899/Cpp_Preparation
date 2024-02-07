```
function solveNQueens(N):
    board = createEmptyBoard(N)
    if placeQueens(board, 0):
        printBoard(board)
    else:
        print("No solution exists")

function placeQueens(board, row):
    if row == size(board):
        return true  // All queens are placed successfully

    for col from 0 to size(board) - 1:
        if isSafe(board, row, col):
            // Place queen and move to the next row
            board[row][col] = 1

            // Recur to place the rest of the queens
            if placeQueens(board, row + 1):
                return true

            // If placing queen in the current position doesn't lead to a solution
            // then backtrack and remove the queen from the current position
            board[row][col] = 0

    // If no safe spot found in the current row, return false
    return false

function isSafe(board, row, col):
    // Check if there is a queen in the same column
    for i from 0 to row - 1:
        if board[i][col] == 1:
            return false

    // Check if there is a queen in the left diagonal
    for i, j from row-1, col-1 to 0, 0 (while i >= 0 and j >= 0):
        if board[i][j] == 1:
            return false

    // Check if there is a queen in the right diagonal
    for i, j from row-1, col+1 to 0, size(board)-1 (while i >= 0 and j < size(board)):
        if board[i][j] == 1:
            return false

    // If no conflict found, it's safe to place the queen
    return true

function printBoard(board):
    // Print the chessboard configuration with queens placed
    for row from 0 to size(board) - 1:
        for col from 0 to size(board) - 1:
            print(board[row][col] + " ")
        print("\n")
    print("\n")

```