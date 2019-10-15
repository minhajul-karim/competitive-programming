class Solution {
public:
    void merge(vector<int>& one, int m, vector<int>& two, int n) 
    {
        /****** 
        
        i, j are the number of indices of one[], two[] w/o additional space.
        k = last index of merged one[] 
        
        *******/
        int i = m-1, j = n-1, k = (m+n)-1;

        // Iterate until either of i or j exhausts
        while(j >= 0 && i >= 0)
        {
            // Copy one[i] into one[k]
            if (one[i] >= two[j])
                one[k--] = one[i--];

            // Copy two[j] into one[k]
            else
                one[k--] = two[j--];
        }
        
        // Copy remaining elements of two[] into one[]
        while(j >= 0)
            one[k--] = two[j--];
    }
};
