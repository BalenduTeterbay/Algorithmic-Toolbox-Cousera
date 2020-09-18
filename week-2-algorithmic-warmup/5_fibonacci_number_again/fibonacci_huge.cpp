//We can use seperate libraries as well.
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pisanoperiod(ll m)
{
  ll a=0,b=1,c=a+b;
  for(ll i=0;i<m*m;i++)
   {
     c=(a+b)%m;
     a=b;
     b=c;
    if(a==0&&b==1)return i+1;
    }
}
ll fibohuge(ll n,ll m)
{
  ll remainder=n%pisanoperiod(m);
  ll a=0,b=1,c=remainder;
  for(ll i=1;i<remainder;i++)
   {
     c=(a+b)%m;
     a=b;
     b=c;
    }
return c%m;
}
int main() {
    ll n, m;
    cin >> n >> m;
    cout << fibohuge(n, m) << '\n';
}
