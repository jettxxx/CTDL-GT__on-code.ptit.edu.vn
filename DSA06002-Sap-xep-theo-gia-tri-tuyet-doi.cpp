#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i=0; i < n; i++){
            cin >> a[i];
            b[i] = abs(x-a[i]);
        }
        
        for (int i=0; i < n-1; i++){
            int check = 0;
            for (int j=0; j < n-i-1; j++){
                if (b[j] > b[j+1]){
                    check = 1;
                    swap(b[j], b[j+1]);
                    swap(a[j], a[j+1]);
                }
            }
            if (!check) 
                break;
        }
        for (int i=0; i < n; i++) 
            cout << a[i] << " ";
        cout << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/