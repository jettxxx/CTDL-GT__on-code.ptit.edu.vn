#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
        int n,temp,x;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp == x)   
                cout << i + 1 << endl;
        }
    }
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/