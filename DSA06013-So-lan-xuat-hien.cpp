#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,x,c = 0,temp;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp == x)   
                c++;
        }
        if(c) 
            cout << c << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/