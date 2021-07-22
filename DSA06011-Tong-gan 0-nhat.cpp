#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,temp,min = INT_MAX,x;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++){
            cin >> temp;
            a.push_back(temp);
        }
        for(int i = 0; i < n - 1; i++)
            for(int j = i+1; j < n; j++)
                if(abs(a[i]+a[j]) < min){
                    x = a[i]+a[j];
                    min = abs(a[i]+a[j]);
                }
        cout << x << endl;
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/