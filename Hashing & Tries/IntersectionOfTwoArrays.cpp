#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
int main()
{
     unordered_map<int,int> mp;
     priority_queue<int,vector<int>,greater<int> >pq;
     int n;
     cin>>n;
     int num;
     for(int i=0;i<1000;i++)
     mp[i]=0;
     for(int i=0;i<n;i++)
     {
         cin>>num;
         mp[num]=mp[num]+1;
     }
     cout<<"[";
     
     for(int j=0;j<n;j++)
     {
         cin>>num;
         if(mp[num]>0)
         {
             pq.push(num);
             mp[num]=mp[num]-1;

         }
     }
     cout<<pq.top();
     pq.pop();
     while(!pq.empty())
     {
        cout<<", "<<pq.top();
        pq.pop();
     }
     cout<<"]";
     return 0;

}
