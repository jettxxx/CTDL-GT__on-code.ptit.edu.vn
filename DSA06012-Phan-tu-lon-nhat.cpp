#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        vector<int> a;
        int n,k;
        cin >> n >> k;
        int temp;
        for(int i = 0; i < n ; i++){
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(),a.end());
        for(int i = n-1; i >= n-k; i--)
            cout << a[i] << " ";
            
        cout << endl;    
    }
    
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/