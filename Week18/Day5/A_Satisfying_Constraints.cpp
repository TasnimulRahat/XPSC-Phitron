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
    int n;
    cin >> n;
    map<int, bool> ans;
    int lowerlimit = -1;
    int upperlimit = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int command, number;
        cin >> command >> number;
        if (command == 1)
        {
            lowerlimit = max(lowerlimit, number);
        }
        if (command == 2)
        {
            upperlimit = min(upperlimit, number);
        }
        if (command == 3)
        {
            ans[number] = false;
        }
    }
    if (lowerlimit > upperlimit)
    {
        cout << 0 << endl;
        return;
    }
    int answer = upperlimit - lowerlimit + 1;
    // cout << endl;
    for (auto [a, b] : ans)
    {

        // cout << a << " ";
        if (a >= lowerlimit && a <= upperlimit)
        {
            answer--;
        }
    }
    // cout << endl;
    cout << answer << endl;
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
