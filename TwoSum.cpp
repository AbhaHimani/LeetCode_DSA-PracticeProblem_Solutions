#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int C[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        C[i] = arr[i];
    }
    sort(arr, arr + n);
    int target;
    cin >> target;
    int i = 0;
    int m, x;
    while (i < n - 1)
    //3,2,4
    //2,3,4

    {
        if (arr[i] + arr[n - 1] == target)
        {
            m = arr[i];
            x = arr[n - 1];

            break;
        }
        else if (arr[i] + arr[n - 1] < target)
        {
            i++;
        }
        else
        {
            n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (m == C[i])
        {
            cout << "[" << i;
        }
        if (x == C[i])
        {
            cout << "," << i << "]";
        }
    }
    return 0;
}
