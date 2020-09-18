#include<bits/stdc++.h>
using namespace std;

struct items
{
    int val;
    int wt;
};
bool cmp(items a,items b)
{
    return (float)a.val/a.wt>(float)b.val/b.wt;
}
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
 int n=values.size();
  items things[n];
  for(int i=0;i<n;i++)
  {
    things[i].val=values[i];
    things[i].wt=weights[i];
   }
   sort(things,things+n,cmp);
  int curr_weight=0;
  double value=0;
	    for(int i=0;i<n;i++)
	    if(curr_weight+things[i].wt<=capacity)
	    {
	        value+=things[i].val;
	        curr_weight+=things[i].wt;
	    }
	    else
	    {
	        int rem=capacity-curr_weight;
	        value+=things[i].val*((float)rem/things[i].wt);
	        break;
	    }
   return value;
}
   int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout<<fixed<<setprecision(4)<<optimal_value<<endl;
    return 0;
}
