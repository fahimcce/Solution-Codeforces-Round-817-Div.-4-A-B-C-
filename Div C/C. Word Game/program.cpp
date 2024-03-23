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
        vector<string> s1, s2, s3;
        vector<int> score1, score2, score3;
        // Take input for 3 rows
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            s1.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            s2.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            s3.push_back(s);
        }
        // Sort this 3 rows.
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        sort(s3.begin(), s3.end());

        // score for 1st person
        for (int i = 0; i < n; i++)
        {
            bool ok = (binary_search(s2.begin(), s2.end(), s1[i]));
            bool ok2 = (binary_search(s3.begin(), s3.end(), s1[i]));
            if ((ok) == true && (ok2) == true)
                score1.push_back(3);
            else if ((ok) == true || (ok2) == true)
                score1.push_back(2);
            else
                score1.push_back(1);
        }

        // score for 2nd person
        for (int i = 0; i < n; i++)
        {
            bool ok = (binary_search(s1.begin(), s1.end(), s2[i]));
            bool ok2 = (binary_search(s3.begin(), s3.end(), s2[i]));
            if ((ok) == true && (ok2) == true)
                score2.push_back(3);
            else if ((ok) == true || (ok2) == true)
                score2.push_back(2);
            else
                score2.push_back(1);
        }

        // score for 3rd person
        for (int i = 0; i < n; i++)
        {
            int l = 1;
            bool ok = (binary_search(s1.begin(), s1.end(), s3[i]));
            bool ok2 = (binary_search(s2.begin(), s2.end(), s3[i]));
            if ((ok) == true && (ok2) == true)
                score3.push_back(3);
            else if ((ok) == true || (ok2) == true)
                score3.push_back(2);
            else
                score3.push_back(1);
        }

        int x = 0, y = 0, z = 0;
        // final score
        for (int i = 0; i < n; i++)
        {
            if (score1[i] == 3)
                x += 0;
            if (score1[i] == 2)
                x++;
            if (score1[i] == 1)
                x += 3;

            if (score2[i] == 3)
                y += 0;
            if (score2[i] == 2)
                y++;
            if (score2[i] == 1)
                y += 3;

            if (score3[i] == 3)
                z += 0;
            if (score3[i] == 2)
                z++;
            if (score3[i] == 1)
                z += 3;
        }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}