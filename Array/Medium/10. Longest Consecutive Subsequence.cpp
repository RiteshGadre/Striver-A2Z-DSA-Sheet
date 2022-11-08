//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      multiset<int> st;
      for(int i=0; i<N; i++){
          st.insert(arr[i]);
      }
      
      int i= 0;
      for(auto it: st){
          arr[i++]= it;
      }
      
      int mx= 0;
      int ct= 1;
      for(int i=1; i<N; i++){
          int diff= arr[i]-arr[i-1];
          if(diff < 2){
              ct+= diff;
          }
          else ct= 1;
          mx= max(mx, ct);
      }
      mx= max(mx, ct);
      return mx;
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
