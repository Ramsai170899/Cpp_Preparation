/*
Backtracking is an algorithmic technique for solving recirsive problems by trying to build every possible
 solution incrementally and removing those solutions that fail to satisfy the constraints of the problem at any point of time.
*/

#include <iostream>
using namespace std;

bool issafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool rateinmaze(int **arr, int x, int y, int n, int **solarr)
{
    if (x == n - 1 && y == n - 1)
    {
        solarr[x][y] = 1;
        return true;
    }
    if (issafe(arr, x, y, n))
    {
        solarr[x][y] = 1;
        if (rateinmaze(arr, x + 1, y, n, solarr))
        {
            return true;
        }
        if (rateinmaze(arr, x, y + 1, n, solarr))
        {
            return true;
        }
        solarr[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n = 5;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    cout << "Enter the input maze : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
    }

    cout << "Result maze : \n";
    if (rateinmaze(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1