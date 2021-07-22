#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    int a[101];
    int b[101], c[101];
    
	int t;
	cin >> t;
	while (t--){
        int n, maxx=0; 
        cin >> n;

        memset(b, 0, sizeof b);
        memset(c, 0, sizeof c);

        for (int i=0; i < n; i++) 
            cin >> a[i];
        for (int i=0; i < n; i++){
            b[i]=a[i];
            for (int j=0; j < i; j++){
                if (a[i] > a[j]) 
                    b[i] = max(b[j]+a[i], b[i]);
            }
        }

        for (int i=n-1; i >= 0; i --){
            c[i]=a[i];
            for (int j= n-1; j > i; j--){
                if (a[i] > a[j]) 
                    c[i] = max(c[j]+a[i], c[i]);
            }
        }

        for (int i=0; i < n; i++){
            maxx= max(maxx, b[i]+c[i]-a[i]);
        }
        cout << maxx << endl;
        

	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/