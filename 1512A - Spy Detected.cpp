#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        int a, b, idx;
        vector<int> q(101, 0);
        cin >> p[0];
        a = p[0];
        q[a]++;
        for (int i = 1; i < n; i++)
        {
            cin >> p[i];
            q[p[i]]++;
            if (p[i] != a)
            {
                b = p[i];
                idx = i + 1;
            }
        }
        if (q[a] == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << idx << endl;
        }
    }
}