#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int counter = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int k = (n - i * a - j * b) / c;
            // if k < 0 that means we cant use c
            if (k < 0)
            {
                k = 0;
            }
            if ((a * i + b * j + c * k) == n)
            {
                counter = max(counter, i + j + k);
            }
        }
    }
    cout << counter << "\n";
}
