/*
Q1. Create a class Location with following members:
• house no (1 to 100 only) - floor no (1 to 3 only) - block (A to K only)
• Non parameterized constructor (assign some random value)
• Parameterized constructor for all data members
• getter for block only - setter for floor only
• show function to display information in the format
House No 88 , Floot No: 2
Block: F
• swap to interchange only if location is different
• improve, change location if block is smaller alphabetically, or floor is lower
*/

class Loc
{
    int hNo, floor;
    char block;

public:
    Loc()
    {
        hNo = rand() % 100 + 1;
        fNo = rand() % 3 + 1;
        block = rand() % 8 + 'A';
    }
    Loc(int h, int f, char b)
    {
        if (h > 0 && h < 101)
            hNo = h;
        if (f > 0 && f < 4)
            fNo = f;
        if (b >= 'A' && b < 'L')
            block = b;
    }
    char getBlock() const { return block; }
    void show() const
    {
        cout << "House No " << hNo << "Floor No " << fNo << '\n';
        cout << "Block: " << block << '\n';
    }
    void swap(Loc &l)
    {
        if (block != l.block || floor != l.floor || hNo != l.hNo)
        {
            int temp;
            temp = loc;
            loc = l.loc;
            l.loc = temp;
            temp = floor;
            floor = l.floor;
            l.floor = temp;
            char tempB = block;
            block = l.block;
            l.block = tempB;
        }
    }
    void improve(int h, int f, char b)
    {
        if (f < floor | b < block)
        {
            if (h > 0 && h < 101)
                hNo = h;
            if (f > 0 && f < 4)
                fNo = f;
            if (b >= 'A' && b < 'L')
                block = b;
        }
    }
};