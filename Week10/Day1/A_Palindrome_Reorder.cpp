#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int lettercount[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        lettercount[s[i] - 'A']++;
    }
    int oddcnt = 0;
    int oddidx = -1;
    bool k = true;
    for (int i = 0; i < 26; i++)
    {
        if (lettercount[i] % 2 == 1)
        {
            oddcnt++;
            oddidx = i;
        }
    }
    list<char> ans;

    if (oddcnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    if (oddcnt == 1)
    {
        char k = oddidx + 'A';
        while (lettercount[oddidx] != 0)
        {
            ans.push_back(k);
            lettercount[oddidx]--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < lettercount[i] / 2; j++)
        {
            char k = i + 'A';
            ans.push_back(k);
            ans.push_front(k);
        }
    }
    for (char k : ans)
    {
        cout << k;
    }

    return 0;
}
