// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int n=str.size();
        int ans=0;
        int flag=0;
        if(str[0]=='-')
        {
            
            str[0]='0';
            flag=1;
            
        }
        for(int i=0;i<n;i++)
        {
            if(isdigit(str[i]))
            {
                int x=str[i]-'0';
                ans=(ans*10)+x;
            }
            else
            return -1;
           
        }
        if(flag==1) return ans*-1;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends