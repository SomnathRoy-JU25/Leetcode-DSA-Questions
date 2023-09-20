//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
  int rotateLeft(int N, int D) {
    bitset<16> nBinary(N);
    bitset<16> result;
    
    for (int i = 0; i < 16; i++) {
        result[i] = nBinary[(i + D) % 16];
    }
    
    return static_cast<int>(result.to_ulong());
}

int rotateRight(int N, int D) {
    bitset<16> nBinary(N);
    bitset<16> result;
    
    for (int i = 0; i < 16; i++) {
        result[i] = nBinary[(i - D + 16) % 16];
    }
    
    return static_cast<int>(result.to_ulong());
}
    
    vector <int> rotate (int N, int D)
    {
        vector<int>ans;
        
        int leftRotationResult = rotateLeft(N, D % 16);
        int rightRotationResult = rotateRight(N, D % 16);
        
        ans.push_back(rightRotationResult);
        ans.push_back(leftRotationResult);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends