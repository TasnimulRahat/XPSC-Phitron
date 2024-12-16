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
        int l;
        cin >> l;
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < l; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v2.begin(), v2.end());
        if (v2 == v1)
        {
            cout << "Yes" << endl;
        }

        else
        {
            int cnt = 0;
            if (v1.back() > v1.front())
            {
                cnt++;
            }

            for (int i = 0; i < l - 1; i++)
            {
                if (v1[i + 1] < v1[i])
                {
                    cnt++;
                }
            }

            if (cnt == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}