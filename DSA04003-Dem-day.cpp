#include<bits/stdc++.h>
#define ll long long
#define MAX 123456789
using namespace std;

ll run(ll n, ll k){
    ll i=1;
    while (k){
        if (k & 1) 
            i = (i * n) % MAX;
        k = k >> 1;
        n = n * n % MAX;
    }
    return i;
}
int main(){
	int t;
	cin >> t;
	while (t--){
        ll n;
        cin >> n;
        cout << run(2,n-1) << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/