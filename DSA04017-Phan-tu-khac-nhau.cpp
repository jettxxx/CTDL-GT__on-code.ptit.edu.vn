#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
    ll *p;
	while (t--){
        int n, k, check = 1;
        cin >> n;
        p=new ll[n];
        for (int i=0; i < n; i++) 
            cin >> p[i];
        for (int i=0; i < n-1; i++){
            cin >> k;
            if (check && k != p[i]){
                cout << i+1 << endl;
                check = 0;
            }
        }
        if (check) cout << n << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/