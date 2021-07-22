#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
    multiset <int> a; 
    multiset <int> :: iterator b; 
	while (t--){
        int n,m,k,x;
        cin >> n >> m >> k;
        for (int i=0; i < m+n; i++){
            cin >> x;
            a.insert(x);
        }

        b = a.begin();

        while (k--) 
            b++;
        b--;
        cout << *b << endl;
        a.clear();

	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/