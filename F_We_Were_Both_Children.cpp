/* IN THE NAME OF ALMIGHTY ALLAH
____  ___.__ .__                          _________ .__               .___           
\   \/  /|__||  | ___  __  ____ _______   \_   _   \|  |  _____     __| _/ ____      
 \     / |  ||  | \  \/ /_/ __ \\_  __ \   |  | ) _/|  |  \__  \   / __ |_/ __ \     
 /     \ |  ||  |__\   / \  ___/ |  | \/   |  |_)  \|  |__ / __ \_/ /_/ |\  ___/     
/___/\  \|__||____/ \_/   \___  >|__|      |_____  /|____/(____  /\____ | \___  >    
      \_/                     \/                 \/            \/      \/     \/     
*/

#include <bits/stdc++.h>
using namespace std;

#define fixed(n)                    fixed << setprecision(n)
#define ceil_(n, m)                 (((n) + (m) - 1) / (m))
#define add_mod(a, b, m)            (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m)            (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m)            (((a % m) * (b % m)) % m)

#define ll                          long long
#define vi                          vector<int>
#define vll                         vector<ll>
#define vpi                         vector<pair<int, int> >
#define vpll                        vector<pair<ll, ll> >
#define mi                          map<int, int>

#define nl                          '\n'
#define pb                          push_back

#define ys                          cout << "YES"
#define no                          cout << "NO"
#define sz(x)                       int(x.size())
#define all(x)                      (x).begin(),(x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define Sort(x)                     sort(all((x)))
#define Rsort(x)                    sort(rall((x)))

ll gcd(ll a,ll b){ return b?gcd(b,a%b):a; }
ll lcm(ll a,ll b){ return (a/gcd(a,b))*b; }

constexpr int INF = 1 << 30, M = 1e9 + 7;
constexpr ll LINF = 1LL << 62;

void XB()
{
    int n; cin >> n;
    vi a(n);
    for (auto &u : a) cin >> u;
    
    mi tr;
    int an = 0;

    for(auto u : a) {
        if (u == 1) an++;
        else {
            int x = u;
            while(u <= n) {
                tr[u]++;
                u += x;
            }
        }
    }

    int mx = 0;
    for(auto u : tr) {
        mx = max(mx, u.second);
    }

    cout << mx+an << nl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(0);
    
    int T = 1;
    cin >> T;
    while (T--) { XB(); }
}
/*
-------------------------------------
  Coded by : Sameeha Zahan Mridula
-------------------------------------
*/