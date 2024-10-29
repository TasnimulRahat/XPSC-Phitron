#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    list<int> mylist;
    int s = 0, d = 0;
    int k = n;
    while (n--)
    {
        int x;
        cin >> x;
        mylist.push_back(x);
    }
    for (int i = 1; i <= k; i++)
    {
        if (i % 2 == 1)
        {
            if (mylist.front() > mylist.back())
            {
                s += mylist.front();
                mylist.pop_front();
            }
            else
            {
                s += mylist.back();
                mylist.pop_back();
            }
        }
        else
        {
            if (mylist.front() > mylist.back())
            {
                d += mylist.front();
                mylist.pop_front();
            }
            else
            {
                d += mylist.back();
                mylist.pop_back();
            }
        }
    }
    cout << s << " " << d;
    return 0;
}
