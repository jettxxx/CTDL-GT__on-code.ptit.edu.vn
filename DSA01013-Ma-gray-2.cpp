#include<bits/stdc++.h>
#define ll long long;
using namespace std;

void index(string &a){
    string res;
    res.push_back(a[0]);
    for(int i = 0;i < a.size() - 1;i++){
        if(res[i] == a[i + 1]){
            res.push_back('0');
        }
        else{
            res.push_back('1');
        }
    }
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        index(a);
    }
    return 0;
}


/*
-  Author : Nhaatj   
-  Created On : Thu Mar 18 2021
-  Github : github.com/Nhaatj
*/