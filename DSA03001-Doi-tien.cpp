#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;


int a[100] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int k = 10;

ll run(int a[100],long long n){
    ll res = 0;
    for(int i = k - 1;i >= 0;i--) {
        res += n / a[i];
        n %= a[i];
    }
    return res;
}

void index() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        cout << run(a,n) << endl;
    }
}

int main() {
    index();
    return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Wed Apr 21 2021
-  Github : github.com/Nhaatj
*/