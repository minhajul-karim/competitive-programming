int romanToInt(char* s) {

    int len = strlen(s), res = 0;
    for (int i = 0; i < len;)
    {
        // Corner case for 4
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            res += 4;
            i += 2;
        }

        // Corner case for 9
        else if (s[i] == 'I' && s[i + 1] == 'X')
        {
            res += 9;
            i += 2;
        }

        // Corner case for 40
        else if (s[i] == 'X' && s[i + 1] == 'L')
        {
            res += 40;
            i += 2;
        }

        // Corner case for 90
        else if (s[i] == 'X' && s[i + 1] == 'C')
        {
            res += 90;
            i += 2;
        }

        // Corner case for 400
        else if (s[i] == 'C' && s[i + 1] == 'D')
        {
            res += 400;
            i += 2;
        }

        // Corner case for 900
        else if (s[i] == 'C' && s[i + 1] == 'M')
        {
            res += 900;
            i += 2;
        }

        else if (s[i] == 'I')
        {
            res += 1;
            i++;
        }

        else if (s[i] == 'V')
        {
            res += 5;
            i++;
        }

        else if (s[i] == 'X')
        {
            res += 10;
            i++;
        }

        else if (s[i] == 'L')
        {
            res += 50;
            i++;
        }

        else if (s[i] == 'C')
        {
            res += 100;
            i++;
        }

        else if (s[i] == 'D')
        {
            res += 500;
            i++;
        }

        // For M, 1000
        else
        {
            res += 1000;
            i++;
        }
    }

    return res;
}
