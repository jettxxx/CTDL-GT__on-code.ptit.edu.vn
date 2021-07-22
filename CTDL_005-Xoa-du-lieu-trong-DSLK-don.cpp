#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int n; 
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
        if (a[i] == x) continue;
        else cout << a[i] << ' ';
    return 0;
}