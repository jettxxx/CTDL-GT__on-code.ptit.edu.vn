#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
	cin >> t;
	while (t--){
        int n,m,temp;
        vector<int> a;

        cin >> n >> m;
        for(int i = 0; i < n+m; i++){
            cin >> temp;
            a.push_back(temp);
        }
        
        sort(a.begin(),a.end());

        for (int i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/