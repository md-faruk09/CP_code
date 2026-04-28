
//Prime Factorization using SQRT(n) loop for all "numbers" not more than sqrt(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    for(int i=2; i*i<=n; ++i)
    {
        if(n%i>0) continue;
        int x = 0;
        while(n%i == 0)
        {
            ++x;
            n/=i;
        }
        cout<<i<<' '<<x<<endl;
    }

    if(n>1) cout<<n<<' '<<1<<endl;
}


//Prime Factorization using SQRT(n) loop for all "Primes" not more than sqrt(n)
#include <bits/stdc++.h>

using namespace std;


const int N = 1e6+5;
vector<int>primes;
bool isprime[N];

void sieve()
{
    for(int i=0; i<N; ++i) isprime[i] = true;
    for(int i=2; i*i<N; ++i)
    {
        if(isprime[i]==false) continue;
        for(int j=i*i; j<N; j+=i)
        {
            isprime[j] = false;
        }
    }
    for(int i=2; i<N; ++i)
    {
        if(isprime[i]) primes.push_back(i);
    }
}


int main()
{
    sieve();

    int n; cin>>n;

    for(auto p:primes)
    {
        if(p*p >n) break;
        if(n%p>0) continue;

        int x = 0;
        while(n%p == 0)
        {
            ++x;
            n/=p;
        }
        cout<<p<<' '<<x<<endl;
    }

    if(n>1) cout<<n<<' '<<1<<endl;
}


// SPF and Prime Factorization using SPF
#include <bits/stdc++.h>

using namespace std;


const int N = 1e6+5;
vector<int>primes;
bool isprime[N];

int spf[N]; //smallest prime factor

void sieve()
{
    for(int i=0; i<N; ++i) isprime[i] = true, spf[i] = i;

    for(int i=2; i*i<N; ++i)
    {
        if(isprime[i]==false) continue;
        for(int j=i*i; j<N; j+=i)
        {
            isprime[j] = false;
            if(spf[j]==j) spf[j] = i;
            //spf[60] = 2 //2 er jonne ashce
            // 3 er jonne abar ashbe
            //spf[60] = 3
        }
    }
    for(int i=2; i<N; ++i)
    {
        if(isprime[i]) primes.push_back(i);
    }
}


int main()
{
    sieve();
    
    int n; cin>>n;
    //spf[n] diye n vag jay.. 
    while(n>1)
    {
        int x = n;
        int cnt = 0;
        while(n%spf[x] == 0)
        {
            n/=spf[x];
            ++cnt;
        }

        cout<<spf[x]<<' '<<cnt<<endl;
    }
}


//Prime Factorization for each number from 1 to n using harmonic series
#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+6;

vector<int> primefactors[N];
bool isprime[N];
void harmonic()
{
    for(int i=1; i<N; ++i) isprime[i] = true;

    for(int i=2; i<N; ++i)
    {
        if(isprime[i] == false) continue;

        primefactors[i].push_back(i);

        for(int j=i+i; j<N; j+=i)
        {
            isprime[j] = false;
            int x = j;
            while(x%i == 0)
            {
                x/=i;
                primefactors[j].push_back(i);
            }
        }
    }
}




int main()
{
    harmonic();
    for(auto i:primefactors[200]) cout<<i<<endl;
}
