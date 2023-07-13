#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int arr[n], sortedArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sortedArr[i] = arr[i];
    }
    int counter = 0;
    sort(sortedArr, sortedArr + n);
    if (is_sorted(arr, arr + n))
    {
        cout << "yes\n1 1\n";
        return 0;
    }
    int p1 = 0, p2 = 0;
    int swaps = 0;
    for (int i = 0; i < n - 1 && swaps < 1;)
    {
        if (arr[i] < arr[i + 1])
        {
            i++;
        }
        else
        {
            p1 = i;
            p2 = i;
            while (arr[i] > arr[i + 1] && i < n - 1)
            {
                p2++;
                i++;
            }
            sort(arr + p1, arr + p2 + 1);
            swaps = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != sortedArr[i])
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    cout << p1 + 1 << " " << p2 + 1 << "\n";
}
