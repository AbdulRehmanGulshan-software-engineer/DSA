#include <iostream>
using namespace std;

//recursive function
int getPascalNumber(int r,int c)
{
    //base case
    if(c<0 || c>r)
        return 0;
    else if(c==0 || c==r)
        return 1;
    //recursive call case,solving small problem
    else
        return    getPascalNumber(r-1,c-1) + getPascalNumber(r-1,c);
}

int main() {
    // Write C++ code here
    cout << getPascalNumber(5,2) << endl;
    return 0;
}