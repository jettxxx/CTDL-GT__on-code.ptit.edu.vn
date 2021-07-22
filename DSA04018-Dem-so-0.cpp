#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        int k = s.find('1');
        if (k == -1) 
            cout << n << endl;
        else 
            cout << k/2 << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/