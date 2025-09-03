#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        int mini = -1000000000;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mini + 1)
            {
                count++;
                mini = a[i];
            }
        }
        cout << count << "\n";
    }

    return 0;
}