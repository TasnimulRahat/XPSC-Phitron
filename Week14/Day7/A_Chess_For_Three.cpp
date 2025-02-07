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

    int a, b, c;
    cin >> a >> b >> c;
    priority_queue<int> pq;
    if (a > 0)
    {
        pq.push(a);
    }
    if (b > 0)
    {
        pq.push(b);
    }
    if (c > 0)
    {
        pq.push(c);
    }
    int ans = 0;

    while (pq.size() > 1)
    {
        if (pq.size() == 3)
        {
            int n1 = pq.top();
            pq.pop();
            int n2 = pq.top();
            pq.pop();
            int x = min(n1 - pq.top() + 1, n2 - pq.top() + 1);
            ans += x;
            n1 -= x;
            n2 -= x;
            if (n1 > 0)
            {
                pq.push(n1);
            }
            if (n2 > 0)
            {
                pq.push(n2);
            }
        }
        else
        {
            if (c == 10)
            {
                // cout << "tjdo" << pq.top() << " ";
            }

            int x = pq.top();
            pq.pop();
            ans += pq.top();
            int y = pq.top();
            pq.pop();
            x -= y;

            {
                pq.push(x);
            }
        }
    }
    if (pq.size() == 0 || (pq.size() == 1 && pq.top() % 2 == 0))
    {
        cout << ans << endl;
    }
    else
        cout << -1 << endl;
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
