#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t, n, k, a[1001];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for (int i=0; i<k; i++) 
            cin >> a[i];
		int j=k-1;
		while (j > 0 && a[j] == a[j-1] +1) 
            j--;
		if (a[j] > 1) 
            a[j]--;
		else 
            a[j] = n-k+1;

		for (int i=j+1; i<k; i++)
			a[i] = n+i-k+1;
	
		for (int i=0; i<k; i++) 
            cout << a[i] << " ";
		cout << endl;
	}

	return 0 ;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/