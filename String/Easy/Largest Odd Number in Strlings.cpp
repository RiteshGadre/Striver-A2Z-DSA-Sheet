//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        string ans= "";
        int best= 0;
        // your code here
        int i=s.size()-1;
        for(; i>=0; i--){
            int num= s[i]-'0';
            if(num&1){
                break;
            }
        }
        
        for(int j=0; j<=i; j++) ans+= s[j];
        return ans;
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

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends
