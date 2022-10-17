#include<bits/stdc++.h>
using namespace std;
#define insert_setToVec(st, vec) vec.insert(end(vec), begin(st), end(st))
#define insert_vecToSet(vec, st) st.insert(begin(vec), end(vec))
template<typename T>
ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }
#define deb(x) cerr << #x << " " << x << endl

void solve(){
	int n; cin >> n;
	int count= 0;
	int candidate= 0;
	vector<int> num(n);
	cin >> num;
	for(auto it : num){
		if(count== 0) candidate= it;
		if(it== candidate) count++;
		else count--;
	}

	cout << candidate << endl;
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