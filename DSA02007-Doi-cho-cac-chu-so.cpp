#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

string s;

void swapp(int k) {
	for(int i=0 ; i<s.length() ; i++) {
		char ss = s[s.length()-1] ;
		int x ;

		for(int j = i+1; j < s.length() && k > 0; j++){
			if(ss  <= s[j] ) {
				ss = s[j] ;
				x= j;
			}
		}
		if(ss > (s[i]) && k > 0) {
			swap(s[i] , s[x]);
			k--;
		}
        if (k == 0) 
            break;
	}
	
}
int main() {
	int t,k;
	cin >> t;
	while(t--) {
		cin >> k;
		cin >> s;
		swapp(k);
        cout << s;
		cout << endl;
	}
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/