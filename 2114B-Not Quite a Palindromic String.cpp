#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count0 = 0;
        for (char c : s)
            count0 += (c == '0');
        int count1 = n - count0;
        int total = n / 2;
        bool check = false;
        for (int a = 0; a <= k; a++)
        {
            int b = k - a;
            if (2 * a <= count0 && 2 * b <= count1)
            {
                int baki0 = count0 - 2 * a;
                int baki1 = count1 - 2 * b;
                int bad = total - k;
                if (min(baki0, baki1) >= bad)
                {
                    check = true;
                    break;
                }
            }
        }
        cout << (check ? "YES\n" : "NO\n");
    }
    return 0;
}