// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        if(n==1 || n==2) return n;
        int dp[n][n]={2};
        for(int i=0;i<n;i++)
        dp[i][n-1]=2;
        int ans=2;
        for(int j=n-2;j>0;j--)
        {
            int i=j-1,k=j+1;
            
            while(i>=0 && k<n)
            {
                if(2*A[j] == A[i]+A[k])
                {
                    dp[i][j]=1+dp[j][k];
                    ans=max(ans,dp[i][j]);
                    i--;k++;
                }
                else if(2*A[j] < A[i]+A[k])
                {
                    dp[i][j]=2;
                    i--;
                }
                else{
                    
                    k++;
                }
            }
            while(i>=0)
            {
               dp[i][j]=2;
               i--;
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends