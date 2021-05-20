//naive solution

#include <iostream>
#include <limits.h>
using namespace std;

void Power(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }

    cout << res;
}

int main()
{
    int x = 4, n = 5;
    Power(x, n);
    return 0;
}