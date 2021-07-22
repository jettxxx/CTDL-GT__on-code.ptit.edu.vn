#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void input(vector<ll> &a){
    vector<ll>:: iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

void run(vector<ll> a,int k){
    sort(a.begin(),a.end());
    int sum1 = 0,sum2 = 0,res = 0;
    for(int i = 0;i < a.size();i++){
        if(i < k){
            sum1 += a[i];
        }
        else{
            sum2 += a[i];
        }
    }
    res = abs(sum2 - sum1);
    sum1 = sum2 = 0;
    for(int i = 0;i < a.size();i++){
        if(i < a.size() - k){
            sum1 += a[i];
        }
        else{
            sum2 += a[i];
        }
    }
    res = max(res,abs(sum2 - sum1));
    cout << res << endl;
}

void index(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<ll> a(n);
        input(a);
        run(a,k);
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