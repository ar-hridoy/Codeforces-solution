#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int d = str.size();
        int count = 0;
        for (int i = 0; i < d; i++)
        {
            if (str[i] == '1')
                count++;
        }
        cout << count << endl;
    }
}