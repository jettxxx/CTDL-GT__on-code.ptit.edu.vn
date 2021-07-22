#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
	cin >> t;
	while (t--){
        int n,temp;
        vector<int> a;

        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        if(n == 1 || a[0] == a[n-1])
            cout << -1 << endl;
        else
            cout << a[0] << " " << a[1] << endl;  
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/