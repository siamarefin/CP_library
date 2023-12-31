// channel :  apna college 


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

bool iscycle(int src , std::vector<std::vector<int >> &adj, std::vector<bool >&visited ,std::vector<int > &stack )
{
    stack[src] = true ;

    if(!visited[src])
    {
        visited[src]= true;
        for(auto i : adj[src])
        {
            if(!visited [i] && iscycle(i,adj,visited,stack) )
            {
                return true;
            }
            if(stack[i])
            {
                return true;
            }
        }
    }
    stack[src]= false;
    return false; 

}


int main()
{
    int n , m ;
    cin >> n >> m;
    vector< vector<int > > adj(n);
    for (int i = 0; i < m; i++)
    {
        int  u , v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int  cycle = false  ;
    vector<bool >  visited(n, false );
    std::vector<int > stack (n,0);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && iscycle(i, adj, visited, stack   )  )
        {
            cycle  = true ;
        }
    }
    if (cycle )
        yes
        else
        no





}


/*
4 3
0 1
1 2
2 3
*/
