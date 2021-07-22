#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
		int n;
		cin >> n;
		cin.ignore();
		int *a[n+1];   
		for (int i=0; i <= n; i++) 
            a[i]=new int[n+1]; 

		for (int i=1; i <= n; i++)
			for (int j=1; j <= n; j++){
				a[i][j]=0;
			}
		
		for (int i=1; i <= n; i++){
			string s;
			stringstream ss;
			int k;
			getline(cin,s);
			ss << s;
			while (ss >> k) 
                a[i][k] = 1;
		}
		for (int i=1; i <= n; i++){
			for (int j=i+1; j <= n; j++)
				if (a[i][j]) 
                    cout << i << " " << j << endl;
			}
		cout << endl;
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jun 06 2021
-  Github : github.com/Nhaatj
*/