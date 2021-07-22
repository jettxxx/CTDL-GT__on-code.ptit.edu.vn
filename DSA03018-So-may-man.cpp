#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void run(int sum){
    int a = 0,b = 0;
    while(sum > 0) {
        if(sum % 7 == 0){
            b++;
            sum -= 7;
        }
        else{
            a++;
            sum -= 4;
        }
    }

    if(sum < 0){
        cout << - 1;
    }
    else{
        for(int i = 0;i < a;i++){
            cout << 4;
        }
        for(int j = 0;j < b;j++){
            cout << 7;
        }
    }
}

void index(){
    int t;
    cin >> t;
    while(t--){
        int sum;
        cin >> sum;
        run(sum);
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