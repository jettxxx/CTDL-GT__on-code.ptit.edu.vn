#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int b[105][105] = {0};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (s[i - 1] == s[j - 1] && i != j) b[i][j] = b[i - 1][j - 1] + 1;
                else b[i][j] = max(b[i][j - 1], b[i - 1][j]);
        cout << b[n][n];
        cout << endl;
    }
    return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/