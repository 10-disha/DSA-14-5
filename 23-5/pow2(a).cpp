
//doubt
#include <iostream>
using namespace std;

bool pow2(int n)
{
    if (n == 0)
    {
        return true;
    }

    return ((n & (n - 1)) == 0);
}
int main()
{
    int n = 3;
    cout << pow2(n);
    return 0;
}