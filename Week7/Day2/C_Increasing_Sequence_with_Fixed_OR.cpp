#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        list<ll> mylist;
        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                ll val = n - (1LL << k);
                if (val > 0)
                {
                    mylist.push_front(val);
                }
            }
        }
        mylist.push_back(n);
        cout << mylist.size() << '\n';
        for (auto x : mylist)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
