#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        int l;
        cin >> l;
        vector<int> v(l);
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[l / 2] << endl;
    }
    return 0;
}
