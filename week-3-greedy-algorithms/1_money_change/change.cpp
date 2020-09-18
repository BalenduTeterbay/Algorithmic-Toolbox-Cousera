#include <bits/stdc++.h>
using namespace std;
int get_change(int m) {
  int coins[]={1,5,10};

int count=0;
int n=sizeof(coins)/sizeof(coins[0]);
  for(int i=n-1;i>=0;i--)
  {
    if(coins[i]<=m)
    {count++;
      m=m-coins[i];
      i++;
       
     }
    }
  return count;
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
