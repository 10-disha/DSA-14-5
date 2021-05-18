//recursive solution for factorial

#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

//time complexity=theta(n)
//auxiliary space=theta(n) as there will be n calls in
//recursive function here it causes extra overhead

int main(void)
{
    int number = 4;
    cout << fact(number);

    return 0;
}