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
    vector<vector<int>> mother;
    vector<int> child;

    for (int i = 0; i < numRows; i++)
    {
        child.clear();

        if (i == 0)
        {
            child.resize(1, 1);
            mother.push_back(child);
        }

        else if (i == 1)
        {
            child.resize(2, 1);
            mother.push_back(child);
        }

        else
        {
            child.resize(i + 1, 1);
            mother.push_back(child);
            for (int j = 1; j < child.size() - 1; j++)
            {
                mother[i][j] = mother[i - 1][j - 1] + mother[i - 1][j -1 + 1];
            }    
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
