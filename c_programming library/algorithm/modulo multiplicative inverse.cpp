// modulo multiplicative inverse 
//https://www.youtube.com/watch?v=Gd9w8m-klho

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
const int M = 1e9+7 ;

int binexp(int a , int b , int m )
{
    int result = 1 ;
    while(b>0)
    {
        if(b&1)
        {
            result = (result * 1ll *a)  %m ; 

        }
        a= (a*1ll*a)%m ;
        b>>=1 ;
    }
    return result; 
}
 
int main()
{
    int a =  binexp(2,M-2,M);
    cout<<a;



    return 0;
}
