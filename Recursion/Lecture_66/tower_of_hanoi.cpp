toh(int N, int source, int helper, int destination)
{
    // base case
    if (N == 1)
    {
        cout << "move disk" << N << "from" << source << "to" << destination << endl;
        return;
    }

    toh(N - 1, source, destination, helper);
    cout << "move disk" << N << "from" << source << "to" << destination << endl;
    toh(N - 1, helper, source, destination);

    // total steps
    return pow(2, N) - 1;
}