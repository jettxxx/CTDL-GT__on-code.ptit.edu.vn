#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int c[100], a[100];
int s, sum, kt,n;
void run(int k){
    
    for (int i=0; i < n; i++){
        if (c[i]){
            s += a[i];
            c[i] = 0;
            if (s == sum){
                kt = 1;
                return;
            }
            if (s < sum) run(k+1);
            c[i] = 1;
            s -= a[i];
        }
    }
}
int main(){
	int t;
	cin >> t;
	while (t--){
        memset(c, 1, sizeof c);
        cin >> n;
        sum = 0; s=0; kt=0;
        for (int i=0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2) 
            cout << "NO" << endl;
        else{
            kt=0;
            sum /= 2;
            run(0);
            if (kt) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/