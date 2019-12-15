#include <vector>
#include <iostream>

using namespace std;

vector<int> countBits(int num);

int main()
{
    int num = 85723;
    vector<int> result = countBits(num);

    for (int element : result)
    {
        cout << element << ' ';
    }
    cout << endl;

    return 0;
}

vector<int> countBits(int num)
{
    vector<int> result(num + 1);
    result[0] = 0;
    
    for (int i = 1; i <= num; i++)
    {
        // If i is even
        if ((i & 1) == 0)
        {
            result[i] = result[i >> 1];
        }
        
        else
        {
            result[i] = result[i - 1] + 1;
        }
    }
    
    return result;
}