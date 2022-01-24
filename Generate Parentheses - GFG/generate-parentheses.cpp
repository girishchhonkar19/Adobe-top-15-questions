// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(string s,int open,int close,vector<string> &ans)
    {
        if(open==0 && close==0)
        {
            ans.push_back(s);
            return;
        }
        
        if(open!=0 )
        solve(s+'(',open-1,close,ans);
        
        if(close>open)
        solve(s+')',open,close-1,ans);
    }
    
    vector<string> AllParenthesis(int n) 
    {
        int open=n,close=n;
        vector<string>ans;
        string s="";
        solve(s,open,close,ans);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends