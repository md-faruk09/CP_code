#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N) for (int i = 0; i < N; i++)
#define frg(x, a) for (auto x : a)
#define vll vector<long long>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

bool ok(vector<int> &a, int mid, int mi)
{
    return (a[mid] <= mi);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(all(a));
    int q;
    cin >> q;
    while (q--)
    {
        int mi;
        cin >> mi;
        int l = 0, r = n - 1;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(a, mid, mi))
            {
                ans = mid+1;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << nl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}