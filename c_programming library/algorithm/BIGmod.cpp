//https://www.geeksforgeeks.org/how-to-compute-mod-of-a-big-number/

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


int mod(string num , int a )
{
    int res =0 ;
    for(int i =0;i < num.size() ;i++)
    {
        res = (res*10 +num[i]-'0') %a ;  
    }

    return res ;
}
 
int main()
{

    string num =  "12316767678678" ;

    cout<<mod(num,10);
 
    



    return 0;
}
