// https://www.youtube.com/watch?v=u7DdPBAJttU&list=PLauivoElc3gimdmLcIIpafEkzGs4tCQmi&index=2



// top down approch dp
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";
const int N = 1e5 + 10 ; 
 
int dp[N];
  

int fib(int n )
{
    if(n==0 )return 0;
    if(n==1 )return 1 ;
    if(dp[n] !=-1 )return dp[n]; 
    return dp[n]=fib(n-1) + fib(n-2);

}
 
int main()
{
    memset (dp,-1,sizeof(dp))
    int n ;
    cin>>n;

    cout<<fib(n);  
    



    return 0;
}
