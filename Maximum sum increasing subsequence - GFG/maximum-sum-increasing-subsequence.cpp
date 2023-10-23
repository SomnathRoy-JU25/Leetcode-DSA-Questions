//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
    // memoization
    int Tabulation(int arr[], int n)
    {
        vector<int> dp(arr,arr+n);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    dp[i] = max(dp[j] + arr[i], dp[i]);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
    int maxSumIS(int arr[], int n)  
    {  
        return Tabulation(arr,n);
    } 
    
   

};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends