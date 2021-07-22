#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000007
using namespace std;

ll run(int n, int k){
    ll a[n+1];
    memset(a, 0, sizeof a);
    a[1]=1;
    a[0]=1;
    for (int i=2; i <= n; i++){
        for (int j=1; j <= k && j <= i; j++)
            a[i] = (a[i] + a[i-j]) % MAX;
    }
    return a[n];
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        cout << run(n,k) << endl;
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/