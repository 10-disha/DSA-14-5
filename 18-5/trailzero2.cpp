//efficient solution

#include <iostream>
#include <limits.h>
using namespace std;

int countTrailingzeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}

int main(void)
{
    int number = 251;
    cout << countTrailingzeroes(number);

    return 0;
}
