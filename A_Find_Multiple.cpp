
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














void solve(){
    string a,b;cin>>a>>b;
    if(a=="0" && b=="0"){cout<<0;return;}
    string s="";
    int n=abs((int)(a.size()-b.size()));
    for(int i=0;i<n;i++){
        s+="0";
    }
    if(a.size()> b.size())b=s+b;
    else a=s+a;
    //cout<<a<<' '<<b;
    int yy=0;
    string ans="";
    for(int i=a.size()-1;i>=0;i--){
        int ax=a[i]-'0';
        int bx=b[i]-'0';
        int xx=ax+bx+yy;
        ans+=to_string(xx%10);
        yy=xx/10;
    
    }
    if(yy)ans+=to_string(yy);
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='0' && i==ans.size()-1){cout<<0;return;}
        if(ans[i]=='0')continue;
        for( ;i<ans.size();i++)
        cout<<ans[i];
        return;
    }
}
int32_t main() {
    fastio;
 
    int t=1;
  
    
    while(t--)solve();
    return 0;
}






















































//  Fast IO
// ios::sync_with_stdio(false);
// cin.tie(nullptr);
// 2 CP Math Functions
// sqrt(n) // square root
// pow(a,b) // aˆb
// abs(x)
// // absolute value
// ceil(x) // upper integer
// floor(x) // lower integer
// 3 Stress Testing
// 3.1 brute.cpp
// int main(){
// }
// 3.2 sol.cpp
// int main(){
// }
// 3.3 gen.cpp
// int main(){
// }
// 3.4 run.bat
// @echo off
// gen >in
// sol <in >out
// brute <in >ok
// fc out ok
// if ErrorLevel 1 exit /b
// run
// 4 STL
// 4.1 Vector
// 1.Declaration
// vector<int> v;
// vector<int> v(n);
// vector<int> v(n,0);
// 2.Input
// 16.Previous Permutation
// for(auto &x:v)
// cin >> x;
// 3.Output
// for(auto x:v)
// cout << x << ’ ’;
// 4.push_back / pop_back
// v.push_back(x);
// v.pop_back();
// 5.Size / Empty
// v.size()
// v.empty()
// 6.Clear / Resize / Assign
// v.clear();
// v.resize(n);
// v.assign(n,5);
// 7.Front / Back
// v.front()
// v.back()
// 8.Sort
// sort(v.begin(),v.end());
// sort(v.rbegin(),v.rend());
// 9.Reverse
// reverse(v.begin(),v.end());
// 10.Unique
// sort(v.begin(),v.end());
// v.erase( unique( v.begin(),v.end()),v.end
// →() );
// 11.Max / Min Element
// *max_element(v.begin(),v.end());
// *min_element(v.begin(),v.end());
// 12.Sum
// accumulate(v.begin(),v.end(),0LL);
// 13.Count
// count(v.begin(),v.end(),x);
// 14.lower_bound / upper_bound
// lower_bound(v.begin(),v.end(),x)-v.begin
// →();
// upper_bound(v.begin(),v.end(),x)-v.begin
// →();
// 14.Rotate
// rotate(v.begin(), v.begin()+k, v.end());
// →//bame k ghor rotate
// 15.Next Permutation
// next_permutation(v.begin(), v.end());
// prev_permutation(v.begin(), v.end());
// 4.2 String
// 1.Declaration
// string s;
// 2.Input
// cin >> s;
// getline(cin,s);
// 3.Length
// s.size()
// s.length()
// 4.Traversal
// for(char c:s)
// cout << c;
// 5.Concatenation
// string t=s+"abc";
// 6.Reverse
// reverse(s.begin(),s.end());
// 7.Sort
// sort(s.begin(),s.end());
// 8.Upper / Lower
// toupper(c)
// tolower(c)
// 9.Erase Part
// s.erase(pos,len);
// 10.Substring
// string t = s.substr(l, len);
// 11.Find
// s.find("abc");
// 12.Count Character
// count(s.begin(),s.end(),’a’);
// 13.to_string
// to_string(x);
// 14.String to Number
// int x = stoi(s);
// long long y = stoll(s);
// double z = stod(s);
// 15.next_permutation
// //sob permutation generate korte:
// sort(s.begin(),s.end());
// do{
// cout << s << ’\n’;
// }
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 5
// while(next_permutation(s.begin(),s.end())
// →);
// 16.prev_permutation
// prev_permutation(s.begin(),s.end());
// 17.All Substrings
// for(int i=0;i<n;i++){
// for(int j=1;j<=n-i;j++){
// cout<<s.substr(i,j)<<’\n’;
// }
// }
// 19.Remove Duplicate Characters
// sort(s.begin(),s.end());
// s.erase(unique(s.begin(),s.end()),s.end()
// →);
// 20.Substring Exists?
// if(s.find("abc") != string::npos)
// 21.Insert
// s.insert(pos, "abc");
// 22.Replace
// s.replace(pos, len, "xyz");
// 23.All Lowercase
// all_of(s.begin(), s.end(), ::islower);
// 24.All Uppercase
// all_of(s.begin(), s.end(), ::isupper);
// 25.All Digits
// all_of(s.begin(), s.end(), ::isdigit);
// 26.Split String (stringstream)
// string s="10 20 30";
// stringstream ss(s);
// int x;
// while(ss>>x)
// cout<<x<<’ ’;
// 4.3 Pair
// 1.Declaration
// pair<int,int> p;
// 2.Input
// cin >> p.first >> p.second;
// 3.make_pair
// make_pair(a,b);
// 4.Nested Pair
// pair<int,pair<int,int>> p;
// 5.Vector of Pair
// vector<pair<int,int>> v;
// 6.Sort Pair
// sort(v.begin(),v.end());
// 4.4 Set
// 1.Declaration
// set<int> st;
// 2.Insert/Erase
// st.insert(x);
// st.erase(x);
// auto it = st.find(5);
// st.erase(it);
// 3.Find /Count
// st.find(x);
// st.count(x);
// 4.lower_bound/ upper_bound
// st.lower_bound(x);
// st.upper_bound(x);
// 5.Previous Element
// auto it=st.lower_bound(x);
// if(it!=st.begin()){--it;
// cout << *it;
// }
// 6.Remove Smallest/Remove Largest
// st.erase(st.begin());
// auto it=prev(st.end());
// st.erase(it);
// 4.5 MultiSet
// 1.Declaration
// multiset<int> ms;
// 2.Insert
// ms.insert(x);
// 3.Erase One Occurrence
// ms.erase(ms.find(x));
// 4.Count
// ms.count(x);
// 5.Frequency using Bounds
// distance(ms.lower_bound(x),ms.upper_bound
// →(x));
// 6.Last Element Erase
// auto it = prev(ms.end());
// ms.erase(it);
// 7.Frequency via Range
// int freq =distance( ms.lower_bound(x), ms
// →.upper_bound(x) );
// 8.Merge (C++17)
// multiset<int> a,b;
// a.merge(b);
// 4.
// insert()
// find()
// count()
// erase(iterator)
// lower_bound()
// upper_bound()
// begin()
// rbegin()
// 4.6 Map
// 1.Declaration
// map<int,int> mp;
// 2.Insert
// mp[x]=5;
// 3.Frequency
// mp[x]++;
// 4.Traverse
// for(auto [x,y]:mp){
// cout << x<< ’ ’<< y<< ’\n’;
// }
// 5.Find
// mp.find(x);
// 6.Erase
// mp.erase(x);
// 7.Count
// mp.count(x)
// 8.Custom Order
// map<int,int,greater<int>> mp;
// 9.Erase by Iterator
// auto it = mp.find(x);
// if(it != mp.end()) mp.erase(it);
// 4.7 Deque
// 1.Declaration
// deque<int> dq;
// 2.Functions
// dq.push_front(x);
// dq.push_back(x);
// dq.pop_front();
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 6
// dq.pop_back();
// dq.front();
// dq.back();
// size()
// empty()
// 3.advanced level-a :
// 0-1 BFS
// Monotonic Queue
// Sliding Window Maximum
// 4.8 Stack
// 1.Declaration
// stack<int> st;
// 2.Functions
// st.push(x);
// st.pop();
// st.top();
// st.empty();
// st.size();
// 3.Valid Bracket
// stack<char> st;
// for(char c:s){
// if(c==’(’) st.push(c);
// else{
// if(st.empty()){
// cout<<"NO\n";
// return;
// }
// st.pop();
// }
// }
// cout <<(st.empty()?"YES":"NO");
// 4.9 Queue
// 1.Declaration
// queue<int> q;
// 2.Functions
// q.push(x);
// q.pop();
// q.front();
// q.empty();
// 4.10 Priority Queue
// 1.Max Heap
// priority_queue<int> pq;
// 2.Min Heap
// priority_queue<int,vector<int>,greater<
// →int>> pq;
// 3.Functions
// pq.push(x);
// pq.pop();
// pq.top();
// pq.empty();
// 5 Recursion
// 5.1 Factorial
// long long fact(long long n){
// if(n==0)
// return 1;
// return n*fact(n-1);
// }
// 5.2 Fibonacci
// long long fib(long long n){
// if(n<=1)
// return n;
// return fib(n-1)+fib(n-2);
// }
// 5.3 Binary Exponentiation
// long long power(
// long long a,
// long long b
// ){
// if(b==0)
// return 1;
// long long x=power(a,b/2);
// x=x*x;
// if(b&1)
// x*=a;
// return x;
// }
// 5.4 Coin Change Possible?
// bool possible(
// int idx,
// int sum
// ){
// if(sum==target)
// return true;
// if(idx==n || sum>target)
// return false;
// return possible(idx+1,sum+a[idx]) ||
// →possible( idx+1,sum);
// }
// 6 Binary Search
// 6.1 Binary Search and Integer Bisection
// bool ok(int m,int k, vll v){
// for(int i=0;i<v.size();i++){
// if(v[i]<m) k-=(m-v[i]);
// }
// return k>=0;
// }
// int l=0,r=1e10,ans=0;
// while(l<=r){
// int m=(l+r)/2;
// if(ok(m,k,v)){
// ans=m;
// l=m+1;
// }else{
// r=m-1;
// }
// }
// 6.2 Binary Search on Answer
// bool ok(int mid){
// }
// //---------
// int l=0;
// int r=1e18;
// int ans=0;
// while(l<=r){
// int mid=(l+r)/2;
// if(ok(mid)){
// ans=mid;
// l=mid+1;
// }
// else{
// r=mid-1;
// }
// }
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 8.2 Bit function
// 7
// 6.3 Fractional Binary Search
// bool ok(double mid){
// //condiation
// }
// //------------
// double l=0;
// double r=1e9;
// for(int i=0;i<100;i++){
// double mid=(l+r)/2;
// if(ok(mid))
// l=mid;
// else
// r=mid;
// }
// 7 Sliding Window/ Two Pointers
// 7.1 Fixed Size Window ( Fixed Size Win
// dow )
// int sum=0;
// for(int i=0;i<k;i++)
// sum+=a[i];
// int ans=sum;
// for(int i=k;i<n;i++){
// sum+=a[i];
// sum-=a[i-k];
// ans=max(ans,sum);
// }
// 7.2
// Variable Size Window ( Longest
// Subarray Sum K)
// int l=0,sum=0,ans=0;
// for(int r=0;r<n;r++){
// sum+=a[r];
// while(sum>k){
// sum-=a[l];
// l++;
// }
// ans=max(ans,r-l+1);
// }
// 7.3 Count DistinctK
// map<int,int> freq;
// int l=0;
// for(int r=0;r<n;r++){
// freq[a[r]]++;
// while(freq.size()>k){
// freq[a[l]]--;
// if(freq[a[l]]==0)
// freq.erase(a[l]);
// l++;
// }
// }
// 7.4 Longest Unique Substring
// map<char,int> freq;
// int l=0,ans=0;
// for(int r=0;r<s.size();r++){
// freq[s[r]]++;
// while(freq[s[r]]>1){
// freq[s[l]]--;
// l++;
// }
// ans=max(ans,r-l+1);
// }
// 7.5 Sliding Window Maximum
// deque<int> dq;
// for(int i=0;i<n;i++){
// while(!dq.empty() &&
// a[dq.back()] <= a[i])
// dq.pop_back();
// dq.push_back(i);
// while(!dq.empty() &&
// dq.front() <= i-k)
// dq.pop_front();
// if(i >= k-1)
// cout << a[dq.front()] << " ";
// }
// 8 Bit Manipulation
// 8.1 XOR
// aˆb=c;
// aˆc=b;
// bˆc=a;
// 1. __biltin_popcount(x) //ato gula 1 ache
// 2. __lg(x) //mostsignificat bin number
// 8.3 Bit niye kichu kaj
// 1. Left shift ( << ) man bare
// 2. Right shift ( >> )
// 3. Check Kth bit on or off
// ==(n>>k)&1
// 4 Turn on kth bit
// ==(n|(1<<k))
// 5.Turn off kth bit
// ==(n&(˜(1<<k)))
// 6.Toggle kth bit
// ==(nˆ(1<<k))
// 7. 2 ar power calculate
// == 1<<k
// 8. swap(a,b)
// a=aˆb;
// b=aˆb;
// a=aˆb;
// 9 Number Theory
// 9.1 Harmonic Series
// const int N=1e5+5;
// void harmonic(){
// for(int i=1;i<N;i++){
// for(int j=i;j<N;j+=i){
// nod[j]++;
// }
// }
// }
// 9.2 Sieve (very very fast) : (O(N log log
// N) )
// const int N=1e7;
// int cnt=0;
// vector<bool> isprime(N,true);
// vll prime;
// void sieve(){
// for(int i=3;i*i<N;i+=2){
// if(isprime[i]){
// for(int j=i*i;j<N;j+=(i+i)){
// isprime[j]=false;
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 8
// cnt++;
// }
// }
// }
// prime.push_back(2);
// for(int i=3;i<N;i+=2){
// if(isprime[i])prime.push_back(i);
// }
// }
// void solve(){
// cout<<cnt<<nl;
// frg(x,prime)cout<<x<<’ ’;
// }
// 9.3 Smallest Prime Factor (SPF) : (sieve
// diye)
// const int N=1e6+5;
// vector<bool>isprime(N,true);
// vll SPF(N);
// void sieve(){
// for(int i=0;i<N;i++) SPF[i]=i;
// for(int i=2 ;i*i<N;i++){
// if(isprime[i]){
// for(int j=i*i;j<N;j+=i){
// isprime[j]=false;
// if(SPF[j]==j)SPF[j]=i;
// }
// }
// }
// }
// int main(){
// spf();
// int x;cin>>x;
// cout<<SPF[x]<<nl;
// }
// 9.4 Prime factorization : (SPF diye)
// void prime_factorization(){
// int n;cin>>n;
// while(n>1){
// int x=n;
// int e=0;
// while(n%SPF[x]==0){
// e++;
// n/=SPF[x];
// }
// cout<<SPF[x]<<’ ’<<e<<nl; // P
// }
// }
// 9.5 Number of common divisors (nod) :
// harmonic and gcd()diye
// vll nod[N];
// void harmonic(){
// for(int i=1;i<N;i++){
// for(int j=i;j<N;j+=i){
// nod[j].push_back(i);
// }
// }
// }
// int main(){
// harmonic();
// int a,b,c;cin>>a>>b>>c;
// int n=__gcd(a,b);
// n=__gcd(n,c);
// for(auto x:nod[n])cout<<x<<’ ’;
// }
// 9.6
// BigMOD calculation
// const int mod=1e9+7;
// int bigmod(int a,int b){
// if(b==0)return 1;
// if(b%2==1){
// return (a%mod*bigmod(a,b-1)%mod)%mod;
// }
// int tmp =bigmod(a,b/2)%mod;
// return (tmp*tmp)%mod;
// }
// 9.7 Modular Arithmetic
// 1.a%mod if(a<0)
// (((a%mod)+mod)%mod)
// 2.Addition ( a+b % mod )
// (a+b)%MOD
// ((a%MOD)+(b%MOD))%MOD
// 3.Subtraction ( a-b % mod )
// (a-b+MOD)%MOD
// 4.Multiplication ( a*b % mod )
// (a%MOD)*(b%MOD)%MOD
// 5.BigMod ( aˆb % mod )
// const int mod=1e9+7;
// int bigmod(int a,int b){
// if(b==0)return 1;
// if(b%2==1){
// return (a%mod*bigmod(a,b-1)%mod)%mod;
// }
// }
// int tmp =bigmod(a,b/2)%mod;
// return (tmp*tmp)%mod;
// 6. Modular Division ( a/b % mod )
// 9.8
// 9.9 Harmonic Loop
// // O(n log n)
// for(int i=1;i<=n;i++){
// for(int j=i;j<=n;j+=i){
// // i divides j
// }
// }
// 9.10 Number of Divisors for all Numbers
// const int N = 1e6+5;
// int nod[N];
// void harmonic(){
// for(int i=1;i<N;i++){
// for(int j=i;j<N;j+=i){
// nod[j]++;
// }
// }
// }
// 9.11 Sum of Divisors for all Numbers
// const int N = 1e6+5;
// long long sod[N];
// void harmonic(){
// for(int i=1;i<N;i++){
// for(int j=i;j<N;j+=i){
// sod[j]+=i;
// }
// }
// }
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 9
// 9.12 List of Divisors
// const int N = 1e5+5;
// vector<int> divs[N];
// void harmonic(){
// for(int i=1;i<N;i++){
// for(int j=i;j<N;j+=i){
// divs[j].push_back(i);
// }
// }
// }
// 9.13 Sieve of Eratosthenes (O(n log log
// n))
// const int N = 1e7+5;
// vector<bool> isPrime(N,true);
// vector<int> prime;
// void sieve(){
// isPrime[0]=isPrime[1]=false;
// for(int i=4;i<N;i+=2)
// isPrime[i]=false;
// for(int i=3;i*i<N;i+=2){
// if(isPrime[i]){
// for(int j=i*i;j<N;j+=i+i){
// isPrime[j]=false;
// }
// }
// }
// prime.push_back(2);
// for(int i=3;i<N;i+=2){
// if(isPrime[i])
// prime.push_back(i);
// }
// }
// 9.14 Smallest Prime Factor (SPF)
// const int N = 1e6+5;
// int spf[N];
// void sieve(){
// for(int i=1;i<N;i++)
// spf[i]=i;
// for(int i=2;i*i<N;i++){
// if(spf[i]==i){
// for(int j=i*i;j<N;j+=i){
// if(spf[j]==j)
// spf[j]=i;
// }
// }
// }
// }
// 9.15 Prime Factorization (sqrt n)
// vector<pair<long long,int>> primeFactor(
// →long long n){
// vector<pair<long long,int>> res;
// for(long long i=2;i*i<=n;i++){
// if(n%i==0){
// int cnt=0;
// while(n%i==0){
// cnt++;
// n/=i;
// }
// res.push_back({i,cnt});
// }
// }
// if(n>1)
// res.push_back({n,1});
// return res;
// }
// 9.16 Prime
// Factorization
// SPFO(log n)
// void factorize(int n){
// while(n>1){
// int p=spf[n];
// int cnt=0;
// while(n%p==0){
// cnt++;
// n/=p;
// }
// cout << p << " " << cnt << ’\n’;
// }
// }
// 9.17 Number of Divisors (Single Num
// ber) ((p1a ∗p2b∗p3c)//NOD = (a+
// 1)(b + 1)(c + 1)
// long long nod(long long n){
// long long ans=1;
// for(long long i=2;i*i<=n;i++){
// if(n%i==0){
// int cnt=0;
// while(n%i==0){
// cnt++;
// n/=i;
// }
// ans*=1LL*(cnt+1);
// }
// }
// if(n>1)
// ans*=2;
// return ans;
// }
// 9.18 Sum of Divisors
// long long sod(long long n){
// long long ans=1;
// for(long long i=2;i*i<=n;i++){
// if(n%i==0){
// using
// long long sum=1;
// long long p=1;
// while(n%i==0){
// n/=i;
// p*=i;
// sum+=p;
// }
// ans*=sum;
// }
// }
// if(n>1)
// ans*=(1+n);
// return ans;
// }
// 9.19 Euler Totient Function (Single)
// (phi(n)=n*(1-1/p1)*(1-1/p2)...)
// long long phi(long long n){
// long long ans=n;
// for(long long i=2;i*i<=n;i++){
// if(n%i==0){
// while(n%i==0)
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 9.26 Distinct Prime Factors Count
// 10
// n/=i;
// ans-=ans/i;
// }
// }
// if(n>1)
// ans-=ans/n;
// return ans;
// }
// 9.20 Euler Totient 1 to N
// const int N = 1e6+5;
// int phi[N];
// void phi_1_to_n(){
// for(int i=0;i<N;i++)
// phi[i]=i;
// for(int i=2;i<N;i++){
// if(phi[i]==i){
// for(int j=i;j<N;j+=i){
// phi[j]-=phi[j]/i;
// }
// }
// }
// }
// 9.21 GCD/LCM
// long long g = __gcd(a,b);
// long long l =
// (a/__gcd(a,b))*b;
// 9.22 Binary Exponentiation / BigMod (
// O(log n) )
// const long long MOD = 1e9+7;
// long long bigmod(
// long long a,
// long long b
// ){
// long long res=1;
// while(b){
// if(b&1)
// res=res*a%MOD;
// a=a*a%MOD;
// b>>=1;
// }
// return res;
// 9.23 Modular Inverse (MOD must be
// prime)
// long long modInverse(long long a){
// return bigmod(a,MOD-2);
// }
// 9.24 Modular Arithmetic
// 1.Addition
// (a+b)%MOD
// 2.Subtraction
// (a-b+MOD)%MOD
// 3.Multiplication
// (a%MOD)*(b%MOD)%MOD
// 4.Division
// a* modInverse(b) % MOD
// 9.25 nCr using Factorial
// const int N = 1e6+5;
// long long fact[N];
// long long invFact[N];
// void factorial(){
// fact[0]=1;
// for(int i=1;i<N;i++)
// fact[i]=fact[i-1]*i%MOD;
// }
// 1. Inverse Factorial
// void inverseFactorial(){
// invFact[N-1]=
// bigmod(fact[N-1],MOD-2);
// for(int i=N-2;i>=0;i--){
// invFact[i]=
// invFact[i+1]*(i+1)%MOD;
// }
// }
// 2.nCr
// long long nCr(int n,int r){
// if(r<0 || r>n)
// return 0;
// return fact[n]*
// invFact[r]%MOD*
// invFact[n-r]%MOD;
// }
// const int N = 1e6+5;
// int cnt[N];
// void sieve(){
// for(int i=2;i<N;i++){
// if(cnt[i]==0){
// for(int j=i;j<N;j+=i){
// cnt[j]++;
// }
// }
// }
// }
// 9.27 Prefix Prime Count
// const int N = 1e6+5;
// int pre[N];
// void build(){
// for(int i=1;i<N;i++){
// pre[i]=pre[i-1]+isPrime[i];
// }
// }
// //Query:---
// prime count in [l,r]=pre[r]-pre[l-1]
// 9.28 Most Important Number Theory
// Lines
// __gcd(a,b)
// bigmod(a,b)
// bigmod(a,MOD-2)
// (a-b+MOD)%MOD
// for(int j=i;j<=n;j+=i)
// spf[n]
// phi(n)
// nod(n)
// sod(n)
// 10 Graph
// 10.1 Adj matrix
// void solve(){
// int n,m;cin>>n>>m;
// int adj[n+1][n+1];
// for(int i=0;i<n+1;i++){
// for(int j=0;j<n+1;j++){
// }
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 11
// adj[i][j]=0;
// }
// }
// for(int i=0;i<m;i++){
// int u,v;cin>>u>>v;
// adj[u][v]=1;
// adj[v][u]=1;
// }
// for(int i=1;i<n+1;i++){
// for(int j=1;j<n+1;j++){
// cout<<adj[i][j]<<’ ’;
// }
// cout<<nl;
// }
// }
// 10.2 Adj list
// void solve(){
// int n,m;cin>>n>>m;
// vector<int> adj[n+1];
// for(int i=0;i<m;i++){
// int u,v;cin>>u>>v;
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// for(int i=1;i<n+1;i++){
// cout<<i<<"--> {";
// for(auto j:adj[i]){
// cout<<j<<’ ’;
// }
// cout<<"}\n";
// }
// }
// 10.3 BFS(Breath First Search)
// void solve(){
// int n,m;cin>>n>>m;
// vector<int> adj[n+1];
// for(int i=0;i<m;i++){
// int u,v;cin>>u>>v;
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// int visited[n+1];
// int level[n+1];
// for(int i=0;i<n+1;i++) visited[i]=0;
// queue<int>q;
// int sorce;sorce=1;
// q.push(sorce);
// visited[sorce]=1;
// level[sorce]=1;
// while(!q.empty()){
// int node=q.front();
// cout<<node<<’ ’;
// for(auto u:adj[node]){
// if(visited[u])continue;
// visited[u]=1;
// level[u]=level[node]+1;
// q.push(u);
// }
// q.pop();
// }
// }
// 10.4 DFS/depeth /Subtree
// const int N=2e5+5;
// vector<int>adj[N];
// int visited[N];
// int depth[N];
// int subtree_sz[N];
// void dfs(int node){
// visited[node]=1;
// subtree_sz[node]=1;
// for(auto u:adj[node]){
// if(visited[u]==0){
// depth[u]=depth[node]+1;
// dfs(u);
// subtree_sz[node]+=subtree_sz[u];
// }
// }
// }
// void solve(){
// int n,m;cin>>n>>m;
// for(int i=0;i<m;i++){
// int u,v;cin>>u>>v;
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// dfs(1);
// cout<<"Subtree \n";
// for(int i=1;i<=n;i++){
// cout<<i<<"---> "<<subtree_sz[i]<<nl;
// }
// cout<<nl<<"Depth: \n";
// for(int i=1;i<=n;i++){
// cout<<i<<"--->> "<<depth[i]<<nl;
// }
// }
// 10.5 Tree Diameter
// const int N=2e5+5;
// vector<int> adj[N];
// int forthest_node,forthest_dist;
// void fun(int node,int parent,int dist){
// if(dist>forthest_dist){
// forthest_node=node;
// forthest_dist=dist;
// }
// for(auto u:adj[node]){
// if(u==parent)continue;
// fun(u,node,dist+1);
// }
// }
// void solve(){
// int n;cin>>n;
// for(int i=0;i<n-1;i++){
// int u,v;cin>>u>>v;
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// forthest_dist=0;
// forthest_node=1;
// fun(1,-1,0) ;
// fun(forthest_node,-1,0);
// cout<<forthest_dist<<nl;
// }
// 10.6
// Cycle Detection + Topological
// Sort(DFS)
// const int N=2e5+5;
// vector<int>adj[N];
// int mark[N];
// bool cycle=0;
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 12
// vector<int >topsort;
// void dfs(int node){
// if(mark[node]==2)return;
// if(mark[node]==1){
// cycle=1;
// return;
// }
// mark[node]=1;
// for(auto u:adj[node])dfs(u);
// mark[node]=2;
// topsort.push_back(node);
// }
// void solve(){
// int n,m;cin>>n>>m;
// for(int i=0;i<m;i++){
// int u,v;cin>>u>>v;
// adj[u].push_back(v);
// }
// for(int i=1;i<=n;i++){
// if(!mark[i])dfs(i);
// }
// if(cycle){
// cout<<"Cycle Found\n";
// }
// reverse(topsort.begin(),topsort.end());
// for(auto u:topsort)cout<<u<<’ ’;
// cout<<’\n’;
// }
// 10.7
// 10.8 Graph Input and Representation
// (Unweighted Undirected Graph/ Di
// rected Graph/ Weighted Graph)
// 1.Unweighted Undirected Graph
// const int N = 2e5+5;
// vector<int> adj[N];
// int main(){
// int n,m;
// cin >> n >> m;
// for(int i=0;i<m;i++){
// int u,v;
// cin >> u >> v;
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// }
// 2.Directed Graph
// adj[u].push_back(v);
// 3.Weighted Graph
// vector<pair<int,int>> adj[N];
// adj[u].push_back({v,w});
// adj[v].push_back({u,w});
// 10.9 BFS(Basic BFS)
// vector<int> vis(N);
// void bfs(int src){
// queue<int> q;
// q.push(src);
// vis[src]=1;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// if(!vis[v]){
// vis[v]=1;
// q.push(v);
// }
// }
// }
// }
// 10.10 Shortest Path in Unweighted
// Graph
// vector<int> dist(N,-1);
// void bfs(int src){
// queue<int> q;
// q.push(src);
// dist[src]=0;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// if(dist[v]==-1){
// dist[v]=dist[u]+1;
// q.push(v);
// }
// }
// }
// }
// 10.11 Check Graph is Tree or Not
// //connected + edges = n-1
// int cnt=0;
// void bfs(int src){
// queue<int> q;
// q.push(src);
// vis[src]=1;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// cnt++;
// for(auto v:adj[u]){
// if(!vis[v]){
// vis[v]=1;
// q.push(v);
// }
// }
// }
// }
// //-----------------
// if(cnt==n && m==n-1)
// cout<<"Tree\n";
// 10.12 Connected Components
// int cc=0;
// for(int i=1;i<=n;i++){
// if(!vis[i]){
// cc++;
// bfs(i);
// }
// }
// 10.13 BFS Path Printing
// vector<int> par(N,-1);
// void bfs(int src){
// queue<int> q;
// q.push(src);
// vis[src]=1;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 13
// if(!vis[v]){
// vis[v]=1;
// par[v]=u;
// q.push(v);
// }
// }
// }
// }
// //----------
// //Path Restore
// //---------
// vector<int> path;
// int node=dest;
// while(node!=-1){
// path.push_back(node);
// node=par[node];
// }
// reverse(path.begin(),path.end());
// 10.14 BFS on Grid
// int dx[]={-1,1,0,0};
// int dy[]={0,0,-1,1};
// bool valid(int x,int y){
// return x>=0 && y>=0 && x<n && y<m;
// }
// //--------------------
// queue<pair<int,int>> q;
// q.push({sx,sy});
// vis[sx][sy]=1;
// while(!q.empty()){
// auto [x,y]=q.front();
// q.pop();
// for(int i=0;i<4;i++){
// i= 1-->U 2-->D 3-->L 4-->R
// int nx=x+dx[i];
// int ny=y+dy[i];
// if(valid(nx,ny) && !vis[nx][ny]){
// vis[nx][ny]=1
// q.push({nx,ny});
// }
// }
// }
// 10.15 Multi Source BFS
// queue<int> q;
// for(int i=1;i<=n;i++){
// if(source[i]){
// q.push(i);
// dist[i]=0;
// }
// }
// //--------------
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// if(dist[v]==-1){
// dist[v]=dist[u]+1;
// q.push(v);
// }
// }
// }
// 10.16 DFS
// vector<int> vis(N);
// void dfs(int u){
// vis[u]=1;
// for(auto v:adj[u]){
// if(!vis[v])
// dfs(v);
// }
// }
// 10.17 DFS on Tree
// void dfs(int u,int p){
// for(auto v:adj[u]){
// if(v==p)
// continue;
// dfs(v,u);
// }
// }
// 10.18 Depth / Level
// int depth[N];
// void dfs(int u,int p){
// for(auto v:adj[u]){
// if(v==p)
// continue;
// depth[v]=depth[u]+1;
// dfs(v,u);
// }
// }
// 10.19 Subtree Size
// int sub[N];
// void dfs(int u,int p){
// sub[u]=1;
// for(auto v:adj[u]){
// if(v==p)
// continue;
// dfs(v,u);
// sub[u]+=sub[v];
// }
// }
// 10.20 Tree Diameter (BFS Method)
// pair<int,int> bfs(int src){
// vector<int> dist(N,-1);
// queue<int> q;
// q.push(src);
// dist[src]=0;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// if(dist[v]==-1){
// dist[v]=dist[u]+1;
// q.push(v);
// }
// }
// }
// int mx=0,node=src;
// for(int i=1;i<=n;i++){
// if(dist[i]>mx){
// mx=dist[i];
// node=i;
// }
// }
// return {node,mx};
// }
// \\-----------
// auto [u,d1]=bfs(1);
// auto [v,d2]=bfs(u);
// cout<<d2<<’\n’;
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 10.27 Graph Complexity
// 14
// 10.21 Bipartite Graph
// vector<int> color(N,-1);
// bool bfs(int src){
// queue<int> q;
// q.push(src);
// color[src]=0;
// while(!q.empty()){
// int u=q.front();
// q.pop();
// for(auto v:adj[u]){
// if(color[v]==-1){
// color[v]=color[u]ˆ1;
// q.push(v);
// }
// else if(color[v]==color[u])
// return false;
// }
// }
// return true;
// }
// 10.22 Cycle Detection (Undirected)
// bool dfs(int u,int p){
// vis[u]=1;
// for(auto v:adj[u]){
// if(!vis[v]){
// if(dfs(v,u))
// return true;
// }
// else if(v!=p)
// return true;
// }
// return false;
// }
// 10.23 Cycle Detection (Directed)
// vector<int> vis(N);
// bool cycle=false;
// void dfs(int u){
// vis[u]=1;
// for(auto v:adj[u]){
// if(vis[v]==0)
// dfs(v);
// else if(vis[v]==1)
// cycle=true;
// }
// vis[u]=2;
// }
// //--------------
// 0 = unvisited
// 1 = processing
// 2 = processed
// 10.24 Topological Sort (DFS)
// vector<int> topo;
// void dfs(int u){
// vis[u]=1;
// for(auto v:adj[u]){
// if(!vis[v])
// dfs(v);
// }
// topo.push_back(u);
// }
// //----------
// reverse(topo.begin(),topo.end());
// 10.25 Topological Sort (Kahn)
// queue<int> q;
// for(int i=1;i<=n;i++){
// if(indeg[i]==0)
// q.push(i);
// }
// //-----------
// while(!q.empty()){
// int u=q.front();
// q.pop();
// topo.push_back(u);
// for(auto v:adj[u]){
// indeg[v]--;
// if(indeg[v]==0)
// q.push(v);
// }
// }
// 10.26 DAG Check
// if(topo.size()==n)
// cout<<"DAG\n";
// else
// BFS
// DFS
// O(V+E)
// O(V+E)
// Connected Components O(V+E)
// Topological Sort O(V+E)
// Dijkstra
// O(E log V)
// 11 Basic DP
// 11.1 Fibonacci DP
// vector<long long> dp(N,-1);
// long long fib(int n){
// if(n<=1)
// return n;
// if(dp[n]!=-1)
// return dp[n];
// return dp[n]=
// fib(n-1)+fib(n-2);
// }
// 11.2 Iterative DP
// dp[0]=0;
// dp[1]=1;
// for(int i=2;i<=n;i++){
// dp[i]=dp[i-1]+dp[i-2];
// }
// 11.3 Weight Based Knapsack
// void weight_based_knapsack(){
// int n,W;
// cin >> n >> W;
// vector<pair<int,int>> a(n);
// for(auto &[wt,val]:a)
// cin >> wt >> val;
// vector<int> dp(W+1,-1);
// dp[0]=0;
// for(auto &[wt,val]:a){
// for(int w=W;w>=0;w--){
// if(dp[w]==-1) continue;
// if(w+wt>W) continue;
// dp[w+wt]=max(dp[w+wt],dp[w]+val);
// }
// }
// cout <<*max_element(dp.begin(),dp.end())
// →<< nl;
// }
// cout<<"Cycle Exists\n";
// PUST Eternal Tsukuyomi (Pabna University of Science and Technology)
// 15
// 12 Programming Foundation &
// Basic Math
// 12.1 Number System &Bits
// Even = 2k (wherek ∈ Z)
// Odd = 2k+1 (wherek ∈Z)
// (anan−1 ...a1a0)r = (an × rn) + ··· + (a0 ×r0)
// 12.2 Divisors & Primes
// N =pa1
// 1 ×pa2
// 2 ×··· ×pak
// k
// d(N) = (a1 +1)(a2 +1)···(ak +1)
// Loop Limit ≤ 
// √
// N, Digit = N mod 10
// 12.3 GCD,LCM&Factorial
// gcd(a,b) = gcd(b, a mod b)
// lcm(a,b) = |a×b|
// gcd(a,b)
// n! = n×(n−1)×···×1
// E5(N!) = N
// 5 + N
// 25 + N
// 125 +...
// 12.4 Matrix & Set Theory
// M
// Cij = Aij +Bij,
// Cij =
// k=1
// Aik ×Bkj
// n(A∪B) =n(A)+n(B)−n(A∩B)
// 12.5 Basic Geometry
// d =
// (x2 −x1)2 +(y2 −y1)2
// c2 = a2 +b2
// 2 · Area = |x1(y2 −y3) +x2(y3 −y1)+x3(y1 −y2)|
// Circle Area = πr2, Circumference = 2πr
// 12.6 3D Formulas
// Cube: V =a3, A=6a2
// Cylinder: V = πr2h, A = 2πr(r+h)
// Cone: V = 1
// 3
// πr2h, l = 
// √
// r2+h2, A=πr(r+l)
// Sphere: V = 4
// 3
// πr3, A = 4πr2
// 12.7 Series & Math Basics
// 1 +2+···+n= n(n+1)
// 2
// tn = a+(n−1)d,
// Sn = n
// 2 2a+(n−1)d
// Percentage Change = New − Old
// Old
// a
// b = a+b−1
// b
// ×100%
// 12.8 Permutation, Combination & Prob
// ability
// P(n,r) = n!
// (n −r)! ,
// A
// C(n,r) = n
// r = n!
// B modM =A×BM−2 modM
// P(E) = Favorable Outcomes
// Total Outcomes
// Ans = P ×QM−2 modM
// 13 Sort
// 13.1 Custom Sort
// bool cmp(Team a,Team b){
// if(a.solve!=b.solve)
// return a.solve>b.solve;
// return a.penalty<b.penalty;
// }
// 14 Default Template
// #include<bits/stdc++.h>
// #define ll long long int
// #define pb push_back
// #define vc vector
// #define vi vc<int>
// #define vl vc<ll>
// #define dbg(x) cerr<<x<<endl;
// #define mp(x,y) make_pair(x,y)
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define tst int t;cin>>t;while(t--)
// #define srt(v) sort(v.begin(),v.end());
// #define rsrt(v) sort(v.rbegin(),v.rend());
// #define rj ios::sync_with_stdio(false);\
// cin.tie(0);
// #define rvs(v) reverse(v.begin(),v.end());
// #define F first
// #define S second
// #define MOD 1000000007
// #define gcd(a,b) __gcd(a,b)
// r! (n −r)!
// #define lcm(a,b) (a*b)/gcd(a,b)
// #define PI 2*acos(0.0)
// #define pii pair<int,int>
// #define fr(i,a,b) for(ll i=a;i<=b;i++)
// #define coutv(v) for(auto it:v)\
// cout<<it<<’ ’;cout<<endl;
// #define cinv(v) for(auto &it:v)cin>>it;
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define ld long double
// #define nl ’\n’
// const int N=1e5;
// using namespace std;
// mt19937 rng(chrono::steady_clock::
// now().time_since_epoch().count());
// int my_rand(int l,int r){
// return uniform_int_distribution
// <int>(l,r)(rng);
// }
// void solve(){}
// int main(){
// rj