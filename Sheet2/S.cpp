#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // Note commented solution is also Right
    int n;
    // int energey = 0, previous = 0, dollars = 0;
    cin >> n;
    int maxx = -1e9;
    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;
        // energey += previous - h;
        // if (energey < 0)
        // {
        //     dollars += -energey;
        //     energey = 0;
        // }
        // previous = h;
        maxx = max(maxx, h);
    }
    // cout << dollars << "\n";
    cout << maxx << "\n";
}
