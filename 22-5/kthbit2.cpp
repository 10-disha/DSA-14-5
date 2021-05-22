//right-shift method

#include <iostream>
using namespace std;

void isKthBitSet(int n, int k)
{
    if (1 & (n >> (k - 1)) == 1)
        cout << "SET";

    else
        cout << "NOT SET";
}

int main()
{
    int n = 5, k = 2;
    isKthBitSet(n, k);
    return 0;
}