#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        bool ans = true;
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            v1[i] -= v2[i];
            if (v1[i] < 0 && v2[i] != 0)
            {
                ans = false;
                break;
            }
        }
        int ref = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > ref)
            {
                ref = v1[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != ref && v2[i] != 0)
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
