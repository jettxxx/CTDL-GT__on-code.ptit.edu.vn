#include<bits/stdc++.h>
using namespace std;

int n, a[20][20];
vector <string> res;
bool check = false;

void Try(int i, int j, string s) {
    if (i == 1 && j == 1 && a[i][j] == 0) {
        check = false;
        return;
    }
    if (i == n && j == n && a[n][n] == 1) {
        res.push_back(s);
        check = true;
        return;
    }
    if (i < n && a[i + 1][j] == 1) 
        Try(i + 1, j, s + "D");
    if (j < n && a[i][j + 1]) 
        Try(i, j + 1, s + "R");
    if (i < n && j < n && a[i + 1][j] == 0 && a[i][j + 1] == 0 || i > n || j > n)
        return;
}

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= n; j++) 
                cin >> a[i][j];
        res.clear();
        check = false;
        Try(1, 1, "");
        if (!check) 
            cout << "-1";
        else {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
        }
        cout << endl;
    }
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jun 06 2021
-  Github : github.com/Nhaatj
*/