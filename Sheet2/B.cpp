#include <iostream>
using namespace std;
typedef long long ll;
#include <bits/stdc++.h>
// #include <queue>
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    ll a1;
    cin >> n >> k >> a1;
    ll counter = 0;
    for (ll i = 1; i < n; i++)
    {
        int num;
        cin >> num;
        if (counter == k)
        {
            break;
        }
        if (a1 > num)
        {
            counter++;
        }
        else
        {
            a1 = num;
            counter = 1;
        }
    }
    cout << a1 << endl;
    //=====================================
    // queue<long long> q;
    // for (int i = 1; i <= n; i++)
    // {
    //     long long num;
    //     cin >> num;
    //     q.push(num);
    // }
    // for (int i = 1; i <= k; i++)
    // {
    //     long long num = q.front();
    //     q.pop();
    //     if (num < q.front())
    //     {
    //         q.push(num);
    //     }
    //     else
    //     {
    //         long long loss = num;
    //         q.push(q.front());
    //         q.front() = num;
    //     }
    // }
    // cout << q.front() << "\n";
}
