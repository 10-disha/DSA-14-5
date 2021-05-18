//naive method
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int number = 3;
    cout << isPrime(number);
    return 0;
}

//time complexity big O(n)