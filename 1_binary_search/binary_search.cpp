#include<bits/stdc++.h>
using namespace std;
#define ll long long
void binarysearch(vector<int>arr,vector<int>arr2)
{
    ll n=arr.size();
    ll m=arr2.size();
      unordered_map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        mp[arr[i]]=i;
        for(ll i=0;i<m;i++)
       {
        if(mp.find(arr2[i])!=mp.end())
        {
            cout<<mp[arr2[i]]<<' ';
            
        }
        else
         cout<<-1<<' ';
       }
}
int main() {
  ll n;
  cin >> n;
  vector<int> a(n);
  for (ll i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  ll m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
binarysearch(a,b);
  
}
