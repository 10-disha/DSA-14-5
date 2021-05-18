//euclidean algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;

        else
            b = b - a;
    }

    return a;
}

int main(void)
{
    int a = 15, b = 30;
    cout << gcd(a, b);
    return 0;
}