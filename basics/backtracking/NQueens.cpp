#include <iostream>
#include <vector>
using namespace std;

void addsolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

bool issafe(int row, int col, vector<vector<int>> &board, int n)
{
    // check for same row.
    int x = row;
    int y = col;

    while (y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        y--;
    }

    // diagnol - side upper
    x = row;
    y = col;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    // diagnol - side lower
    x = row;
    y = col;
    while (x < n && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x++;
        y--;
    }
    return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    // base case ending point.
    if (col == n)
    {
        addsolution(ans, board, n);
        return;
    }

    // 1st col case - rest leave for reecursion.
    for (int row = 0; row < n; row++)
    {
        if (issafe(row, col, board, n))
        {
            board[row][col] = 1;

            solve(col + 1, ans, board, n);

            // backtrack
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> Nqueens(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;

    solve(0, ans, board, n);
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> result = Nqueens(n);

    for (int j = 0; j < result.size(); j++)
    {
        cout << "solution - " << j + 1 << " of " << n << " by " << n << " board." << endl;
        for (int i = 0; i < result[j].size(); i++)
        {
            std::cout << result[j][i] << " ";
            if ((i + 1) % n == 0)
            {
                std::cout << std::endl;
            }
        }
        cout << endl;
    }
    return 0;
}
