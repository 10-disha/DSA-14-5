#include <iostream>
using namespace std;

bool pow2(int n)
{
    if (n == 0)
        return false;

    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }

        n = n / 2;
    }

    return true;
}

int main()
{
    int n = 4;
    cout << pow2(n);
    return 0;
}