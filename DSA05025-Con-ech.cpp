#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long a[1000];
long long n;

void input() {
    cin >> n;
}

void sinh() {
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for (long long i = 4; i <= n; i++)
    {
        a[i]= a[i-1] + a[i-2]+ a[i-3];
    }
    
}

void index() {
    int t;
    cin >> t;
    while (t--)
    {
        input();
        sinh();
        cout << a[n] << endl;
    }
    
}

int main() {
    index();
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Apr 15 2021
-  Github : github.com/Nhaatj
*/