#include<bits/stdc++.h>

#define all(arr) arr.begin(), arr.end()
using namespace std;
#define insert_setToVec(st, vec) vec.insert(end(vec), begin(st), end(st))
#define insert_vecToSet(vec, st) st.insert(begin(vec), end(vec))
template<typename T>
ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }
#define deb(x) cerr << #x << " " << x << endl

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	cin >> arr;
	int mx= INT_MIN;
	for(int i=0; i<n-1; i++) mx= max(mx, arr[i]+arr[i+1]);
	cout << mx << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r" , stdin);
        freopen("output.txt", "w" , stdout);
    #endif
    int tt=1;
    cin >> tt; 
    for(int i=0; i<tt; i++){
    	solve();
    }
}