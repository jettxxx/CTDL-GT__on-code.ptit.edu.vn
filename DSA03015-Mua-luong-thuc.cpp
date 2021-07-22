#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void index(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        
        if((n * (s - s/7)) < m*s){
            cout << - 1 << endl;
        }
        else{
            for(int i = 1;i <= (s - s/7);i++){
                if((n * i) >= (m * s)){
                    cout << i << endl;
                    break;
                }
            }
        }
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