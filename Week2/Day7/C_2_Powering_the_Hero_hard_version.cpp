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
        int k;
        cin >> k;
        priority_queue<int> pq;
        long long int teampow = 0;
        while (k--)
        {
            int x;
            cin >> x;
            if (x == 0 && !pq.empty())
            {
                teampow += pq.top();
                pq.pop();
            }
            else
            {
                pq.push(x);
            }
        }
        cout << teampow << endl;
    }

    return 0;
}
