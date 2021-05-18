//naive method to find  gcd
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);

    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }

        res--;
    }

    return res;
}

int main(void)
{
    int a = 10, b = 15;
    cout << gcd(a, b);

    return 0;
}