#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll merge(ll arr[],ll temp[],ll left,ll mid,ll right)
{
    ll inv_count=0;
    ll i=left;
    ll j=mid;
    ll k=left;
    while(i<=mid-1&&j<=right)
    {
        if(arr[i]<=arr[j])
        temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            inv_count+=mid-i;
        }
    }
    while(i<=mid-1)
    temp[k++]=arr[i++];
    while(j<=right)
    temp[k++]=arr[j++];
    for(int i=left;i<=right;i++)
    arr[i]=temp[i];
    return inv_count;
}
ll _mergesort(ll arr[],ll temp[],ll left,ll right)
{
    ll inv_count=0;
    
    if(left<right)
    {
        ll mid=(left+right)/2;
        inv_count=_mergesort(arr,temp,left,mid);
        inv_count+=_mergesort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}
int main()
{
            ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        ll temp[n];
        cout<<_mergesort(arr,temp,0,n-1)<<endl;
}