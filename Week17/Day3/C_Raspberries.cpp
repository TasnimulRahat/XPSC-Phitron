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
    int arr[a];
    int ans = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    if (b == 4)
    {
        // int evcnt = 0, onecnt = 0, threecnt = 0, fourdivcnt = 0;
        // for (int i = 0; i < a; i++)
        // {
        //     if (arr[i] % 2 == 0)
        //     {
        //         evcnt++;
        //         if (arr[i] % 4 == 0)
        //         {
        //             fourdivcnt++;
        //         }
        //     }

        //     else if (arr[i] == 3)
        //     {
        //         threecnt++;
        //     }
        //     else if (arr[i] == 1)
        //     {
        //         onecnt++;
        //     }
        // }
        // if (fourdivcnt != 0)
        // {
        //     cout << 0 << endl;
        // }

        // else if (evcnt >= 2)
        // {
        //     cout << 0 << endl;
        // }
        // else if (evcnt == 1)
        // {
        //     if (threecnt != 0 || onecnt != 0)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else
        //         cout << 2 << endl;
        // }
        // else if (evcnt == 0)
        // {
        //     if (threecnt != 0)
        //     {
        //         cout << 1 << endl;
        //     }
        //     else if (onecnt >= 2)
        //     {
        //         cout << 2 << endl;
        //     }
        //     else
        //         cout << 3 << endl;
        // }
        int ev = 0, od = 0, onediff = 0, threediff = 0, fordiv = 0;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] % 2 == 0)
            {
                ev++;
                if (arr[i] % 4 == 0)
                {
                    fordiv++;
                }
            }
            else
            {
                od++;
                if (arr[i] % 4 == 1)
                {
                    threediff++;
                }
                if (arr[i] % 4 == 3)
                {
                    onediff++;
                }
            }
        }
        if (fordiv != 0)
        {
            cout << 0 << endl;
        }
        else if (ev >= 2)
        {
            cout << 0 << endl;
        }
        else if (ev == 1)
        {
            if (od != 0)
            {
                cout << 1 << endl;
            }
            else
                cout << 2 << endl;
        }
        else
        {
            if (onediff != 0)
            {
                cout << 1 << endl;
            }
            else if (threediff >= 2)
            {
                cout << 2 << endl;
            }
            else if (od >= 2)
            {
                cout << 2 << endl;
            }

            else
            {
                cout << 3 << endl;
            }
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            int k = arr[i];
            if (k > b)
            {
                if (k % b == 0)
                {
                    ans = 0;
                }
                else
                {
                    int z = ((k / b) + 1) * b;
                    ans = min(ans, z - k);
                }
            }
            else
            {
                ans = min(ans, b - k);
            }
        }

        cout << ans << endl;
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
