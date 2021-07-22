#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

long long mod = 1e9 + 7;

void input(priority_queue<long long, vector<long long>, greater<long long> > &arr,long long n){
    long long a;
    for(int i = 0;i < n;i++){
        cin >> a;
        arr.push(a);
    }
}

void index(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        priority_queue<long long, vector<long long>, greater<long long> > arr;
        input(arr,n);

        ll x,y, res = 0;
        while(arr.size() > 1) {
            x = arr.top();arr.pop();
            y = arr.top();arr.pop();
            long long kq = (x + y) % mod;
            res += kq;
            res %= mod;
            arr.push(kq);
        }
        cout << res << endl;
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