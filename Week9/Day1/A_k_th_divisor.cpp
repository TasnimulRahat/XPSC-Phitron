#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b;
    cin >> a >> b;
    long long int n = sqrt(a);
    list<long long int> mylist;
    for (long long int i = n; i > 0; i--)
    {
        if (a % i == 0)
        {
            mylist.push_front(i);
            if (a / i != i)
            {
                mylist.push_back(a / i);
            }
        }
    }
    if (b > mylist.size())
    {
        cout << -1;
    }
    else
    {
        b--;
        while (b--)
        {
            mylist.pop_front();
        }
        cout << mylist.front();
    }

    return 0;
}
