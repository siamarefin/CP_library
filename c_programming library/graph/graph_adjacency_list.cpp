    cin>>node>>edge;
 
    for(int i =0;i<edge;i++)
    {
        int x , y ;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
