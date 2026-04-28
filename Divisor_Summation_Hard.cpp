#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
int main(){
   ios_base:: sync_with_stdio(0);cin.tie(0);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        ll ans=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                ans+=i;
                if(n/i!=i)ans+=n/i;
            }
        }
        cout<<ans-n<<'\n';
    }
    
}




