#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int a[100], c[100], n, k, check;
void run(){
    int i=k;
    while (c[i] == n-k+i) i--;
    if (i > 0){ 
        c[i]++;
        for (int j = i+1; j <= k; j++) c[j] = c[j-1] + 1;
    }
    else check = 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
        int count = 0;
        cin >> n >> k;
        for (int i=1; i <= k; i++){
            cin >> a[i];
            c[i] = a[i];
        }
        check = 1;
        run();
        if (check){
            for (int i=1; i <= k; i++)
                for (int j=1; j <= k; j++)
                    if (c[i] == a[j]){
                        count ++;
                        break;
                    }
            cout << k - count << endl;
        }
        else cout << k << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/