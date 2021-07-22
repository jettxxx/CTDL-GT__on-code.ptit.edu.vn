#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void index(){
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        int k;
        string s;
        cin >> k >> s;

        vector<int> a(s.size() + 300,0);

        for(int i = 0;i < s.size();i++){
            a[s[i]]++;
        }

        priority_queue<int, vector<int> > x;
        for(int i = 0;i < s.size();i++){
            if(a[s[i]] > 0){
                x.push(a[s[i]]);
                a[s[i]] = 0;
            }
        }
        for(int i = 0;i < k;i++){
            int tam = x.top();x.pop();
            tam--;
            x.push(tam);
        }
        long res = 0;
        
        while(x.size()){
            res += pow(x.top(),2);
            x.pop();
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