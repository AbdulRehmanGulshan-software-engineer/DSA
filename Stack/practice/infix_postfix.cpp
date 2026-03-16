/*
reverse(infix)

for each character:

    if operand
        add to result

    if '('
        push

    if ')'
        pop until '('

    if operator
        while precedence(stack top) >= precedence(current)
              pop to result

        push operator

pop remaining stack

reverse(result)
*/
#include <iostream>
#include <stack>
using namespace std;

// Function to return precedence of operators
int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1;
}

// Function to convert infix to postfix
string infixToPostfix(string infix)
{
    stack<char> st;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];

        // If operand, add to output
        if (isalnum(c))
        {
            postfix += c;
        }

        // If '(' push to stack
        else if (c == '(')
        {
            st.push(c);
        }

        // If ')', pop until '('
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }

        // If operator
        else
        {
            while (!st.empty() && precedence(st.top()) >= precedence(c))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop remaining operators
    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Postfix Expression: " << infixToPostfix(infix);

    return 0;
}