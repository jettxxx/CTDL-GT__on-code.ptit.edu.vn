#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void input(vector<int> &a){
    vector<int> ::iterator it;
    for(it = a.begin();it != a.end();it++){
        cin >> *it;
    }
}

bool run(vector<int> a){
    vector<int> res;
    for(int i = 0;i < a.size();i++){
        res.push_back(a[i]);
    }
    sort(res.begin(),res.end());
    for(int i = 0;i < a.size();i++){
        if(a[i] != res[i] &&a[i] != res[res.size()-i-1]){
            return false;
            break;
        }
    }
    return true;
}

void index(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        input(a);
        if(run(a) == true){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
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