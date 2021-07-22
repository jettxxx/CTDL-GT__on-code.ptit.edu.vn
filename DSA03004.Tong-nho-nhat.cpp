#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	int *p, n;
	while (t--){
		ll a=0, b=0;
		cin >> n;
        
		p = new int[n];
		for (int i=0; i < n; i++) 
            cin >> p[i];
            
		sort(p,p+n);
		for (int i=0; i < n-1; i+=2){
            a = a*10 + p[i];
            b = b *10 + p[i+1];
        }
        if (n%2) 
            a = a*10 + p[n-1];
		cout << a + b << endl;
		delete(p);
	}
    
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/