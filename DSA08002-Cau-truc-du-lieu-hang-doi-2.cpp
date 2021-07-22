#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    queue < int > qu;
    string s;
    while (t--) {
        cin >> s;
        if (s == "PUSH") {
            int b;
            cin >> b;
            qu.push(b);
        }
        if (s == "POP" && qu.size()) qu.pop();
        if (s == "PRINTFRONT") {
            if (qu.size() == 0) cout << "NONE";
            else cout << qu.front();
        }
        cout << endl;
    }
    return 0;
}