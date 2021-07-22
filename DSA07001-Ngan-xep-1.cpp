#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    int a[205], top = -1;
    string s;
    while(cin >> s){
        if(s == "push"){
            int n; 
			cin >> n;
			top++;
            a[top] = n;
        }
        else if(s == "pop"){
            if(top >= 0) top --;
        }
        else {
            if(top >= 0){
                for(int i = 0; i <= top; i++) 
                    cout << a[i] <<" ";
            }
            else 
                cout << "empty" ;
            cout << endl;
        }
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/