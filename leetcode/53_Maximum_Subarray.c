int maxSubArray(int* nums, int numsSize)
{
    int res = calculation(nums, 0, numsSize-1);
    return res;
}

int calculation(int* a, int low, int high)
{
    // If low and high are equal
    if (low == high)
        return a[low];

    // Calculate the mid point
    int mid = (low + high) / 2;

    // Recursively divide the array in left and right
    int left = calculation(a, low, mid);
    int right = calculation(a, mid+1, high);
    
    // Find the sum of a subarray if it lies on both left and right
    int crossing = crossingSum(a, low, mid, high);

    return max_of_three(left, right, crossing);

}

int crossingSum(int* a, int low, int mid, int high)
{
    int i, sum = 0, left_max_sum = INT_MIN, right_max_sum = INT_MIN;

    // Calculate the left max sum
    for (i = mid; i >= low; i--)
    {
        sum += a[i];
        left_max_sum = max_of_two(sum, left_max_sum);
    }

    // Calculate the right max sum
    sum = 0;
    for (i = mid+1; i <= high; i++)
    {
        sum += a[i];
        right_max_sum = max_of_two(sum, right_max_sum);
    }

    return (left_max_sum + right_max_sum);
}

// Function to find max of 2 elements
int max_of_two(int x, int y)
{
    return (x > y) ? x : y;
}

// Function to find max of 3 elements
int max_of_three(int p, int q, int r)
{
    int temp = max_of_two(p, q);
    return max_of_two(temp, r);
}
