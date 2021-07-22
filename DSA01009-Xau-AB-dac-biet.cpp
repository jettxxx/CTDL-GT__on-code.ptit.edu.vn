#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int n, k, check, a[1000],T;
string s;
void output(){
    int i=0; 
    cout << T << endl;
    while (i < s.length()){
        for (int j=0; j < n; j++){
            cout << s[i];
            i++;
        }
        cout << endl;
    }
}
void run(){
    int m=0, c=0, d=0;
    for (int i=0; i < n; i++){         
        while (i < n && a[i]==0){ d += 1; i++;}
        if (d == k) c+=1;
        m = max(m,d);
        d=0;
    }
    if (m == k && c == 1){
        T++;
        for (int i=0; i < n; i++)
            if (a[i]==0) s += 'A';
            else s += 'B';
    }
}
void index(){
    int i=n-1;
    while (i >= 0 && a[i]==1) i--;
    if (i >= 0){
        a[i]=1;
        for (int j=i+1; j < n; j++) a[j]=0;
    }else check = 0;
}
int main(){

        cin >> n >> k;
        for (int i=0; i < n; i++) a[i]=0;
        check=1;
        while (check){
            run();
            index();
        }
        output();

	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/