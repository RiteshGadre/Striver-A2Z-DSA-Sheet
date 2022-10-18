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
	vector<int> temp1, temp2;
	
	for(auto it: arr){
			if(it>= 0) temp1.push_back(it);
			else temp2.push_back(it);
	}

	int i= 0;
	int j= 0;
	int k= 0;
	while(i<temp1.size() && j<temp2.size()){
		arr[k++]= temp1[i++];
		arr[k++]= temp2[j++];
	}

	while(i< temp1.size()) arr[k++]= temp1[i++];
	while(j< temp2.size()) arr[k++]= temp2[j++];

	cout << arr << endl;

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
