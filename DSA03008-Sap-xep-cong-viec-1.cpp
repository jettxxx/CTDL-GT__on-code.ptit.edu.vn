#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int s[MAX],f[MAX];
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
        cin >> n;
        for (int i=0; i < n; i++) 
            cin >> s[i];
        for (int i=0; i < n; i++) 
            cin >> f[i];

		for (int i=0; i < n-1; i++)
			for (int j=i+1; j < n; j++)
				if (f[i] > f[j]){
					swap(f[i], f[j]);
					swap(s[i], s[j]);
				}

		int j=0, c=1;
		for (int i=1; i < n; i++){
			if (f[j] <= s[i] && s[i] <= f[i]){
				c ++;
				j = i;
			}
		}
        cout << c << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/