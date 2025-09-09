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
        int o = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            if (p[i] == 0)
                o++;
            else
                z++;
        }
        if (z == n || o == n)
        {
            cout << "YES" << endl;
            continue;
        }
        bool check = false;
        for (int i = 1; i < n; i++)
        {
            if (p[i] == 0 && p[i - 1] == 0)
            {
                check = true;
            }
        }
        if (check)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}