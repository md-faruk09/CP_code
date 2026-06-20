#include <bits/stdc++.h>
using namespace std;

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    if (n == 10)
    {
        cout << "-1" << endl;
        return;
    }

    int a = (n % 12 == 10) ? 22 : n % 12;

    cout << a << ' ' << n - a << endl;
}