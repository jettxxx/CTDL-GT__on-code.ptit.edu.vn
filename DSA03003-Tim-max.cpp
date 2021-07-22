#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

ll modulo = 1000000007;

void input(vector<ll> &a){
    vector<ll>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

void run(vector<ll> &a){
    sort(a.begin(),a.end());
    ll res = 0;
    for(int i = 0;i < a.size();i++){
        res = ((res % modulo) + ((a[i] * i) % modulo)) % modulo;
    }
    cout << res << endl;
}

void index(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<ll> a(n);
        input(a);
        run(a);
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