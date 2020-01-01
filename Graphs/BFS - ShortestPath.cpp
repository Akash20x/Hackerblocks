#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
    map<int,list<pair<int, int> > > m;
    void addEdge(int src,int dest,int dist=6){
        m[src].push_back(make_pair(dest,dist));
        m[dest].push_back(make_pair(src,dist));
    }
    void SSP(int src,map<int,int> &d){
        map<int,int> distance;
     for(auto i:m){
         distance[i.first]=INT_MAX;
     }
        distance[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(auto i:m[s]){
                pair<int,int>p=i;
                if(distance[p.first]>distance[s]+p.second){
                    distance[p.first]=distance[s]+p.second;
                    q.push(p.first);
                    d[p.first]=distance[p.first];
                }
            }
        }
    }
};
int main() {
    int t;cin>>t;
    while(t--){
        Graph g;
        int n,m,x,y;cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            g.addEdge(x,y);
        }
        map<int,int> d;
        int src;cin>>src;
        g.SSP(src,d);
        for(int i=1;i<=n;i++){
            if(i!=src){
                if(d.find(i)!=d.end()){
                    cout<<d[i]<<" ";
                }
                else{
                    cout<<"-1 ";
                }
            }
        }
        cout<<endl;
    }
}
