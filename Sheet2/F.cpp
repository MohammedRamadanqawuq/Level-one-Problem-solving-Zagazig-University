#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main(int argc, char *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++)
    {
        cout << upper_bound(a.begin(), a.end(), b[i]) - a.begin() << " ";
    }
    cout << "\n";
}
