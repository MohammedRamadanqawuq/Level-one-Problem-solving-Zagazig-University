#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
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
    for (int i = 0; i < n; i++)
    {
        int T_Prime = 1;
        if (arr[i] < 4 || sqrt(arr[i]) - int(sqrt(arr[i])) != 0)
        {
            T_Prime = 0;
        }
        else
        {
            for (int j = 2; j * j <= sqrt(arr[i]); j++)
            {
                if (int(sqrt(arr[i])) % j == 0)
                {
                    T_Prime = 0;
                    break;
                }
            }
        }
        if (T_Prime)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
