#include<bits/stdc++.h>
#define ll long long
#define MAX 100000
using namespace std;

ll a[MAX] ;
void run(){
	a[1]=1 ;
	a[2]=1 ;

	for ( int i=3 ; i<=93 ; i++ ) 
		a[i] = a[i-1] + a[i-2] ;
	return ;
}
char index(ll i, int x)
{
	if ( x==1 ) 
        return 'A' ;
	if ( x==2 ) 
        return 'B' ;

	if ( i>a[x-2] ) 
        return index( i-a[x-2], x-1 ) ;
	return index( i, x-2 ) ; 
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