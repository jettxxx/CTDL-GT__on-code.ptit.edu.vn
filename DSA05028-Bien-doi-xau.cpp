#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        int b[n + 5][m + 5];
        for (int i = 0; i <= n; i++) 
            for (int j = 0; j <= m; j++) 
                if (i == 0 || j == 0) b[i][j] = i + j;
                else if (s1[i - 1] == s2[j - 1]) b[i][j] = b[i - 1][j - 1];
                else b[i][j] = min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1])) + 1;
        cout << b[n][m];
        cout << endl;
    }
    return 0;
}