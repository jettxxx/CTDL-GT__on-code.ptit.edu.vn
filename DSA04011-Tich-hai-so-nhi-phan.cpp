#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MAX 1000
using namespace std;

ull run(string s){
    ull res=0;
    int l=s.size();
    for (int i=l-1; i >= 0; i--){
        res += (s[i]-'0') * pow(2,l-i-1);
    }
    return res;
}
int main(){
	int t;
	cin >> t;
    string x,y;
	while (t--){
        cin >> x >> y;
        cout << run(x) * run(y) << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/