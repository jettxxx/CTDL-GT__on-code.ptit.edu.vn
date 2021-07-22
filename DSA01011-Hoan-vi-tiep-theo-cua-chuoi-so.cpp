#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int n, check;
string a;
void output(){
    cout << n << " ";
    if (check)
        for (int i=0; i < a.size(); i++) 
            cout << a[i];
    else cout << "BIGGEST";
}
void run(){
    int l=a.size();
    int i=l-2;
    while (i >= 0 && a[i] >= a[i+1]) 
        i--;
    int j=l-1;
    if (i >= 0){
        while (a[j] <= a[i]) 
            j--;
        swap(a[i], a[j]);
        for (int j=i+1; j <= (l+i)/2; j++) 
            swap(a[j], a[l-j+i]);
    }else 
        check=0;
    
}
int main(){
    int test;
    cin >> test;
    while (test--){
        cin >> n >> a;
        check=1;
        run();
        output();
        cout << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/