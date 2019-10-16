#include <vector>
#include <iostream>

using namespace std;

// Prototype
vector<int> getRow(int rowIndex);

int main()
{
    vector<int> result = getRow(3);
    
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
    vector<int> result, temp;

    for (int i = 0; i <= rowIndex; i++)
    {   
        result.resize(i + 1);

        // Make the starting and ending index 1
        result[0] = result[i] = 1;

        // Calculate sum for indices other than the starting & the ending one
        for (int j = 1; j < result.size() - 1; j++)
        {
            result[j] = temp[j - 1] + temp[j - 1 + 1];
        }

        // Break the loop for the last row
        if (i == rowIndex)
        {
            break;
        }
        else
        {
            temp = result;
        }
        
    }

    return result;
}
