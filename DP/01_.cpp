#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>>a(n*n,vector<int>(n*n,0));
   // upper half
    for(int i = 0; i < n; i++){
        for(int j = n - i - 1; j < i + n; j += 2){
            cin >> a[i][j];
        }
    }

// lower half
    for(int i = n;i<2 * n - 1; i++) {
        int row = 2 * n - i - 2;
        for(int j = n - row - 1; j < row + n; j += 2)
            cin >> a[i][j];
    }   
    int mx=-1;
    vector<vector<int>> dp(2*n,vector<int>(2*n,0));
    for(int i=1;i<2*n;i++){
        for(int j=0;j<2*n-2;j++){
            dp[i][j]+=a[i][j];
            dp[i][j]+=a[i-1][j+1];
            if(j>0)dp[i][j]+=a[i-1][j-1];
            mx=max(mx,dp[i][j]);

        }
    }

    // for(int i=0;i<2*n;i++){
    //     for(int j=0;j<2*n;j++)
    //         if(dp[i][j]!=0)cout<<dp[i][j]<<' ';
    //     cout<<'\n';  
    // }
    // cout<<*max_element(dp.begin(),dp.end());
    cout<<mx<<'\n';
    return 0;
}