#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,m,temp;
        ll min = 10000000,max = -100000000;

        cin >> n >> m;
        for(int i = 0 ; i < n; i++){
            cin >> temp;
            if(temp > max)  
                max = temp;
        }
        
        for(int i = 0 ; i < m; i++){
            cin >> temp;
            if(temp < min) 
                min = temp;
        }
        cout << max*min << endl;
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/