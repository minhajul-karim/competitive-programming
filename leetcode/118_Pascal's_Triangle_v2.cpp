#include <vector>
#include <iostream>

using namespace std;

// Prototype
void printVector(vec vectorToBeReceived);
vector<vector<int>> generate(int numRows);

int main()
{
    vector<vector<int>> result = generate(10);
    
    // Print result
    for (int i = 0; i < result.size(); i++)
    {
        printVector(result[i]);
    }

    return 0;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> mother(numRows);

    for (int i = 0; i < numRows; i++)
    {   
        mother[i].resize(i + 1);

        // Make the starting and ending index 1
        mother[i][0] = mother[i][i] = 1;

        // Calculate sum for indices other than the starting & the ending one
        for (int j = 1; j < mother[i].size() - 1; j++)
        {
            mother[i][j] = mother[i - 1][j - 1] + mother[i - 1][j -1 + 1];
        }
        
    }

    return mother;
}

void printVector(vec vectorToBeReceived)
{
    if (vectorToBeReceived.size() == 0)
    {
        cout << "Empty Vector\n";
        return;
    }

    for (int i = 0; i < vectorToBeReceived.size(); i++)
    { 
        cout << vectorToBeReceived[i] << " "; 
    } 
    cout << '\n';
}
