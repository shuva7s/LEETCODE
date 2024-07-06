#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < matrix.size(); ++i)
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);

    for (auto &row : matrix)
        reverse(row.begin(), row.end());

    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
            cout << elem << " ";
        cout << endl;
    }

    return 0;
}