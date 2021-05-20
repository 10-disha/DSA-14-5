
//doubt
//naive solution
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void Printprimenumbers(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i;
                cout << endl;
                x = x * i;
            }
        }
    }
}

int main(void)
{
    int n = 32;
    Printprimenumbers(n);
    return 0;
}