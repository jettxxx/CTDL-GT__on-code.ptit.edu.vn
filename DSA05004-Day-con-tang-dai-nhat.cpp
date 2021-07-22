#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int n, a[MAX], b[MAX], m=1;
    cin >> n;

    for (int i=0; i < n; i++) 
        cin >> a[i];

    for (int i=0; i < n; i++){
        b[i]=1;
        for (int j=0; j < i; j++)
            if (a[j] < a[i]) 
                b[i] = max(b[j]+1, b[i]);
        m = max(m, b[i]);
    }
    cout << m;
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/