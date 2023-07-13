#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    long long q[m];
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int ans = (lower_bound(arr, arr + n, q[i])) - arr;
        cout << ans + 1 << "\n";
    }
}
