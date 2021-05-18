//doubt
//naive method

#include <iostream>
#include <limits.h>
using namespace std;

int trailzeroes(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
        return fact;
    }

    int result = 0;
    while (fact % 10 == 0)
    {
        result++;
        fact = fact / 10;
    }

    return result;
}

int main(void)
{
    int number = 1000;
    cout << trailzeroes(number);
    return 0;
}