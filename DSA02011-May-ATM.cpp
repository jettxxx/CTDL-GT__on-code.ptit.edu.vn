#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100

int n, check[MAX], ok = 0;
long long s, sum, a[MAX];

void Try(int i, int k) {
    if (sum == s && i == k) {
        ok = 1;
        return;
    }
    if (i == k && sum != s) return;
    for (int j = 1; j <= n; j++) {
        if (j > check[i - 1]) {
            sum += a[j];
            check[i] = j;
            if (sum <= s) Try(i + 1, k);
            sum -= a[j];
            check[i] = 0;
        }
    }
}
void xuly() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    ok = 0;
    int j;
    for (j = 1; j <= n; j++) {
        sum = 0;
        Try(0, j);
        if (ok == 1) break;
    }
    if (ok == 1) cout << j << endl;
    else cout << -1 << endl;

}
main() {

    int t;
    cin >> t;
    while (t--) {
        xuly();
    }
}