//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int FirstOcc(int arr[],int n,int x){
        int st = 0;
        int end = n-1;
        int mid = st + (end-st)/2;
        int ans = -1;
        while(st <= end){
            if(arr[mid] == x){
                ans = mid;
                end = mid - 1;
            }
            else if(arr[mid] < x){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = st + (end-st)/2;
        } 
        return ans;
    }
    int LastOcc(int arr[],int n,int x){
        int st = 0;
        int end = n-1;
        int mid = st + (end-st)/2;
        int ans = -1;
        
        while(st <= end){
            if(arr[mid] == x){
                ans = mid;
                st = mid + 1;
            }
            else if(arr[mid] < x){
                st = mid + 1;
            }
            else{
                end = mid  - 1;
            }
            mid = st + (end -st)/2;
          }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
       vector<int>ans;
       int first = FirstOcc(arr,n,x);
       int last = LastOcc(arr,n,x);
       ans.push_back(first);
       ans.push_back(last);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends