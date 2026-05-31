#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        long long M;
        cin >> N >> M;

        // Condition for existence: N % 6 == 2 or N % 6 == 5
        int r = N % 6;
        if (r == 2 || r == 5) {
            // Build the array using x = 1
            for (int i = 1; i <= N; ++i) {
                int m = i % 6;
                long long val;
                if (m == 1 || m == 2) {
                    val = 1 % M;          // 1 (always < M because M >= 2)
                } else if (m == 3 || m == 0) {
                    val = 0;
                } else { // m == 4 or m == 5
                    val = M - 1;          // -1 mod M
                }
                cout << val << (i == N ? '\n' : ' ');
            }
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}