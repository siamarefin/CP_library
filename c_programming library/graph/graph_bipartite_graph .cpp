#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

const int N = 1e5 + 5;
int n , m ;
std::vector<int > g[N] ;
vector<int > color;


void dfs(int i ,int c )
{
    if(color[i]!=-1)
    {
        if(c!=color[i])
        {

            cout<<"IMPOSSIBLE";
            exit(0);
        }
        return ;
    }
    color[i] = c ;
    for(auto child : g[i])
    {
        dfs(child,3-c); 
    }
}
 
int main()
{
    cin>>n>>m;
    for(int i =0;i<m;i++)
    {
        int a , b ;
        cin>>a>>b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    color.resize(N , -1 );

    for(int i =0;i<n;i++)
    {
        if(color[i] == -1 )
            dfs(i,1);
    }
    for(int i =0 ; i<n;i++)
    {
        cout<<color[i]<<" ";
    }






    



    return 0;
}




// apna clg code 



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

std::vector<std::vector<int > > adj;
std::vector<bool> vis;
std::vector<int > col;

bool bipart ;

void color(int u , int curr)
{
    if(col[u] != - 1 && col[u]!=curr)
    {
        bipart= false ;
        return;
    }
    col[u] = curr;
    if(vis[u])
        return;
     vis[u]= true;
     for(auto i : adj[u])
     {
        color(i,curr^1);
     }
}

 
int main()
{
    bipart= true;
    int n , m ;
    cin>>n>>m;
    adj= std::vector<std::vector<int >> (n);
    vis=std::vector<bool> (n,false);
    col=std::vector<int > (n,-1);

    for(int i =0 ; i<m;i++)
    {
        int u , v;
        cin>>u>>v;
        adj[u].push_back(v);

        adj[v].push_back(u);

    }


    for(int i =0  ;i<n;i++)
    {
        if(!vis[i])
        {
            color(i,0);
        }
    }

    if(bipart)
        yes
    else
        no
    newline
    



    return 0;
}

/*
4 4
0 1
1 2
2 3
3 0
*/


problem : https://codeforces.com/problemset/problem/862/B
