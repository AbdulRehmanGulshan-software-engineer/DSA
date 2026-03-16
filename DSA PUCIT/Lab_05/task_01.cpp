// #include <iostream>
// #include <vector>
// #include <stack>
#include <bits/stdc++.h>
using namespace std;
int score(vector<string> &operation)
{
    stack<int> st;
    for (int i = 0; i < operation.size(); i++)
    {
        if (operation[i] >= "0" || operation[i] < "0")
            st.push(operation[i]);
        // "+" previous two scores
        if (operation[i] == "+")
        {
            int sum = 0;
            if (st.size() >= 2)
            {
                int temp1 = st.top();
                st.pop();
                sum += temp1;
                int temp2 = st.top();
                st.pop();
                sum += temp2;
                st.push(temp2);
                st.push(temp1);
            }
            st.push(sum);
        }
        //"D" double the previous score
        if (operation[i] == "D")
        {
            int sum;
            if (st.size() >= 1)
            {
                int temp = st.top();
                st.pop();
                sum = 2 * temp;
                st.push(temp);
            }
            st.push(sum);
        }
        //"C" invalidate the previous record
        if (operation[i] == "C")
            st.pop();
    }
    int sum;
    for (int i = 0; i < st.size(); i++)
    {
        sum += st.top();
        st.pop();
    }
}
int main()
{
    // input from user
    int T;
    cout << "Enter Number Of Test Cases : ";
    cin >> T;
    string *str[T];
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        str[i] = new string[n];
    }

    return 0;
}