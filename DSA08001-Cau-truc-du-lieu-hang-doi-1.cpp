#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int q, value = 0;
        cin >> q;
        queue <int> qu;
        while (q--) {
            int n;
            cin >> n;
            if (n == 1) cout << qu.size() << endl;
            else if (n == 2) { 
                if (qu.size() > 0)  cout << "NO" << endl; 
                else cout << "YES" << endl;
            }
            else if (n == 3) {
                int k;
                cin >> k;
                qu.push(k);
            } 
            else if (n == 4 && qu.size() > 0) qu.pop();
            else if (n == 5) {
                if (qu.size() > 0) cout << qu.front() << endl; 
                else cout << -1 << endl;
            }
            else if (n == 6) {
                if (qu.size() > 0) cout << qu.back() << endl;
                else cout << -1 << endl;
            }
            value = n;
        }
        if (value == 3 || value == 4) 
            cout << endl;
    }
    return 0;
}