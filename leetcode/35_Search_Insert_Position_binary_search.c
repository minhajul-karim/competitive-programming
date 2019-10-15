int searchInsert(int* nums, int numsSize, int target){

    // If the array is NULL
    if (nums == NULL)
        return 0;

   // Binary search
   int low = 0, high = numsSize - 1;
   while(low <= high)
   {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid;

        else if (target > nums[mid])
            low = mid + 1;

        else if (target < nums[mid])
            high = mid - 1;
   }

   return low;

}
