//naive solution

#include <iostream>
using namespace std;

int pow(int arr[], int n)
{

    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }
}

int main()
{
    int arr[] = {2, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 4, 5, 8}, n = 14;
    cout << pow(arr, n);
    return 0;
}