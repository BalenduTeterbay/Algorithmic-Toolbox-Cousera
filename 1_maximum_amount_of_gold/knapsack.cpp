#include <bits/stdc++.h>
using namespace std;
int kp(int W,vector<int> wt,int n)
{
    vector< vector< int> >  K(n + 1,vector< int>(W + 1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            K[i][j]=0;
            else if(wt[i-1]<=j)
            K[i][j]=max(wt[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);
            else
            K[i][j]=K[i-1][j];
        }
    }
    return K[n][W];
}
int main() {
	        
	            int n,w;
	            cin>>w>>n;
	            vector<int>wt(n);
	            
	            for(int i=0;i<n;i++)
	            cin>>wt[i];
	            cout<<kp(w,wt,n)<<endl;
	       
	return 0;
}