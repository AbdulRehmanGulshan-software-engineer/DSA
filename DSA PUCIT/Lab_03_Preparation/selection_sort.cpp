for (int i = 0; i < n - 1; i++)
{
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[i])
            min = j;
    }
    if (min != i)
        swap(arr[i], arr[min]);
}