#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        bool ok;
        stack < int > stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                ok = true;
                char top = stk.top();
                stk.pop();
                while (top != '(') {
                    if (top == '+' || top == '-' || top == '/' || top == '*') ok = false;
                    top = stk.top();
                    stk.pop();
                }
                if (ok) break;
            } else stk.push(s[i]);
        }
        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}
/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/