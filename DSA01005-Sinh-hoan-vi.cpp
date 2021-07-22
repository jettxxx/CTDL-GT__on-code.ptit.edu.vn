#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check = true;

void input(vector<ll> a){
    vector<ll>:: iterator it;
    for(it = a.begin();it != a.end();it++) {
        cout << *it;
    }
}

void run(vector<long long> &a){
    int i = a.size() - 2;
    while(i >= 0 && a[i] > a[i + 1]) {
        i--;
    }
    if(i < 0) {
        check = false;
    }
    int k = a.size() - 1;
    while(a[k] < a[i]) {
        k--;
    }
    swap(a[i],a[k]);
    int l = i + 1,r = a.size() - 1;
    while(l <= r){
        swap(a[l],a[r]);
        l++,r--;
    }
}

void index() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0;i < a.size();i++) {
            a[i] = i + 1;
        }
        while(check == true){
            input(a);
            run(a);
            cout << " ";
        }
        check = true;
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