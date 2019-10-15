bool isPalindrome(int x) {
    
    // If the number is negative
    if (x < 0)
        return false;

    // Convert the integer in an array in reverse order
    int i = 0, arr[10];
    while(x != 0)
    {
        arr[i] = x % 10;
        x /= 10;
        i++;
    }

    // Check the both ends of the array
    int start = 0, end = i - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
            return false;

        start++;
        end--;
    }

    return true;

}
