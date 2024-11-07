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
        int n, q;
        cin >> n >> q;

        map<int, int> chotodik;
        map<int, int> borodik;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (chotodik[x] == 0)
            {
                chotodik[x] = i;
            }

            borodik[x] = i;
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (chotodik[a] != 0 && borodik[b] != 0 && chotodik[a] < borodik[b])
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
