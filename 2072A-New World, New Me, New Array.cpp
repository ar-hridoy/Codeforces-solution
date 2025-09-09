#include <bits/stdc++.h>
#define endl "\n"
#define shuru                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    int mini = n * (-p);
    int maxi = n * p;
    if (k < mini || k > maxi)
    {
        cout << "-1\n";
        return;
    }
    int abs_k = abs(k);
    int operations = abs_k / p;
    if (abs_k % p != 0)
        operations++;

    cout << operations << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}