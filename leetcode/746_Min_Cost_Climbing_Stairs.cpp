#include <vector>
#include <iostream>

using namespace std;

int minCostClimbingStairs(vector<int> &cost);

int main()
{
    vector<int> v{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(v) << endl;    

    return 0;
}

int minCostClimbingStairs(vector<int> &cost)
{
    // Number of elements in cost
    size_t numberOfCosts = cost.size();
    
    // Declare an array
    int arr[numberOfCosts];
    arr[0] = cost[0], arr[1] = cost[1];
    
    for(int i = 2; i < numberOfCosts; i++)
    {
        arr[i] = cost[i] + min(arr[i - 1], arr[i - 2]);
    }
    
    return min(arr[numberOfCosts - 1], arr[numberOfCosts - 2]);

}