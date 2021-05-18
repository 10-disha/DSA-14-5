//doubt
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int countDigit(long long n)
{
    return floor(log10(n) + 1);
}

int main(void)
{
    long long n;
    // cout << "n is";
    cin >> n;

    cout << countDigit(n);
    return 0;
}