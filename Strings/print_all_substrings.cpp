#include <bits/stdc++.h>

// main function
int main()
{
    // initialize string
    std::string str = "abcabcbb";
    std::string result;
    int answer;
    bool check;
    // print all substrings
    int k = 1;
    int l;
    for (int i = str.size(); i > 0; i--) // outer loop 5 4 3 2 1
    {
        for (int j = 0; j < i; j++) // 0 1 2 3 4 , 0 1 2 3 , 0 1 2 , 0 1 , 0
        {
            l = j + k;
            result = "";
            check = true;
            for (int k = j; k < l; k++)
            {
                std::cout << str[k];
                result += str[k];
            }
            std::cout << " ";
            for (int l = 0; l < result.size() - 1; l++)
            {
                for (int m = l + 1; m < result.size(); m++)
                {
                    if (result[l] == result[m])
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check)
            {
                answer = result.size();
            }
        }
        std::cout << std::endl;
        k++;
    }
    // std::cout << result << " ";
    std::cout << "maximum subarray length with required conditions : " << answer;
    return 0;
};