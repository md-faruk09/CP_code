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


void solve()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (char c : s)
        mp[c]++;

    int odd = 0;
    char odd_char;

    for (auto it : mp)
    {
        if (it.second % 2)
        {
            odd++;
            odd_char = it.first;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return ;
    }

    string left = "", mid = "";

    for (auto it : mp)
    {
        left += string(it.second / 2, it.first);
        if (it.second % 2)
            mid += it.first;
    }

    string right = left;
    reverse(right.begin(), right.end());

    cout << left + mid + right;
}
int32_t main()
{

    int t = 1;

    while (t--)
        solve();
    return 0;
}