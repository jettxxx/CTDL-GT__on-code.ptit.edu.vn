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
        long n;
        cin >> n;
        long a[n + 5];
        ll b[n + 5] = {0};
        for (int i = 1; i <= n; i++) cin >> a[i];
        b[1] = a[1];
        b[2] = max(a[1], a[2]);
        for (int i = 3; i <= n; i++)
            b[i] = max(b[i - 2] + a[i], b[i - 1]);
        cout << b[n] << endl;
    }
}