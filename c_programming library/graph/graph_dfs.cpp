#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define WHITE 1
#define GRAY  2
#define BLACK 3

int adj[100][100] ;
int color[100];
int node , edge ;

void dfsvisit(int x )
{
    color[x] = GRAY;

    for (int i = 0; i < node; i++)
    {
        if (adj[x][i] == 1 && color[i] == WHITE)
            dfsvisit(i);
    }
    color[x] = BLACK;

}

void dfs()
{
    for (int i = 0; i < node ; i++)
    {
        color[i] = WHITE;
    }
    for (int  i = 0; i < node; i++)
    {
        if (color[i] == WHITE)
        {
            dfsvisit(i);
        }
    }
}
int main()
{
    cin >> node >> edge ;
    int a , b ;
    for (int i = 0; i < edge ; i++)
    {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1 ;
    }
    dfs();




    return 0;
}



2nd code ::::::::::::::::::::::::::::::::::::::::::







#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 
#define length 100001
std::vector<int > adj[length];
bool visited[length] ;
 
int node , edge ;
 
void dfs(int x )
{
    visited[x]=1;
 
    for(auto i : adj[x])
    {
        if(visited[i]==0)
            dfs(i);
    }
 
 
}
 
 
int main()
{
    cin>>node>>edge;
 
    for(int i =0;i<edge;i++)
    {
        int x , y ;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
  
    memset(visited , 0 , sizeof visited); 
 
    for(int i =1 ;i<=node;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
        }
    }

    for(int i =1 ;i<=node;i++)
        adj[i].clear();
 
 
 
 
    
 
 
 
    return 0;
}
