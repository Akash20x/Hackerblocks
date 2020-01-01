#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}


template<typename T>
class Graph{
    map <T, list<T> > adjList;

public:
    Graph(){

    }

    void addEdge(T u, T v, bool bidir = true){
        adjList[u].push_back(v);
        if(bidir) adjList[v].push_back(u);
    }

    void print(){
        for(auto i : adjList){
            cout << i.first <<"->";  // change if printing an object or node

            for(auto entry : i.second){
                cout << entry << ",";  // change if printing an object or node
            }

            cout << endl ;
        }
    }

    void dfsHelper(T node, map <T, bool> &visited, int &temp){
        visited[node] = true;
        temp++;

        for(auto neighbour : adjList[node]){
            if(!visited[neighbour]) {
                dfsHelper(neighbour,visited,temp);
            }
        }

    }

    void connectedComponents(int n){
        map <T, bool> visited;
        int ans=0;
        for(auto i :  adjList){
            if(!visited[i.first]){
                int temp=0;
                dfsHelper(i.first,visited,temp);
                ans += binomialCoeff(temp,2);
            }
        }

        cout << binomialCoeff(n,2) - ans <<endl;
    }
};


int main(){
    int n, m;
    cin >> n >>m;
    Graph <int> g;

    for(int i=0; i<m; i++){
        int u,v;
        cin >>u>>v;
        g.addEdge(u,v);
    }

    g.connectedComponents(n);
}
