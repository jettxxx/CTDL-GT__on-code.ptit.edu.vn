#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void run(ll p,ll q){
    while(true){
        if(q % p == 0){
            cout << "1/" << q/p;
            break;
        }
        else{
            long long x = q/p + 1;
            cout << "1/" << x << " + ";
            p = p * x - q;
            q = q * x; 
        }
    }
}

void index(){
    int t;
    cin >> t;
    while(t--){
        long long p,q;
        cin >> p >> q;
        run(p,q);
        cout << endl;
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