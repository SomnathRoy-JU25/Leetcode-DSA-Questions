//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string s) { 
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = n - 1; i >= 0; i--) {
           dp[i][i] = 1;
           
        for (int j = i + 1; j < n; j++) {
             if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
             } 
             else{
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
             }
           }
        }
        return n - dp[0][n - 1];
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends