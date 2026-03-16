// User function Template for C++

class Solution
{
public:
    stack<int> insertAtBottom(stack<int> st, int x)
    {
        stack<int> temp;
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        temp.push(x);
        // reverse string
        stack<int> extra_temp;
        while (!temp.empty())
        {
            extra_temp.push(temp.top());
            temp.pop();
        }
        return extra_temp;
    }
};