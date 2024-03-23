#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tcount = 0, icount = 0, m = 0, u = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                tcount++;
            else if (s[i] == 'i')
                icount++;
            else if (s[i] == 'm')
                m++;
            else if (s[i] == 'u')
                u++;
            else if (s[i] == 'r')
                r++;
        }
        if ((tcount == 1) && (icount == 1) && (m == 1) && (u == 1) && (r == 1) && n == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}