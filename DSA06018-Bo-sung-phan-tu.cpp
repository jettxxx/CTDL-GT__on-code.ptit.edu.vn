#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
	cin >> t;
	while (t--){
        int n,max = 0, min = 1000;
        cin >> n;
        int a[n+1];

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > max) 
                max = a[i];
            if(a[i] < min)  
                min = a[i];
        }
        sort(a,a+n);

        int c =1;

        for(int i = 0; i < n-1; i++){
            if(a[i] != a[i+1])  
                c++;
        }
        cout << max-min+1-c << endl;
	}

    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/