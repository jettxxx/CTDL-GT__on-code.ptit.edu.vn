#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

bool check(int i, int j){
    return i > j;
}

int main(){
	int t;
	cin >> t;
	while (t--){
        int n;
        cin >> n;
        int a[n];

        for (int i=0; i< n; i++) 
            cin >> a[i];

        sort(a, a+n, check);
        int k=n/2, c=0;

        for (int i=0; i < n/2, k < n;){
            if (a[i] >= 2*a[k]){
                k++;
                i++;
                c+=1;
            }
            else k++;
        }
        cout << n-c << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/