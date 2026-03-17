// print n to 1
void print(int n)
{
    // base case
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n;
    print(n - 1);
}

// print n t0 1 (even number)
void print(int n)
{
    // base case
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n;
    print(n - 2);
}