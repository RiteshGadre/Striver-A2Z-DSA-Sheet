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
        for(int i=0; i<s.size(); i++){
            int num= s[i]-'0';
            if(num&1){
                if(ans.size()>0)ans.pop_back();
                ans.push_back(s[i]);
            }
        }
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
