#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

bool run(string &s,int D){
    vector<int> a(s.size() + 300);
    int dem = 0;
    for(int i = 0;i < s.size();i++){
        a[s[i]]++;
        dem = max(dem, a[s[i]]);
    }
    if((dem - 1) *(D - 1) > s.size() - dem){
        return false;
    }
    return true;
}

void index(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int D;
        string s;
        cin >> D >>s;
        if(run(s,D) == true){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
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