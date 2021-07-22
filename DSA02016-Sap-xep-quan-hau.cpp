#include<bits/stdc++.h>
#define ll long long
#define MAX 10

using namespace std;

int n, dem;
int a[MAX+1][MAX+1], maxx=0;
int cot[MAX+1],db[2*MAX+1], dn[2*MAX+1];
int x[MAX+1];

void try1(int i){				
	for (int j=1; j <= n; j++){
		if (cot[j] && db[i+j] && dn[i-j+n]){		
			x[i]=j;			
			
            if (i == n) dem ++;
			else{
				cot[j]=0;  db[i+j]=0; dn[i-j+n]=0;   
				try1(i+1);
				cot[j]=1;  db[i+j]=1; dn[i-j+n]=1;   
			}
		}
	}
	return;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
        cin >> n;
		
		for (int i=1; i <= n; i++) cot[i]=1;
		for (int i=1; i <= 2*n; i++){
			db[i]=1;
			dn[i]=1;
		}
        dem = 0;
		try1(1); 	
		cout << dem << endl;
	}

	return 0 ;
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jun 06 2021
-  Github : github.com/Nhaatj
*/