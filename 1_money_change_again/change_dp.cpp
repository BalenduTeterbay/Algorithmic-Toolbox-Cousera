#include <bits/stdc++.h>
using namespace std;
int get_change(int amt)
{
    int coins[]={1,3,4};
    int n=3;
    int coinschange[amt+1];
    for(int i=0;i<=amt;i++)
    coinschange[i]=INT_MAX;
    coinschange[0]=0;
    for(int i=0;i<=amt;i++)
    for(int j=0;j<n;j++)
    {
        if(coins[j]<=i)
        {
            int sub_res=coinschange[i-coins[j]];
            if(sub_res!=INT_MAX&&sub_res+1<coinschange[i])
            coinschange[i]=sub_res+1;
        }
    }
    return coinschange[amt];
}
int main() 
{
    int m;
    cin >> m;
    cout << get_change(m) << '\n';
}
