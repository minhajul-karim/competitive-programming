#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Prototype
int minSubArrayLen(int s, vector<int> &nums);

int main()
{
    vector<int> nums;
    int myints[] = {1};
    nums.assign(myints, myints+1);

    int res = minSubArrayLen(7, nums);
    cout << res << endl;

    return 0;
}

int minSubArrayLen(int s, vector<int> &nums)
{
    // Declare i as the left pointer & j as the right pointer
    int i = 0, j = 0, sum = 0;
    int array_length = nums.size(), min_length = INT32_MAX;

    // Check for empty vector
    if (array_length == 0) return 0;

    while (j < array_length)
    {
        // Cumulative sum
        sum += nums[j];

        // If sum larger or equal to target, s
        if (sum >= s)
        {
            // Length of the current window
            min_length = min(min_length, j-i+1);
            if (i == j) j++;
            else
            {
                sum -= (nums[i] + nums[j]);
                i++;
            }
            
        }
        
        else j++;
        
    }

    return (min_length == INT32_MAX) ? 0 : min_length;

}