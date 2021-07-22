#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[1005][1005], b[1005][1005] = {0};
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) 
                cin >> a[i][j]; 
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) {
                if (i == 1 && j == 1) b[i][j] = a[i][j];
                else if (i == 1) b[i][j] = a[i][j] + b[i][j - 1];
                else if (j == 1) b[i][j] = a[i][j] + b[i - 1][j];
                else b[i][j] = a[i][j] + min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1]));
            }
        cout << b[n][m];
        cout << endl;
    }
    return 0;
}