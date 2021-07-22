#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s="";
        string ss;
        for(int i=0;i<n;i++){
            cin>>ss;
            s+= ss;
        }
        for (char c='0'; c <='9'; c++){
            int i=s.find(c);
            if (i >= 0) 
                cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/