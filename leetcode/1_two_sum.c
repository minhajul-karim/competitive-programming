
// * Note: The returned array must be malloced, assume caller calls free().

int* twoSum(int* nums, int numsSize, int target)
{

    int* arr = (int*)malloc(2 * sizeof(int));

    if (arr == NULL)
    {
        fprintf(stderr, "Can not allocate\n");
        exit(1);
    }

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                arr[0] = i;
                arr[1] = j;

                return arr;
            }
        }
    }

    // If any match does not found
    arr[0] = 0;
    arr[1] = 0;

    return arr;
}
