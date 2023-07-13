#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <queue>
int main(int argc, char *argv[])
{
    int n, m;
    cin >> n;
    vector<int> boys, girls;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        boys.push_back(num);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        girls.push_back(num);
    }
    // sort(boys.begin(), boys.end());
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (abs(boys[i] - girls[j]) <= 1 )
            {
                girls[j] = 1000;
                counter++;
                break;
            }
    }
    cout << counter << "\n";
}
