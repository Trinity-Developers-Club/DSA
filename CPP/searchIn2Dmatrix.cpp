#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0, high = n * m - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int row = mid / m;
            int col = mid % m;

            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
    }
};

int main()
{
    Solution solution;

    int n, m, target;

    cout << "Enter the number of rows in the matrix: ";
    cin >> n;
    cout << "Enter the number of columns in the matrix: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements (row-wise sorted):\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target value to search for: ";
    cin >> target;

    bool found = solution.searchMatrix(matrix, target);
    if (found)
    {
        cout << "The target " << target << " is found in the matrix." << endl;
    }
    else
    {
        cout << "The target " << target << " is not found in the matrix." << endl;
    }
    return 0;
}
