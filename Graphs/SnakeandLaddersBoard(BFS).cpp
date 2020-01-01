#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;

template<typename T>
class Graph
{
    map<T,list<T> >adjList;
    public:
    Graph()
    {
        //We do not require the number of vertices in this case because hash maps are dynamic.
    }
    void addEdge(T u,T v,bool bidir=true)
    {
        adjList[u].push_back(v);
        if(bidir)
        {
            adjList[v].push_back(u);
        }
    }

    int shortest_path(T src,T dest)//calculate the shortest path for unweighted array for all the nodes from the source node.
    {
        queue<T> q;
        map<T,int> distance;
        for(auto i:adjList)
        {
            distance[i.first]=INT_MAX;
        }
        q.push(src);
        distance[src] = 0;
        while(!q.empty())
        {
            T node =q.front();
            //cout<<node<<"-> at a distance "<<distance[node];
            //cout<<endl;
            q.pop();
            
            for(auto neighbour:adjList[node])
            {
                if(distance[neighbour]==INT_MAX)
                {
                    q.push(neighbour);
                    distance[neighbour] = distance[node]+1;
                }
            }
        }
        return distance[dest];
    }
};
int main()
{
    Graph<int> g;
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,s;
        cin>>n>>l>>s;
        int board[50]={0};
        int u,v;
        for(int i=0;i<l+s;i++)
        {
            cin>>u>>v;
            board[u]=(v-u);
        }
        for(int p=0;p<=n;p++)
        {
            for(int dice=1;dice<=6;dice++)
            {
                int q = p+dice+board[p+dice];
                g.addEdge(p,q);
            }
        }
        cout<<g.shortest_path(0,n)<<endl;
    }
    return 0;

}  
