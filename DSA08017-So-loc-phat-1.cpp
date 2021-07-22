#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int k,a[MAX],check=1;

void output(int x){
	for (int i=1; i<=x; i++){
		if (a[i]==0) 
            cout << 8;
		else 
            cout << 6;
	}
	cout << " ";
}

void run(int n){
	int i=n;
	while (a[i]==1 && i>0){
		a[i]=0;
		i--;
	}
    
	if (i>0) 
        a[i]=1;
	else 
        check=0;
}
int main(){
    int t,n;
    cin >> t;
    while (t--){
		cin>>n;
        for (int k=n; k > 0; k --){
            check=1;
            while (check){
                output(k);
                run(k);
            }
        }
        cout << endl;
    }
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/