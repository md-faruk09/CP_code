
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
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
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)
int N=10000000;
bool isprime[(int)1000000];


void solve(){
    for(int i=1;i<=N ;i++)isprime[i]=true;

    for(int i=3; i*i<=N ;i+=2){
      if(isprime[i]==true)
        for(int j=i*3; j<=N ; j+=i*2){
            isprime[j]=false;
        }
    }
    vll prime;
    prime.push_back(2);
    for(int i=3;i<=N ;i+=2)
        if(isprime[i]==true)
            prime.push_back(i);  

    int n;cin>>n;
    for(int i=0;i<n;i++){
        cout<<prime[i]*prime[i+1]<<' ';
    }nf;

    
}

int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}



