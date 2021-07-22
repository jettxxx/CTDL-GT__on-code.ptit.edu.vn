#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void run(int a[], int l , int r)
{
	int  i=l , j=r ;
	int x=a[(l+r)/2] ;
	do{
		while ( a[i]<x ) 
            i++ ;
		while ( a[j]>x ) 
            j-- ;
            
		if ( i<=j )
		{
			swap(a[i],a[j]) ;
			i++ ;
			j-- ;
		}
	}while ( i<=j ) ;

	if ( l<j ) 
        run(a,l,j) ;
	if ( i<r ) 
        run(a,i,r) ;
	return ;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,a[1001];
		cin >> n;
		for(int i=0; i<n; i++) 
            cin >> a[i];

		run(a,0,n-1);

		for (int i=0; i < n/2; i++){
			cout << a[n-1-i] << " ";
			cout << a[i] << " ";
		}
		if (n%2 != 0) 
            cout << a[n/2] << endl;
		else 
            cout << endl;
	}

	return 0 ;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/