#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> v;
    while (a--)
    {
        int x;
        cin >> x;
        if (x != b)
        {
            v.push_back(x);
        }
    }
    for (int k : v)
    {
        cout << k << " ";
    }

    return 0;
}
