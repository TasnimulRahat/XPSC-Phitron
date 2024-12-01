#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s2, s1;
        cin >> s1 >> s2;
        int currmins = s2 / 2 + s2 % 2;
        int leftspace = currmins * 15 - s2 * 4;
        if (s1 <= leftspace)
        {
            cout << currmins << endl;
        }
        else
        {
            float lefts1 = s1 - leftspace;
            cout << currmins + ceil(lefts1 / 15.0) << endl;
        }
    }

    return 0;
}
