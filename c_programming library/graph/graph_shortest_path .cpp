link : https://www.youtube.com/watch?v=EFg3u_E6eHU



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a,b,i,j,n,m,x,y,z;
ll d[100005],p[100005];
map <pair<ll, ll> ,ll> bp;
priority_queue<ll> q;
vector<ll>v[100005];
void f (ll i)
{
    if (i!=1) f(p[i]);
    cout<<i<<' ';
}
int main ()
{
cin>>a>>b;
while (b--)
{
    cin>>n>>m>>x;
    v[n].push_back(m);
    v[m].push_back(n);
    bp[{n,m}]=x;
    bp[{m,n}]=x;
}

for (i=2; i<=a; i++)
d[i]=1e18;
q.push(1);

while (q.size())
{
    y=q.top();
    q.pop();
    for (i=0; i<v[y].size(); i++)
    {
        z=v[y][i];
        x=bp[{y,z}];
        if (d[y]+x<d[z]) d[z]=d[y]+x,p[z]=y,q.push(z);
    }
}

if (d[a]==1e18) return cout<<-1,0;
f(a);
    return 0;
}



/*
5 6
1 2 2 
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

output:
1 4 3 5 

*/
                                                                    
