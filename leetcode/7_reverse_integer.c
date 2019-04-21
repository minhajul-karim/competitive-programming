
int reverse(int x)
{
    int remainder = 0, isNeg = 0, result_int = 0;
    long long max = 2147483647, result = 0, x_long = (int)x;

    // Check if the number is negative
    if (x_long < 0)
    {
        // Make it postive and change status of isNeg
        x_long *= -1;
        isNeg = 1;
    }

    // Loop until x is 0
    while(x_long != 0)
    {
        remainder = x_long % 10;
        result = (result * 10) + remainder;

        if (result > max)
            return 0;

        else
            x_long /= 10;
    }

    result_int = (long)result;

    // Print res
    if (isNeg == 1)
        return (result_int * -1);

    else
        return result_int;

}
