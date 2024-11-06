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
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : cnt)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }

            int o = pq.top();
            pq.pop();
            int q = pq.top();
            pq.pop();
            o--;
            q--;
            if (o >= 1)
            {
                pq.push(o);
            }
            if (q >= 1)
            {
                pq.push(q);
            }
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}
