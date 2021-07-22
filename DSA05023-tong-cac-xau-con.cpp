#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector <int>

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi a;
        while (n > 0) {
            a.push_back(n % 10);
            n = n / 10;
        }
        reverse(a.begin(), a.end());
        ll res = 0;
        for (int i = 0; i < a.size(); i++) {
            ll tmp = 0;
            for (int j = i; j < a.size(); j++) {
                tmp = tmp * 10 + a[j];
                res += tmp;
            }
        }
        cout << res;
        cout << endl;
    }
    return 0;
}