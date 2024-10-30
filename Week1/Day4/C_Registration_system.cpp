#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << endl;
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }

    return 0;
}
