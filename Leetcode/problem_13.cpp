// 13. Roman to Integer

class Solution
{
public:
    // function for character to number return
    int num(char c)
    {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        else
            return 1000;
    }
    int romanToInt(string s)
    {
        int index = 0, sum = 0;
        while (index < s.size() - 1)
        {
            if (num(s[index]) < num(s[index + 1]))
                sum -= num(s[index]);
            else
                sum += num(s[index]);
            index++;
        }
        // just add last remaining index which will not be compare to any one
        sum += num(s[s.size() - 1]);
        return sum;
    }
};