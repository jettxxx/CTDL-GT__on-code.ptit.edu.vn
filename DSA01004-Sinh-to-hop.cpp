#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int x[50];
int n,k;
int check = 1;

void input() {
    cin >> n >> k;
}

void run( int &check) {
    int i = k ;
    while ( i>0 && x[i] == n+i-k)
        i--;
    x[i]++;
    if( i>0 ) {
        for ( int j =i+1; j<= n; j++)
        x[j] = x[i] + j - i;
    }
    else check = 0;
    
}

void output() {
    for (int i = 1; i <= k ; i++)
        cout << x[i];

    cout << " ";
}

void next( int check) {
    for ( int i=1; i<=n; i++)
        x[i] = i;
    while ( check )
    {
        output();
        run( check );
    }
    
}

void index() {
    int t;
    cin >> t;
    while(t--) {
        input();
        next( check );
        cout << endl;
    }
}

int main() {
    index();
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Mon Mar 29 2021
-  Github : github.com/Nhaatj
*/