#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

vector<ll> gen(ll a, ll b)
{
    return { b, a, a, b, a, b, b, a };
}
vector<ll> gen(ll a, ll b, ll c)
{
    return { a, a, b, a, b, c, a, c, b, b, c, c };
}

void Solve()
{
    // for 2: 2 1 1 2 1 2 2 1
    // for 3: 1 1 2 1 2 3 1 3 2 2 3 3
    ll n;
    cin >> n;
    vector<ll> ans;
    if (n & 1) {
        vector<ll> tmp = gen(n, n - 1, n - 2);
        for (auto& it : tmp)
            ans.push_back(it);
        n -= 3;
    }
    for (int i = 1; i <= n; i += 2) {
        vector<ll> tmp = gen(i, i + 1);
        for (auto& it : tmp)
            ans.push_back(it);
    }
    for (auto& it : ans)
        cout << it << " ";
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)
