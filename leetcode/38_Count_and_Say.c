char * countAndSay(int n){

    // Corner case for n = 0 or 1
    if (n == 0)
        return "";
    else if (n == 1)
        return "1";

    // Default 1st string
    char* str = (char*)malloc(sizeof(char) * 10000);
    if (str == NULL)
    {
        fprintf(stderr, "Can not allocate\n");
        exit(1);
    }
    strcpy(str, "1");
    char bar[10000];

    int iteration = 1;

    while(iteration < n)
    {
        int len = strlen(str);
        int i, index = 0;

        // Travarse str and calculate number of digits
        for (int i = 0; i < len;)
        {
            int count = 1;

            // i is not the last index
            if (i != len - 1)
            {
                int j = i + 1;
                // Check for consecutive same digits
                while(j < len)
                {
                    if (str[j] != str[i])
                        break;
                    else
                    {
                        count++;
                        j++;
                    }
                }
            }

            // Covert count into a string
            char str_count[10000] = "";
            sprintf(str_count, "%d", count);
            int len_str_count = strlen(str_count);

            // Insert number of occurances of a digit into bar
            strncpy(bar + index, str_count, len_str_count);
            // Increment the index as needed
            index += len_str_count;

            // Insert the current digit(e.g. str[i]) into bar
            bar[index] = str[i];
            index++;

            // Increment i according to count
            i += count;
        }

        // Terminate bar with a NULL char
        bar[index] = '\0';

        strcpy(str, bar);

        iteration++;

    }

    //printf("%s\n", str);
    return str;

}


