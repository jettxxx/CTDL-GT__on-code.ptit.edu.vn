#include<bits/stdc++.h>
using namespace std;

vector<int>k[1005];
bool ok[1005];

void solve(int n) {
	ok[n] = true;
	cout << n << " ";
	for (int i = 0; i < k[n].size(); i++) 
		if (!ok[k[n][i]]) 
			solve(k[n][i]);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++) k[i].clear();
		memset(ok, false, sizeof(ok));
		int a, b, fi;
		cin >> a >> b >> fi;
		for (int i = 0; i < b; i++) {
			int u, v;
			cin >> u >> v;
			k[u].push_back(v);
			k[v].push_back(u);
		}
		solve(fi);
		cout << endl;
	}
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jun 06 2021
-  Github : github.com/Nhaatj
*/