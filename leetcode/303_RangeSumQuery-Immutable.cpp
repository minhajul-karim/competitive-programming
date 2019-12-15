class NumArray
{
    
private:
    vector<int> cumulativeSum;

public:
    NumArray(vector<int> &nums)
    {
        size_t numsLength = nums.size();
        
        if (numsLength > 0)
        {
            cumulativeSum.push_back(nums[0]);

            // Insert cumulative sums
            for (int i = 1; i < numsLength; i++)
            {
                cumulativeSum.push_back(nums[i] + cumulativeSum[i - 1]);
            }
        }
    }
    
    int sumRange(int i, int j)
    {
        if (cumulativeSum.size() == 0)
        {
            return 0;
        }
        
        return (i == 0) ? cumulativeSum[j] : cumulativeSum[j] - cumulativeSum[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
