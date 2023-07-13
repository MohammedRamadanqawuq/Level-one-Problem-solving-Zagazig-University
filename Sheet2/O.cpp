#include <iostream>
using namespace std;
#include <algorithm>
int main(int argc, char *argv[])
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int m;
        cin >> m;
        cout << (upper_bound(arr, arr + n, m) - arr) << "\n";
    }
}
