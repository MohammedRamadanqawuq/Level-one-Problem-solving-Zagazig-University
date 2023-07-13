#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    long long arr[n];
    long long  indexes[n + 1];
    for (long long  i = 0; i < n; i++)
    {
        cin >> arr[i];
        indexes[arr[i]] = i + 1;
    }
    int m;
    cin >> m;
    int qu[m];
    long long maxf = 0, maxs = 0;
    int f = 0, s = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> qu[i];
        maxf += indexes[qu[i]];
        maxs += (n - indexes[qu[i]]) + 1;
    }

    cout << maxf << " " << maxs << "\n";
}
