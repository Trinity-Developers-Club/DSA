#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    bool isSafe1(int row, int col, vector<string> board, int n)
    {
        int duprow = row;
        int dupcol = col;

        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        row = duprow;
        col = dupcol;

        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        row = duprow;
        col = dupcol;

        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (isSafe1(row, col, board, n))
            {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {

        vector<vector<string>> ans;
        vector<string> board(n);

        string s(n, '.');

        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }

        solve(0, board, ans, n);
        return ans;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<vector<string>> result = sol.solveNQueens(n);

    for (auto &board : result)
    {
        for (auto &row : board)
        {
            cout << row << endl;
        }
        cout << "------" << endl;
    }

    return 0;
}
