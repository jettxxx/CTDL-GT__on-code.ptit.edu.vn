#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void output(vector<int> arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cout << *it;
    }
}
void run(int s,int d){
    vector<int> x;
    for(int i = 0;i < d;i++){
        if(s > 9){
            x.push_back(9);
            s -= 9;
        }
        else{
            x.push_back(s);
            s = 0;
        }
    }
    reverse(x.begin(),x.end());
    if(x.at(0) == 0){
        x.at(0) = 1;
        for(int i = 1;i < x.size();i++){
            if(x.at(i) != 0){
                x.at(i) -= 1;
                break;
            }
        }
    }
    output(x);
}

void index(){
    int t;
    cin >> t;
    while(t--){
        int s,d;
        cin >> s >> d;
        if(9 * d < s){
            cout << -1;
        }
        else{
            run(s,d);
        }
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