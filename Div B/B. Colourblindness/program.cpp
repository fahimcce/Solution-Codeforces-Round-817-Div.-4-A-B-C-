#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
            {
                count++;
            }
            else if ((s1[i] == 'G' && s2[i] == 'B') || s1[i] == 'B' && s2[i] == 'G')
                count++;
        }
        if (count == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}