
// /*    


// ████████████████████████████████████████████████████
// ██                                                ██
// ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
// ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
// ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
// ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
// ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
// ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
// ████████████████████████████████████████████████████

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"

// #define int long long
// #define uint unsigned long long int

// #define cy cout << "YES\n"
// #define cn cout << "NO\n"

// #define fr(N)for(int i=0;i<N;i++)
// #define frs(i,s,n) for(int i=s;i<(n);i++)
// #define fr1(i,n) for(int i=1;i <= (n);i++)
// #define vin(a) for(auto &i:a)cin >> i
// #define frg(x,a) for(auto x:a)

// #define vll vector<long long>
// #define vec(v,n) vector<int> v(n)
// #define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

// #define iint(x) int x; cin >> x
// #define ichar(x) char x; cin >> x
// #define istring(x) string x; cin>>x
// #define istrings(x) string x; geline(cin,x)
// #define take(x) int x; cin >> x; while(x--)
// #define intput(x) int x;cin>>x;

// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())

// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sz(v)(int)(v.size())

// #define popcnt(x) __builtin_popcount11(x)
// #define clz(x) __builtin_clzll(x)
// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)
// vll v[1005];
// bool ok[1005];
// int level[1005];

// void traking(int src){
//     queue<int>q;
//     q.push(src);
//     ok[src]=true;
//     level[src]=0;
//     while(!q.empty()){
//         int par=q.front();
//         q.pop();
//         for(auto x:v[par]){
//             if(!ok[x]){
//                 q.push(x);
//                 ok[x]=true;
//                 level[x]=level[par]+1;
//             }
//         }
//     }

// }

// void solve(){
//     int n,e;cin>>n>>e;
//     while(e--){
//         int a,b;cin>>a>>b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     memset(ok,false,sizeof(ok));
//     memset(level,-1,sizeof(level));
//     iint(src);
//     traking(src);
//     iint(des);
//     if(ok[des]){
//         cy;
//         cout<<level[des]<<nl;
//     }
//     else cn;
// }
// int32_t main() {
//     fastio;
 
//     int t=1;
    
//     while(t--)solve();
//     return 0;
// }


/*    


████████████████████████████████████████████████████
██                                                ██
██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
████████████████████████████████████████████████████

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"

#define int long long
#define uint unsigned long long int

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(int i=1;i <= (n);i++)
#define vin(a) for(auto &i:a)cin >> i
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define iint(x) int x; cin >> x
#define ichar(x) char x; cin >> x
#define istring(x) string x; cin>>x
#define istrings(x) string x; geline(cin,x)
#define take(x) int x; cin >> x; while(x--)
#define intput(x) int x;cin>>x;

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)
vll v[1005];
bool ok[1005];
vll lev(10005,-1);

void sort_path(int src){
    queue<int>q;
    q.push(src);
    ok[src]=true;
    lev[src]=0;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(auto x:v[p]){
            if(!ok[x]){
                q.push(x);
                ok[x]=true;
                lev[x]=lev[p]+1;
            }   
        }
    }
}
void solve(){
    int n,e;cin>>n>>e;
    fr(e){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a); 
    }
    memset(ok,false,sizeof(ok));
    int src;cin>>src;
    sort_path(src);
    iint(x);
    cout<<lev[x]<<nl;

}
int32_t main() {
    fastio;
 
    int t=1;
    
    while(t--)solve();
    return 0;
}