#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int d = str.size();
        for (int i = 0; i < d - 2; i++)
        {
            cout << str[i];
        }
        cout << "i" << endl;
    }
}