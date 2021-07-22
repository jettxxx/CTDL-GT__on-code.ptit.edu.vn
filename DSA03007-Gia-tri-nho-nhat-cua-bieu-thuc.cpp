#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;


void input(vector<ll> &x){
    vector<long long>:: iterator it;
    for(it = x.begin();it != x.end();it++){
        cin >> *it;
    }
}

ll run(vector<ll> a,vector <ll> b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(a.begin(),a.end());
    ll sum = 0;
    for(int i = 0;i < a.size();i++){
        sum += a[i] * b[i];
    }
    return sum;
}

void index(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        input(a);
        input(b);
        cout << run(a,b) << endl;
    }
}

int main(){
    index();
    return 0;   
}
/*
-  Author : Nhaatj   
-  Created On : Wed Apr 21 2021
-  Github : github.com/Nhaatj
*/