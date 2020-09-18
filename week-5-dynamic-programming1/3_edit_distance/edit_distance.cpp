#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int z) 
{ 
    return min(min(x, y), z); 
} 

void ed(string s1,string s2)
{
    int m=s1.size();
    int n=s2.size();
    int edist[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            edist[i][j]=j;
            else if(j==0)
            edist[i][j]=i;
            else if(s1[i-1]==s2[j-1])
            edist[i][j]=edist[i-1][j-1];
            else
            edist[i][j]=1+min(edist[i-1][j],edist[i][j-1],edist[i-1][j-1]);
        }
    }
    cout<<edist[m][n]<<endl;
    return;
}
int main() {
	              
	                  string s1,s2;
	                  cin>>s1>>s2;
	                  ed(s1,s2);
	              
	return 0;
}