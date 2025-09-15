#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int size = str.size();
    string updated = "";
    bool h = true, l1 = true, l2 = true, e = true, o = true;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == 'h' && h)
        {
            updated += str[i];
            h = false;
        }
        else if (str[i] == 'l' && l1 && !h && !e)
        {
            updated += str[i];
            l1 = false;
        }
        else if (str[i] == 'l' && l2 && !l1 && !h && !e)
        {
            updated += str[i];
            l2 = false;
        }
        else if (str[i] == 'e' && e && !h)
        {
            updated += str[i];
            e = false;
        }
        else if (str[i] == 'o' && o && !l2 && !l1 && !h && !e)
        {
            updated += str[i];
            o = false;
        }
    }
    if (updated == "hello")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}