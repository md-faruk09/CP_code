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

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> order;
    order.reserve(K);
    int round = 0;
    while ((int)order.size() < K)
    {
        if (round % 2 == 0)
        {
            for (int p = 0; p < N && (int)order.size() < K; p++)
            {
                order.push_back(p);
            }
        }
        else
        {
            for (int p = N - 1; p >= 0 && (int)order.size() < K; p--)
            {
                order.push_back(p);
            }
        }
        round++;
    }

    vector<int> deck(N, 0);

    for (int i = 0; i < K; i++)
    {
        deck[order[i]] += (K - i);
    }

    cout << *max_element(all(deck));
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << nl;
    }

    return 0;
}
