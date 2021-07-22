#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        int dp[50000] = {};
        cin >> n >> k;
        int tmp;
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            for (int j = k; j >= tmp; j--)
                if (dp[j - tmp] == 1)
                    dp[j] = 1;
            dp[tmp] = 1;
        }
        if (dp[k] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/