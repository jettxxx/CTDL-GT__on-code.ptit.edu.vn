#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>

int a[105][105], b[105][105];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) 
                cin >> a[i][j];
        b[1][1] = 1;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) {
                if (i == 1 && j == 1) continue;
                b[i][j] = b[i - 1][j] + b[i][j - 1];
            }
        cout << b[n][m];
        cout << endl;
    }
    return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/