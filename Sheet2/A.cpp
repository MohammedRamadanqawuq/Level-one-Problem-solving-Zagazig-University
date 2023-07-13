#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    vector<int> vec;
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for (int i = 1; i <= d; i++)
    {
        vec.push_back(vec.front());
        vec.erase(vec.begin());
    }
    
    for (auto i = vec.begin(); i < vec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
