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
    int l;
    cin >> l;
    int arr[l + 1];
    bool ok = false;

    for (int i = 1; i <= l; i++)
    {
        cin >> arr[i];
    }
    int curr = arr[1];

    for (int i = 2; i <= l; i++)
    {
        if (arr[i] != arr[1])
        {
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        int city = -1;
        for (int i = 1; i <= l; i++)
        {
            if (arr[i] != arr[1])
            {
                cout << 1 << " " << i << endl;
                city = i;
            }
        }
        for (int i = 2; i <= l; i++)
        {
            if (arr[i] == arr[1])
            {
                cout << city << " " << i << endl;
                        }
        }
        // cout << endl;
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
