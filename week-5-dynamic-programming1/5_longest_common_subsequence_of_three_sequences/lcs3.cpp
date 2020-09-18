#include <bits/stdc++.h>
using namespace std;
int lcs(int X[],int Y[],int Z[],int m,int n,int o)
{
    int lcs[m+1][n+1][o+1];
    for(int i=0;i<=m;i++)
    {
    for(int j=0;j<=n;j++)
    {
    for(int k=0;k<=o;k++)
    {
        if(i==0||j==0||k==0)
        lcs[i][j][k]=0;
        else if(X[i-1]==Y[j-1]&&X[i-1]==Z[k-1])
        {
            lcs[i][j][k]=1+lcs[i-1][j-1][k-1];
        }
        else
        lcs[i][j][k]=max(max(lcs[i-1][j][k],lcs[i][j-1][k]),lcs[i][j][k-1]);
    }
    }
    }
    return lcs[m][n][o];
}
int main() {
	         
	         int m,n,o;
	         cin>>m;
	         int arr1[m];
	         for(int i=0;i<m;i++)
	         cin>>arr1[i];
	         cin>>n;
	         int arr2[n];
	         for(int i=0;i<n;i++)
	         cin>>arr2[i];
	         cin>>o;
	         int arr3[o];
	         for(int i=0;i<o;i++)
	         cin>>arr3[i];
	         
	         
	         cout<<lcs(arr1,arr2,arr3,m,n,o)<<endl;
	        
	return 0;
}