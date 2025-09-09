#include <bits/stdc++.h>
#define shuru                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    shuru;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        bool check = false;

        for (int i = 0; i < n; ++i)
        {
            int gb = a[i];
            int gc = -1;

            for (int j = 0; j < n; ++j)
            {
                if (j == i)
                {
                    continue;
                }
                if (gc == -1)
                {
                    gc = a[j];
                }
                else
                    gc = gcd(gc, a[j]);
            }

            if (gb != gc)
            {
                cout << "Yes\n";
                for (int j = 0; j < n; ++j)
                {
                    cout << (j == i ? 1 : 2) << " ";
                }
                cout << "\n";
                check = true;
                break;
            }
        }

        if (!check)
        {
            cout << "No\n";
        }
    }

    return 0;
}