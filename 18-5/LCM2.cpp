//efficient solution

#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(void)
{

    int a = 25, b = 100;
    cout << lcm(a, b);
    return 0;
}

//O(log(min(a,b))) -- time complexity