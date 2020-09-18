#include<bits/stdc++.h>
using namespace std; 
int cmp(string a,string b)
{
    string s1=a.append(b);
    string s2=b.append(a);
    return s1>s2;
}
int main() {
		    int i,n;
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++)
	    cin>>s[i];
	    sort(s,s+n,cmp);
	    string result="";
	    for(i=0;i<n;i++)
	    result+=s[i];
	    cout<<result;
	    cout<<endl;

	return 0;
}