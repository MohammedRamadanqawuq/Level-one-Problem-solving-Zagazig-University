#include <iostream>
using namespace std;
#include <deque>
#include <queue>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> de;
        stack<int> maxSt;
        int maxN = -1;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            de.push_front(num);
            maxN = max(maxN, num);
            maxSt.push(maxN);
        }
        stack<int> st;
        while (!de.empty())
        {
            if (de.front() != maxSt.top())
            {
                st.push(de.front());
                // cout << de.front() << " ";
                de.pop_front();
                maxSt.pop();
            }
            else
            {
                st.push(de.front());
                maxSt.pop();
                // cout << de.front() << " ";
                de.pop_front();
                while (!st.empty())
                {
                    cout << st.top() << " ";
                    st.pop();
                }
            }
        }
        cout << "\n";
    }
}
