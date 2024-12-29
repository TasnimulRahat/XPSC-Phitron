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
    // cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < q; i++)
        {
            int key, l = 0, r = n - 1;
            cin >> key;
            int mididx;
            bool k = false;
            while (l <= r)
            {
                mididx = (l + r) / 2;
                if (key == v[mididx])
                {
                    k = true;
                    break;
                }
                else if (key < v[mididx])
                {
                    r = mididx - 1;
                }
                else
                {
                    l = mididx + 1;
                }
            }
            if (k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
