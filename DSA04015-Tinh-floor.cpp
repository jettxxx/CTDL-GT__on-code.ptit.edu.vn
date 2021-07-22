#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
    vector <ll> a;
    vector<ll>::iterator up; 
	while (t--){
        ll x;
        ll k, n;
        cin >> n >> x;
        for (int i=0; i < n; i++){
            cin >> k;
            a.push_back(k);
        }

        up = upper_bound(a.begin(), a.end(), x);
        
        if (up-a.begin() == 0) 
            cout << "-1" << endl;
        else 
            cout << up- a.begin()<< endl;
        a.clear();
    }
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/