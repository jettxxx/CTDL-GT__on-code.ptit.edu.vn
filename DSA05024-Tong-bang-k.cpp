#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll mod = 1e9 + 7;
 
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        long long b[k + 5] = {0};
        b[0] = 1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) 
            for (int j = 0; j < n; j++) 
                if (i >= a[j]) 
                    b[i] = (b[i] + b[i - a[j]]) % mod;
        cout << b[k] << endl;
    }
}