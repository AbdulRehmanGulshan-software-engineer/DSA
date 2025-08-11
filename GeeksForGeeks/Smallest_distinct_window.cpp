class Solution
{
public:
    int findSubString(string &str)
    {
        // create vector of 256 size
        vector<int> count(256, 0);
        int first = 0;  // points 0th index
        int second = 0; // points 0th index
        int length = str.size();
        int diff = 0;

        // calculate the unique characters
        while (first < str.size())
        {
            if (count[str[first]] == 0)
                diff++; // means its unique character

            count[str[first]]++; // calculate how many time character came
            first++;
        }

        // clear this as we dont need it
        for (int i = 0; i < 256; i++)
            count[i] = 0;

        first = 0;

        while (second < str.size())
        {
            while (diff && second < str.size()) // jb tak diff exist krta hai
            {
                if (count[str[second]] == 0)
                    diff--;

                count[str[second]]++;
                second++;
            }
            length = min(length, second - first);

            while (diff != 1) // jb tk diff ki value 1 na bn jae
            {
                length = min(length, second - first);
                count[str[first]]--;

                if (count[str[first]] == 0)
                    diff++;

                first++;
            }
        }
        return length;
    }
};