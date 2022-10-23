//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k= (k%n);
	   int start= 0;
	   int end= k-1;
	   while(start<end) swap(arr[start++], arr[end--]);
	   start= k, end= n-1;
	   while(start<end) swap(arr[start++], arr[end--]);
	   start= 0, end= n-1;
	   while(start<end) swap(arr[start++], arr[end--]);
	   
	   
	   //1 2 3 4 5 6 7
	   //2 1 7 6 5 4 3
	   //3 4 5 6 7 1 2

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
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
