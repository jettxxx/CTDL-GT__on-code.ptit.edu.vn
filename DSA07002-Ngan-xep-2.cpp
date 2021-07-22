#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    int a[205], top = -1;
    string s;
	int t;
	cin >> t;
    while(t--){
		cin >> s;
        if(s == "PUSH"){
            int n; 
			cin >> n;
			top++;
            a[top] = n;
        }
        else if(s == "POP"){
            if(top >= 0) 
                top --;
        }
        else {
            if(top >= 0){
                cout << a[top];
            }
            else 
                cout << "NONE" ;
            cout << endl;
        }
    }
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/