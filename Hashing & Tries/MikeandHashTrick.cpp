#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(ll x=0; x<n; ++x);
#define ll long long
unordered_map<ll,ll> map1;

void prllVector(vector<ll> v){
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

bool compare(ll a, ll b) {
    return map1[a]<map1[b];
}



int main(){
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<ll> v;

    for(ll i=0; i<n; i++){
        if(!map1.count(arr[i])) v.push_back(arr[i]);
        map1[arr[i]] = i;
    }

    sort(v.begin(),v.end(),compare);
    prllVector(v);


}
