#include <iostream>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

int main(void)
{
    long long n;
    // cout << "n is";
    cin >> n;

    cout << countDigit(n);
    return 0;
}
