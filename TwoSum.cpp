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
    //Take the numbers as input for arr, and make a copy of that, array C
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        C[i] = arr[i];
    }
    //Sort the array
    sort(arr, arr + n);
    int target;
    cin >> target;
    int i = 0;
    //these two --> x and y are used to take the value of array element whixh when summed up result to target
    int m, x;
    while (i < n - 1)
    //3,2,4
    //2,3,4
    // here, 1,2,3,4 --> we point to 1 and 4, and sum them, if target is more than the sum, we move ahead in array elements, else move backward from end
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
    // here we will, find the index lol
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
