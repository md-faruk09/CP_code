
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
#define nf cout<<endl

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
int h[1005];
int poth[1005];
void path(int src){
    queue<int>q;
    q.push(src);
    ok[src]=true;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        
        for(auto x:v[p]){
            if(!ok[x]){
                q.push(x);
                poth[x]=p;
                ok[x]=true;
            }
        }

    }
}

void traking(int src){
    queue<int>q;
    q.push(src);
    h[src]=0;
    ok[src]=true;
    while(!q.empty()){
        int p=q.front();
        q.pop();
       // cout<<p <<' ';
        for(auto x:v[p]){
            if(!ok[x]){
                q.push(x);
                h[x]=h[p]+1;
                //cout<<h[x];
                ok[x]=true;
            }
        }
    }
}



void output(int src){
    queue<int>q;
    q.push(src);
    ok[src]=true;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        cout<<p <<' ';
        for(auto x:v[p]){
            if(!ok[x]){
                q.push(x);
                ok[x]=true;
            }
        }
    }
}
void solve(){
    iint(n);
    iint(e);
    while(e--){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src=7;
    output(src);
    memset(ok,false,sizeof(ok));
    traking(src);
    nf;
    for(int i=0 ;i<n;i++){
        cout<<i<<"-> "<<h[i]<<nl;

    }
    memset(ok,false,sizeof(ok));
    memset(poth,-1,sizeof(poth));

    path(src);
    iint(met);
    cout<<nl<<met<<nl;
    vll dd;
    while(met!=-1){
        dd.push_back(met);
        met=poth[met];
    }
    reverse(all(dd));nf;
    for(auto x:dd)cout<<x<<'-> ';
   
}
int32_t main() {
    fastio;
 
    int t=1;
    memset(ok,false,sizeof(ok));
    while(t--)solve();
    

    return 0;
}