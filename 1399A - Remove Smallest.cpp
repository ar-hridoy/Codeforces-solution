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
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        sort(p.begin(), p.end());
        bool check = false;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = p[i + 1] - p[i];
            if (diff > 1)
            {
                cout << "NO" << endl;
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << "YES" << endl;
        }
    }
}