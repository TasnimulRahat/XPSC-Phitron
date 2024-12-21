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
        if (n == 2)
        {
            int a, b;
            cin >> a >> b;
            cout << abs(a - b);
            continue;
        }

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(abs(arr[0] - arr[1]));
        pq.push(abs(arr[n - 1] - arr[n - 2]));
        for (int i = 1; i < n - 1; i++)
        {
            pq.push(max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])));
        }
        cout << pq.top() << endl;
    }

    return 0;
}
