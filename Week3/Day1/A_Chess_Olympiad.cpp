#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int win, loss, draw;
    cin >> win >> draw >> loss;
    int remain = 4 - win - draw - loss;
    if (remain + win > loss)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
