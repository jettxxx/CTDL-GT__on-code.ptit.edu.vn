#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int n,k, check, a[100];
void created(){
    k=1; a[k]=n;
}
void input(){
    cout << "(";
    for (int i=1; i <= k; i++){
        if (i == k) cout << a[i] << ") ";
        else cout << a[i] << " ";
    }
}
void run(){
    int i=k, T,S,D;
    while (a[i] == 1) i--;
    if (i == 0) check = 0;
    else{
        a[i]--;
        T = k-i+1; 
        S = T / a[i]; 
        D = T % a[i]; 
        k = i;
        if (S > 0){
            for (int j = i+1; j <= S+i; j++) a[j] = a[i];
            k += S;
        }
        if (D > 0){
            k++;
            a[k] = D;
        }

    }
}
int main(){
	int test;
	cin >> test;
	while (test--){
        cin >> n;
        check=1;
        created();
        while (check){
            input();
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