
// https://www.youtube.com/watch?v=mNrzyuus2h4&list=PLauivoElc3gimdmLcIIpafEkzGs4tCQmi&index=4  

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
const int N = 25e2+10; 
std::vector<int > a(N);
int dp[N];


int lis (int i )
{
   if(dp[i]!=-1 )return dp[i];  
   int ans = 1 ;
   for(int j =0 ;j<i;j++)
   {
      if(a[i]>a[j])
      {
         ans = max(ans ,lis(j)+1 );
      }
   }
   return dp[i]=ans ; 
}
 
int main()
{
   memset(dp,-1,sizeof(dp)); 
    int n ;
    cin>>n;
    int ans =0;
    for(int i =0 ;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i =0 ;i<n;i++)
    {
      ans = max(ans , lis(i) ); 
    }

    cout<<ans ;
    newline



    return 0;
}


/*
input : 8
10 9 2 5 3 7 101 18


output: 4 

// lis is equal 4 

*/ 
