#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int l = 1, r = 0;
    int maxx = -1e9;
    for (int i = 0; i < n; i++)
    {
        int counter = 1;
        // int fl = 0, fr = 0;
        for (int r = i; r < n - 1; r++)
        {
            if (arr[r] >= arr[r + 1])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        for (int l = i; l > 0; l--)
        {
            if (arr[l] >= arr[l - 1])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        maxx = max(maxx, counter);
    }
    cout << maxx << "\n";
}
