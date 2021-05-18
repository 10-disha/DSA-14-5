//naive solution
#include <iostream>
#include <algorithm>
using namespace std;

int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}

int main(void)
{

    int a = 25, b = 100;
    cout << lcm(a, b);
    return 0;
}

//time big O(a*b - max(a,b))