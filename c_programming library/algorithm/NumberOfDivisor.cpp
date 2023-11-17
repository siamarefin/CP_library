//https://www.geeksforgeeks.org/count-divisors-n-on13/


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

int countDivisor(int n )
{
    int cnt =0 ;
    for(int i =1 ;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)
                cnt++;
            else
                cnt+=2;
        }
    }

    return cnt ;  
}
 
int main()
{

    cout<< countDivisor(100);
    



    return 0;
}
