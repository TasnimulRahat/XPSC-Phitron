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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 0; i < q; i++)
        {
            int key;
            cin >> key;
            int l = 0, r = n - 1, ans = -1;
            int mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (key >= arr[mid])
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << ans + 1 << endl;
        }
    }
    return 0;
}
