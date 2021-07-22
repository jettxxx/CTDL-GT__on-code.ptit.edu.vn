#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (str[0] == '0') {
            cout << 0 << endl;
            continue;
        }
        int n = str.size();
        int val[10005];
        val[0] = val[1] = 1;
        for (int i = 2; i <= n; i++) {
            val[i] = 0;
            if (str[i - 1] > '0') 
                val[i] = val[i - 1];
            if (str[i - 2] == '1' || (str[i - 2] == '2' && str[i - 1] < '7')) 
                val[i] += val[i - 2];
        }
        cout << val[n] << endl;
    }
    return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/