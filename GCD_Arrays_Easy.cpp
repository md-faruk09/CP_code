#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 998244353;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
    long long N;
    int M;
    cin >> N >> M;

    vector<int> primes;
    for (int i = 2; i <= M; i++) {
        bool ok = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ok = false;
                break;
            }
        }
        if (ok) primes.push_back(i);
    }

    long long ans = 0;

    for (int p : primes) {
        for (int q : primes) {
            if (p == q) continue;

            long long L = 0, R = 0, Mid = 0;

            for (int x = 1; x <= M; x++) {
                if (x % p == 0 && x % q != 0) L++;
                if (x % q == 0 && x % p != 0) R++;
                if (x % (p * q) == 0) Mid++;
            }

            ans = (ans + L * R % MOD * binpow(Mid, N - 2)) % MOD;
        }
    }

    cout << ans % MOD << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();

    return 0;
}