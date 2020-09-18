#include <bits/stdc++.h>
using namespace std;
int lcs(int X[],int Y[],int m,int n)
{
    int lcs[m+1][n+1];
    for(int i=0;i<=m;i++)
    for(int j=0;j<=n;j++)
    {
        if(i==0||j==0)
        lcs[i][j]=0;
        else if(X[i-1]==Y[j-1])
        {
            lcs[i][j]=1+lcs[i-1][j-1];
        }
        else
        lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
    }
    cout<<lcs[m][n]<<endl;
}
int main() {
	         
	        int m;
	        cin>>m;
            int arr[m];
            for(int i=0;i<m;i++)
            cin>>arr[i];
	        int n;
	        cin>>n;
	        int arr2[n];
	        for(int i=0;i<n;i++)
	        cin>>arr2[i];
	        
	        
	     lcs(arr,arr2,m,n);
	        

}