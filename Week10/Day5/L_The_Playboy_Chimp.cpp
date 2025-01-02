#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    {
        int n, q;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        while (n--)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(-x);
        }
        cin >> q;
        reverse(v2.begin(), v2.end());
        while (q--)
        {
            int x;
            cin >> x;
            if (upper_bound(v2.begin(), v2.end(), -x) != v2.end())
            {
                cout << -(*upper_bound(v2.begin(), v2.end(), -x)) << " ";
            }
            else
            {
                cout << 'X' << " ";
            }

            if (upper_bound(v1.begin(), v1.end(), x) != v1.end())
            {
                cout << *upper_bound(v1.begin(), v1.end(), x) << endl;
            }
            else
            {
                cout << 'X' << endl;
            }
        }
    }

    return 0;
}
