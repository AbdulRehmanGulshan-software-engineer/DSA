void multiply_matrices(int a[r1][c1], int b[r2][c2], int c[r1][c2])
{
    for (int i = 0; i < r1; i++)          // row of A
    {
        for (int j = 0; j < c2; j++)      // column of B
        {
            c[i][j] = 0;                  // result element initialize to 0
            for (int k = 0; k < c1; k++)  // move across row of A & col of B
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
