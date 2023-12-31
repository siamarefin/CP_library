// youtube : apna college 




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

const long long int  inf = 1e18 ;
 
int main()
{
    ll n , m ;
    cin>>n>>m;
    std::vector<ll > dist (n+1 , inf );
    std::vector<std::vector<pair<ll ,ll >>> graph(n+1);

    for(int i =0 ; i<m;i++)
    {
        ll u , v ,w ;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    ll source =1  ;

    dist[source]=0 ;
    set <pair<ll ,ll >>  s ;
    s.insert({0,source});
    while(!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x); 

        for(auto it : graph[x.second])
        {
            if(dist[it.first] > dist[x.second]+it.second)
            {
                s.erase({dist[it.first],it.first});
                dist[it.first]= dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }

        }

    }

    for(int i = 2 ;i<=n;i++)
    {
        cout<<dist[i];
        space
    }
    newline
    



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

*/
