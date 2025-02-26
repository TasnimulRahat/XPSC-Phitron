#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define endl '\n'

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MOD = 1e9 + 7;

void solve()
{
    int a, b;
    cin >> a >> b;
    vector<int> v;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (v.front() == v.back())
    {
        int n = 2;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] == v[0])
            {
                n++;
            }
        }
        if (n >= b)
        {
            YES return;
        }
        else
            NO
    }
    else
    {
        int s = v.front();
        int fcnt = 1;
        int lasvld;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == s)
            {
                fcnt++;
                lasvld = i;
            }
            if (fcnt == b)
            {
                break;
            }
        }
        if (fcnt < b)
        {
            NO return;
        }
        s = v.back();
        fcnt = 1;
        for (int i = v.size() - 2; i > lasvld; i--)
        {
            if (v[i] == s)
            {
                fcnt++;
            }
        }
        if (fcnt < b)
        {
            NO
        }
        else
            YES
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    tc = 1;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}
