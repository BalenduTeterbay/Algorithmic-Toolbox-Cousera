#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    if(n==2)
    {
      cout<<arr[0]*arr[1]<<endl;
      return 0;
    }
   ll first=INT_MIN,second=INT_MIN;
   
   for(ll i=0;i<n;i++)
    {
      if(arr[i]>first)
      {
        second=first;
        first=arr[i];
      }
      else if(arr[i]>second)
      second=arr[i];
    }
cout<<first*second<<endl;
     
        return 0;
    }
