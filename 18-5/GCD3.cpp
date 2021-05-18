//optimized euclidean algorithm
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return (b, a % b);
}

int main(void)
{
    int a = 15, b = 30;
    cout << gcd(a, b);
    return 0;
}