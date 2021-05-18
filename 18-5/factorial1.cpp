//iterative solution

#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
    int result = 1;

    for (int i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

//time complexity=theta(n)
//auxiliary space=O(1)

int main(void)
{
    int number = 6;
    cout << fact(number);

    return 0;
}