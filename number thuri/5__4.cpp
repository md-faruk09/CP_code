#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

//Prime Factorization for each number from 1 to n using harmonic series

const int N=1e6+5;
vll primefactors[N];
vector<bool>isprime(N,true);
void harmonic(){
    for(int i=2;i<N;i++){
        if(isprime[i]==false)continue;
        primefactors[i].push_back(i);
        for(int j=i+i;j<N;j+=i){
            isprime[j]=false;
            int x=j;
            while(x%i==0){
                x/=i;
                primefactors[j].push_back(i);

            }
        }
    }
}
void solve(){
   
    int n;cin>>n;
    frg(x,primefactors[n])cout<<x<<" ";nf;
    
}
int32_t main() {
    fastio;
    harmonic();
    int t=1;
    while(t--)solve();
    return 0;
}