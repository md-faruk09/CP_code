#include <bits/stdc++.h>
using namespace std;
 
#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

int cost(int num, int v, int x){
    if(v >= num) return v - num;

    int ops = 0;

    while(num > v){
        int nxt = num / x;

        // if(nxt <= v){
        //     ops += min(num - v,
        //                1 + (v - nxt));
        //     return ops;
        // }

        num = nxt;
        ops++;
    }

    ops += v - num;
    return ops;
}

void solve(){
    int a, b, x;
    cin >> a >> b >> x;

    vector<int> v;

    for(int tmp = a; ; tmp /= x){
        v.push_back(tmp);
        if(tmp == 0 || tmp / x == tmp) break;
    }

    for(int tmp = b; ; tmp /= x){
        v.push_back(tmp);
        if(tmp == 0 || tmp / x == tmp) break;
    }

    int ans = LLONG_MAX;

    frg(val, v){
        ans = min(ans,
                  cost(a, val, x) + cost(b, val, x));
    }

    cout << ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--){
        solve();
        cout << nl;
    }

    return 0;
}