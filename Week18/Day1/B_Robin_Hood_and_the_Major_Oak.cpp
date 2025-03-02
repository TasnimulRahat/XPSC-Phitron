#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b % 4 == 0)
            {
                cout << "YES" << endl;
            }
            else if ((b + 1) % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else if ((b + 2) % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else if ((b + 3) % 4 == 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (b % 4 == 0)
            {
                cout << "YES" << endl;
            }
            else if ((b + 1) % 4 == 0)
            {
                cout << "YES" << endl;
            }
            else if ((b + 2) % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else if ((b + 3) % 4 == 0)
            {
                cout << "NO" << endl;
            }
        }
    }
}
