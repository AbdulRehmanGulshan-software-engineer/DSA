void transpose_matrix(int arr[3][4], int brr[4][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            brr[j][i] = arr[i][j];
}

// array is always passed as pass by refrence