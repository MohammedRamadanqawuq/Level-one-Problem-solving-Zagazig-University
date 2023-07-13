#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{

    long long n;
    cin >> n;
    long long v[n];
    long long ones = 0;
    long long zeros = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            ones++;
        }
    }
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            zeros += 1;
        }
        else
        {
            zeros -= 1;
        }
        ans = max(ans, zeros);
        if (zeros < 0)
        {
            zeros = 0;
        }
    }
    if (ones == n)
    {
        cout << n - 1 << "\n";
    }
    else

        cout << ones + ans << "\n";
}
