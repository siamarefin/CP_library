//https://www.youtube.com/watch?v=0oP6XLTI2tY 

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

const  int N = 1e5 + 2, MOD = 1e9+ 7 ;  
 
struct triplet
{
    int x , y , gcd ; 
};

triplet extendEuclid(int a , int b )
{
    if (b==0)
    {
        triplet ans ;
        ans.x=1 ;
        ans.gcd=a;
        ans.y=0;
        return  ans ;  

    }
    triplet smallAns = extendEuclid(b,a%b);
    triplet ans ;
    ans.gcd = smallAns.gcd ;
    ans.x = smallAns.y ;
    ans.y = smallAns.x - (a/b)*smallAns.y ;
    return ans ;
}

int main()
{ 
    int a , b ;
    cin>>a>>b;
    triplet  ans = extendEuclid(a,b); 
    cout<<ans.gcd <<" "<<ans.x<<" "<<ans.y<<endl; 



    



    return 0;
}
