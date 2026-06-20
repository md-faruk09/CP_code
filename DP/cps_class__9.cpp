void Solve()

int n, W; // Items count, capacity
cin >> n >> W;

vector<11> dp(W +1,-1);
dp[0] = 0;

for (int i = 0; i < n; i++) {
11 wt, vl;
cin >> wt >> v1;
for (int j= W; j >= 0; j -- ) {
if (j + wt > w) // Overflow
continue;
dp[j + wt]= max(dp[j+wt], dp[j] +vl);

}

cout <<* max_element(dp.begin(), dp.end()) << '\n';

}

}

------------------------------------
void Solve() 
 int n, w; cin >> n >> W; 
  vector<11> dp(n * 1000 +1, LLONG_MAX); 
  dp[0] = 0;
   for (int i = @; i < n; i++) {
     11 wt, vl; cin >> wt >> v1;
      for (int j = n * 1000; j >= 0; j -- ) 
      { 
        if (j + vl > n * 1000) continue; 
        if (dp[j] == LLONG_MAX) continue; 
        dp[j + v1] = min(dp[j +vl], dp[j] +wt);
          11 ans = 0; 
          for (int j = n * 1000; j >= 0; j -- ) {
             if (dp[j] <= w) {
                 ans = j; break;
                   cout << ans << '\n';

-------------------------------------
Class-09: Introduction to 0/1 Knapsack
🎯 Discussed Topics:

Knapsack Types
Solving with DP
1D DP
🎯 Discussed Topics:

atcoder.jp
atcoder.jp
🎯 Additional Resources:

geeksforgeeks.org
geeksforgeeks.org
atcoder.jp
atcoder.jp
