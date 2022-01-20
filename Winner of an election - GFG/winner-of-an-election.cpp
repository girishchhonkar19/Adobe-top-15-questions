// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        vector<string>res;
        map<string,int>m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        
        int ans=0;
        string s="";
        for(auto x:m)
        {
           if(x.second>ans)
           {
               ans=x.second;
               s=x.first;
           }
           
           
        }
        
        for(auto x:m)
        {
            if(x.second==ans)
            {
                if(s.compare(x.first)>0)
                s=x.first;
            }
            
        }
            res.push_back(s);
            res.push_back(to_string(ans));
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends