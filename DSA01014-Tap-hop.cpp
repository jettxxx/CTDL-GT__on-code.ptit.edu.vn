#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n, k, s, res;
int a[20];

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            int sum = 0;
            for (int l = 1; l <= k; l++) 
                sum += a[l];
            if (sum == s) res++;
        } else Try(i + 1);
    }
}
int main() {
    faster;
    while (true) {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0) break;
        res = 0;
        Try(1);
        cout << res << endl;
    }
}