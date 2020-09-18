#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Segment {
  int start, end;
};
bool cmp( Segment a,Segment b)
{
   return a.end<b.end;
}
vector<int> optimal_points(Segment segments[],int n) {
  vector<int> points;
   
   sort(segments,segments+n,cmp);
 int point=segments[0].end;
 points.push_back(point);
  
  for (ll i = 1; i < n; ++i) {
    if(point>segments[i].end||point<segments[i].start)
     {
       point=segments[i].end;
       points.push_back(point);
  }
}
  return points;
}

int main() {
  int n;
  cin >> n;
  Segment segments[n];
  for (ll i = 0; i < n;++i) {
    cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments,n);
  cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    cout << points[i] << " ";
  }
}