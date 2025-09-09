#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = stoi(s);
        int x = sqrt(n);
        if (x * x != n)
        {
            cout << -1 << endl;
            continue;
        }
        bool found = false;
        for (int a = 0; a <= x; ++a)
        {
            int b = x - a;
            if ((a + b) * (a + b) == n)
            {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }
    return 0;
}