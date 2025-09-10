#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<set<int>> goru(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int card;
                cin >> card;
                goru[i].insert(card);
            }
        }
        vector<int> serial;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            auto it = goru[i].begin();
            int prev = *it;
            ++it;
            for (; it != goru[i].end(); ++it)
            {
                if (*it - prev != n)
                {
                    check = false;
                    break;
                }
                prev = *it;
            }
            if (!check)
                break;
        }
        if (!check)
        {
            cout << -1 << endl;
            continue;
        }
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({*goru[i].begin(), i});
        }
        sort(p.begin(), p.end());
        for (const auto &cow : p)
        {
            serial.push_back(cow.second + 1);
        }
        for (int i = 0; i < n; i++)
        {
            cout << serial[i] << " ";
        }
        cout << endl;
    }

    return 0;
}