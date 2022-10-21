//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        vector<pair<int,int>> ans;
        sort(B, B+M);
    	for(int i=0; i<N; i++){
	    	int start= 0;
		    int end= M-1;
		    int element= X-A[i];
		    bool pos= 0;
		    while(start<=end){
			    int mid= (start+end)/2;
			    if(B[mid]== element) {pos= 1; break;}
    			else if(B[mid]>element) end= mid-1;
	    		else start= mid+1;
		    }
		    if(pos) ans.push_back(make_pair(A[i], element));
    	}
    	sort(ans.begin(), ans.end());
    	return ans;
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends
