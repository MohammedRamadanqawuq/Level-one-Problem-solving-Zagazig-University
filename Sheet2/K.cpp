#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, k;
        cin >> n >> k;
        cout << k + ((k - 1) / (n - 1)) << "\n";
    }
}
