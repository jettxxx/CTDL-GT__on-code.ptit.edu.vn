#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int check[1000005];
int main() {
    faster;
    int n;
    cin >> n;
    int x;
    int res = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        check[x] = check[x - 1] + 1;
        res = max(check[x], res);
    }
    cout << n - res << endl;
}