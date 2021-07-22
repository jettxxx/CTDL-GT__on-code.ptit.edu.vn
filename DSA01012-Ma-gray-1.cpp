#include<bits/stdc++.h>
#define ll long long;
using namespace std;

void index(int c,int n){
	int r[n] = {0};
	int tmp = n;
	do{
		r[tmp-1] = c%2;
		tmp--; 
		c = c/2;
	} while (c!=0);
	for (int i = 0 ; i < n ; i++) 
		cout << r[i];
	cout << " ";
}

int main (){
	int t; 
	cin >> t;
	while (t--){
		int n; 
		cin >> n;
		int c; 
		for (int i = 0  ; i < pow(2,n) ; i++){
			c = i ^ (i >> 1);
			index(c,n);
		}
		cout << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Mar 18 2021
-  Github : github.com/Nhaatj
*/