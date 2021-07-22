#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string BDN(int n) {
    queue < string > qu;
    qu.push("1");
    while (qu.size() > 0) {
        string res = qu.front();
        qu.pop();
        ll tmp = 0;
        for (int i = 0; i < res.size(); i++) {
            tmp = tmp * 10 + res[i] - '0';
            tmp = tmp % n;
        }
        if (tmp == 0) return res;
        qu.push(res + "0");
        qu.push(res + "1");
    }
}

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << BDN(n);
        cout << endl;
    }
}