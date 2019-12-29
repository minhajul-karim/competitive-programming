#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A);

int main()
{
    vector<vector<int>> v{{1,1,0},{1,0,1},{0,0,0}};

    vector<vector<int>> res = flipAndInvertImage(v);

    for (auto i = 0; i < res.size(); i++)
    {
        for (auto j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
{
    // Reverse the vector
    for (int i = 0; i < A.size(); i++)
    {
        reverse(A[i].begin(), A[i].end());
        
        // Invert the bites of row
        for (int j = 0; j < A[i].size(); j++)
        {
            if (A[i][j] == 0)
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }

    return A;
}