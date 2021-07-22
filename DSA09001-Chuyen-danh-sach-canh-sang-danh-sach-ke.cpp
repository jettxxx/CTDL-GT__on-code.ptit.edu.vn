#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int V,E,x,y;
		cin >> V >> E;
		int *a[V+1];   
		for (int i=0; i <= V; i++) a[i]=new int[V+1]; 

		for (int i=0; i <= V; i++)
			for (int j=0; j <= V; j++){
				a[i][j]=0;
			}

		for (int i=0; i < E; i++){
			int x,y;
			cin >> x >> y;
			a[x][y] = a[y][x] = 1;
		}

		for (int i=1; i <= V; i++){
			cout << i << ": ";
			for (int j=1; j <= V; j++)
				if (a[i][j]) cout << j << " ";
			cout << endl;
		}
	cout << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/