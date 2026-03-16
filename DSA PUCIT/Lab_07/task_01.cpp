#include <bits/stdc++.h>
using namespace std;
int main()
{
    // storing operands
    string operands[5] = [ '^', '*', '/', '+', '-' ];
    // storing variables
    int vars[26];
    for (int i = 0; i < 26; i++)
        vars[i] = i + 'a';
    // access
    // cout << to_string(97);

    // input infix
    string str;
    cout << "Enter infix expression without spaces: ";
    cin >> str;
    // applying constraints for rule 1
    for (int i = 0; i < str.size(); i++)
        if ((str[i] >= 'A' && str[i] <= 'Z'))
            cout << "invalid expression";

    int Q;
    cout << "Enter Number of Queries : ";
    cin >> Q;

    // created array of string
    string str1[Q];

    for (int i = 0; i < Q; i++)
    {
        cout << "Enter Query " << i + 1;
        cin >> str1[i];
        // constraint for evaluate query
        if (str1[i][0] == 'E')
        {
            if (str.size() < str1[i][4] && str1[i][4] < str1[i][2] && str1[i][2] < 0)
            {
                cout << "Query dont satisfy constraints.";
                return -1;
            }
        }
    }

    // extracting substring
    for (int i = 0; i < str1->size(); i++)
    {
        if (str1[i][0] == 'E')
        {
            int size = str1[i][4];
            string subString[size];
            for (int i = 0; i <= size; i++)
                subString[i] = str[i];
            bool validate = false;
            // validate substring , applying given validation rules
            // edge cases
            if (subString->size == 1)
            {
                for (int i = 0; i < 5; i++)
                    if (subString[0] == operands[i])
                        validate = true;
                // edge case 4
                if (subString[0] == '(' || subString[0] == ')')
                    validate = false;
            }
            // edge case 2
            if (subString->size > 1)
            {
                for (int i = 0; i < 5; i++)
                    if (subString[0] == operands[i])
                        validate = false;
            }
            // edge case 3
            if (subString->size > 1)
            {
                for (int i = 0; i < 5; i++)
                    if (subString[size - 1] == operands[i])
                        validate = false;
            }
            // actual validation using stack
            stack<string> st;
            if (validate == true)
            {
                vector<string> postfix;
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (subString[i] == operands[j])
                            st.push(subString[i]);
                        else
                    }
                }
            }
        }
    }
    return 0;
}