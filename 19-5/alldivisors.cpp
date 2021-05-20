#include <iostream>
#include <limits.h>

using namespace std;
void Printdivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i;
            cout << endl;
            // n = n / i;
        }
    }
}
int main()
{
    int n = 6;
    Printdivisors(n);
    return 0;
}