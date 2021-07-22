#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000007
using namespace std;

int k, n;

int run() {
    int a[1000][1000];
    if (k == 0 || n == 0)
        return 1;
    for (int i = 0; i <= k; ++i)
        for (int j = i; j <= n; ++j)
            if (i == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = (a[i][j - 1] + a[i - 1][j - 1]) % MAX;
    return a[k][n] % MAX;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << run() << endl;
    }

    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/