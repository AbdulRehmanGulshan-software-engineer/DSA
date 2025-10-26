void resize()
{
    int *t = new int[size + size]; // (1) Naya array double size ka
    for (int i = 0; i < size; i++) // (2) Purane array ke saare elements copy karo
        t[i] = x[i];
    delete[] x;   // (3) Purane array ki memory free karo
    x = t;        // (4) Pointer ko naye array pe point karwa do
    size += size; // (5) Size variable update
}