#include <vector>
#include <iostream>

using namespace std;

// Prototype
vector<int> getRow(int rowIndex);

int main()
{
    vector<int> result = getRow(4);
    
    // Print result
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    cout << endl;

    return 0;
}

vector<int> getRow(int rowIndex)
{
    // Declare a vector prefilled with 1
    vector<int> result(rowIndex + 1, 1);

    for (int i = 1; i < rowIndex; i++)
    {
        for (int j = rowIndex - 1; j >= i; j--)
        {
            result[j] = result[j] + result[j + 1];
        }
    }

    return result;
}
