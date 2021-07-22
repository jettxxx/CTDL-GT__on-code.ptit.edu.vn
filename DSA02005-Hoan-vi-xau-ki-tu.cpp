#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int n, a[10], check;
string s;
void output(){
    for (int i=0; i < n; i++) 
        cout << s[a[i]-1];
    cout << " ";
}
void run(){
    int i=n-2;
    while (i >= 0 && a[i] > a[i+1]) 
        i--;
    if (i >= 0){
        int j=n-1;
        while (a[j] < a[i]) 
            j--;
        swap(a[i], a[j]);
        sort(a+i+1, a+n);
    }else 
        check = 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
        cin >> s;
        n = s.size();
        for (int i=0; i < n; i++) 
            a[i]=i+1;
        check=1;
        while (check){
            output();
            run();
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