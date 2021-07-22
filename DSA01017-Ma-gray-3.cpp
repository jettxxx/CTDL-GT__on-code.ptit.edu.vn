#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int n, check, g[10];
string s;
void output(){
    for (int i=0; i < s.size(); i++) 
        cout << g[i];
    cout << endl;
}
void run(){
    g[0] = s[0]-'0';
    for (int i=1; i < s.size(); i++){
        if (s[i] == s[i-1]) 
            g[i] = 0;
        else 
            g[i] = 1;
    }
}


int main(){
	int t;
	cin >> t;
	while (t--){
        cin >> s;
        run();
        output();
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/