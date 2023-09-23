//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {

           int leftsum=0; 
           int rightsum=0;
          for(int i=0;i<n;++i){
              leftsum+=a[i];
                  }   
          for(int i=n-1;i>=0;i--){
            rightsum+=a[i];
           if(leftsum==rightsum)
                  return i+1;
           leftsum -= a[i];
        }
        return -1;
    }

};
// } Driver Code Ends

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends