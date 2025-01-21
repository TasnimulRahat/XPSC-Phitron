#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    // tc = 1;
    while (tc--)
    {
        int l1, l2;
        cin >> l1 >> l2;
        string k1, k2;
        cin >> k1 >> k2;

        int ans = 0;
        stack<char> st;
        for (int i = k2.size() - 1; i >= 0; i--)
        {
            st.push(k2[i]);
        }
        int i = 0;
        while (!st.empty() && i < k1.size())
        {
            if (k1[i] == st.top())
            {
                st.pop();
                i++;
                ans++;
            }
            else
            {
                st.pop();
            }
        }
        cout << ans << endl;
    }
    return 0;
}
