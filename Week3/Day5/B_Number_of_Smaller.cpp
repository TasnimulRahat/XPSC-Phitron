#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> v1(a), v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }
    int l = 0, r = 0, cnt = 0;
    while (r < b)
    {
        if (l < a && v1[l] < v2[r])
        {
            cnt++;
            l++;
        }
        else
        {
            r++;
            cout << cnt << " ";
        }
    }

    return 0;
}
