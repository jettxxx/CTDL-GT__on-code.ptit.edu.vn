#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

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
        int len = a.size();
        for (int i = 0; i < a.size(); i++) 
            if (a[i] >= 2) {
                len = i;
                break;
            }
        for (int i = len; i < a.size(); i++) a[i] = 1;
        ll cnt = 0;
        ll s = 1;
        for (int i = a.size() - 1; i >= 0; i--) {
            cnt += a[i] * s;
            s = s * 2;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}