#include<bits/stdc++.h>

using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

vector < ll > res;

void quayLui(int i, int n, int * X) {
    for (int val = 8; val >= 6; val -= 2) {
        X[i] = val;
        if (i == (n - 1)) {
            ll tmp = 0;
            for (int j = 0; j < n; j++)
                tmp = tmp * 10 + X[j];
            res.push_back(tmp);
        } else 
            quayLui(i + 1, n, X);
    }

}
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int X[n + 5];
        res.clear();
        for (int i = n; i >= 1; i--)
            quayLui(0, i, X);
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++) 
            cout << res[i] << " ";
        cout << endl;
    }

}