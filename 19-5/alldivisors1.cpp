#include <iostream>
#include <limits.h>
using namespace std;

void printDivisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            cout << endl;
            if (i != n / i)
            {
                cout << n / i;
                cout << endl;
            }
        }
    }
}

int main()
{
    int n = 25;
    printDivisors(n);
    return 0;
}