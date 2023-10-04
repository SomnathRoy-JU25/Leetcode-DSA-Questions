//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        unordered_map<char,int> m = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},
        {'M', 1000} };
        int result = 0 ; 

        for (int i = 0 ; i < s.length() ; i++)
        {
            if (m[s[i]] < m[s[i+1]])
            {
                result = result - m[s[i]] ;
            }
            else 
            {
                result += m[s[i]] ;
            }
        }
        return result ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends