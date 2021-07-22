#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

bool run(string &s){
    int dem = 0;
    vector<int> a(s.size() + 300);

    for(int i = 0;i < s.size();i++){
        a[s[i]]++;
        dem = max(dem,a[s[i]]);
    }

    if(s.size() % 2 == 0 && dem <= s.size() - dem){
        return true;
    }
    else if(s.size() % 2 != 0 && dem <= s.size() - dem + 1){
        return true;
    }
    return false;
}

void index(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(run(s) == true){
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