#include<bits/stdc++.h>
#define ll long long
#define MAX 100000
using namespace std;

ll a[MAX];
void run(){
	a[1]=1 ;
	for ( int i=2 ; i<=50 ; i++ ) 
		a[i] = a[i-1] *2 + 1;
	return ;
}
int index(ll i, int x)
{
	if (i == a[x-1]+1) 
        return x ;
	if (i > a[x-1] +1) 
        return index(i-a[x-1]-1,x-1) ;
	return index( i, x-1 ) ; 
}
int main(){
	int t ,n ;
	ll i ;
	run() ;
	cin >> t ;
	while ( t-- ){
		cin >> n >> i ; 
		cout << index(i, n) << endl ;
	}
	return 0 ;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/