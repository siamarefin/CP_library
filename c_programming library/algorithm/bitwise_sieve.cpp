// https://www.shafaetsplanet.com/?p=855 


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
int N =100 , prime[100] ;
int status[100/32]; 

bool check (int N , int pos )
{
    return (bool)(N&(1<<pos)) ;  
}
int Set (int N , int pos )
{
    return N = N | (1<<pos); 
}

void  sieveofEra()
{
    int i , j , sqrtN;
    sqrtN = int (sqrt(N)) ;
    for(i = 3 ; i <=sqrtN;i+=2)
    {
        if(check(status[i/32],i%32)==0)
        {
            for(j = i*i ; j<=N;j+=2*i)
                status[j/32]=Set(status[j/32],j%32);
        }
    }   
    cout<<2<<" ";
    for(i=3;i<=N;i+=2)
        if( check(status[i/32],i%32)==0)
            cout<<i<<" ";

}
 
int main()
{
    sieveofEra();



    return 0;
}
