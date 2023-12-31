#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define cin(n) ll n ; cin>>n;
#define cout(n) cout<<n;
#define for_loop(i, j, n) for (ll i = j; i <= n; i++)
#define st(v) sort(v.begin(), v.end());
#define sz(x) (ll) x.size()
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define newline cout<<"\n";
#define space cout<<" ";

int n , m ;
std::vector<std::vector<pair<int, int > > > path ;
std::vector<std::vector<bool> > vis;

int sx , sy , ex , ey ;

std::vector<pair<int , int >>  moves = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1}} ;;
bool isValid(int x, int y)
{
    if (x<0 or x >= n or y <0 or y >= m)
        return false;
    if (vis[x][y])
        return false;
    return true;
}
void bfs()
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for (auto mv : moves)
        {
            int mvx = mv.first;
            int mvy = mv.second;
            if (isValid(cx + mvx, cy + mvy))
            {
                q.push({cx + mvx, cy + mvy});
                vis[cx + mvx][cy + mvy] = true;
                path[cx + mvx][cy + mvy] = {mvx, mvy};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    path.resize(n);
    vis.resize(n);
    for (int i = 0; i < n; ++i)
    {
        path[i].resize(m);
        vis[i].resize(m);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            path[i][j] = { -1, -1};
            char c; cin >> c;
            if (c == '#')
            {
                vis[i][j] = true;
            }
            if (c == 'A')
            {
                sx = i; sy = j;
            }
            if (c == 'B')
            {
                ex = i; ey = j;
            }
        }
    }
    bfs();

    if (!vis[ex][ey])
    {
        cout << "NO" << endl;
        // return 0;
    }
    else
    {

        cout << "YES" << endl;

        vector<pair<int, int>> ans;
        pair<int, int> end = {ex, ey};

        while (end.first != sx or end.second != sy)
        {
            ans.push_back(path[end.first][end.second]);
            end.first -= ans.back().first;
            end.second -= ans.back().second;
        }

        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;

        for (auto c : ans )
        {
            if (c.first == 1 and c.second == 0 )
                cout << 'D';
            else if (c.first == -1 and c.second == 0 )
                cout << 'U';
            else if (c.first == 0 and c.second == 1 )
                cout << 'R';
            else if (c.first == 0 and c.second == -1 )
                cout << 'L';

        }




    }


    return 0;
}






/*
5 8
########
#.A#...#
#.##.#B#
#......#
########
*/ 

// channel : Dardev 
