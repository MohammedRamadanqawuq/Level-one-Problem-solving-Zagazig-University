#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    {
        if (m * a <= b)
        {
            cout << n * a << "\n";
        }
        else
        {
            cout << ((n / m) * b) + min((n % m) * a, b) << "\n";
        }
    }
}
