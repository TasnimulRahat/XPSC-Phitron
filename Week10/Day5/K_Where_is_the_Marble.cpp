#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1;; i++)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        cout << "CASE# " << i << ':' << endl;
        vector<int> st;
        while (n--)
        {
            int x;
            cin >> x;
            st.push_back(x);
        }
        sort(st.begin(), st.end());
        while (q--)
        {
            int x;
            cin >> x;
            if (lower_bound(st.begin(), st.end(), x) != st.end() && *lower_bound(st.begin(), st.end(), x) == x)
            {
                auto k = (lower_bound(st.begin(), st.end(), x) - st.begin());
                cout << x << " found at " << k + 1 << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
    }

    return 0;
}
