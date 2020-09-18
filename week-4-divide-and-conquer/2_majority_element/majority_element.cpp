#include<bits/stdc++.h>
using namespace std;
#define ll long long
int get_majorityelement(vector<ll>arr,ll n)
{
    if(n==0) return -1;
    
    unordered_map<int,int>mp;
    ll t=n/2;
    ll count=0;
    for(ll i=0;i<n;i++)
    mp[arr[i]]=0;
    for(ll i=0;i<n;i++)
    mp[arr[i]]++;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>t)
        count=1;
    }
    return count;

    
}
int main() {
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (ll i = 0; i < arr.size(); ++i) {
    cin >> arr[i];
  }
  cout << get_majorityelement(arr,n) << '\n';
}