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
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int a[n + 5];
        a[0] = 0;
        a[1] = x;
        for (int i = 2; i <= n; i++)
            if (i % 2 == 1) a[i] = min(a[i - 1] + x, a[(i + 1) / 2] + y + z);
            else a[i] = min(a[i - 1] + x, a[i / 2] + z);
        cout << a[n];
        cout << endl;
    }
    return 0;
}