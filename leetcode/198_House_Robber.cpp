class Solution
{
    public:
        int rob(vector<int> &nums)
        {
            
            // When the vector is emtpy
            if (nums.empty())
            {
                return 0;
            }
            
            size_t numberOfElements = nums.size();

            vector<int> memo;
            memo.assign(numberOfElements, -999);
            
            return helper(nums, memo, numberOfElements - 1);

        }

        int helper(vector<int> &nums, vector<int> &memo, int n)
        {

            if (n < 0)
            {
                return 0;
            }
            
            if (memo[n] != -999)
            {
                return memo[n];
            }
            
            memo[n] = max(nums[n] + helper(nums, memo, n - 2), helper(nums, memo, n - 1));
            return memo[n];

        }
};
