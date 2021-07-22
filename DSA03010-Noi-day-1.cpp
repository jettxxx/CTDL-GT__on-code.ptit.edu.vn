#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void input(priority_queue<long, vector<long>,greater<long> > &arr,long n){
    long a;
    for(int i = 0;i < n;i++){
        cin >> a;
        arr.push(a);
    }
}

void index(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        priority_queue<long, vector<long>, greater<long> > arr;
        
        input(arr,n);
        long x,y,res = 0;
        while(arr.size() > 1){
            x = arr.top(); arr.pop();
            y = arr.top(); arr.pop();
            res += x + y;
            arr.push(x+y);
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