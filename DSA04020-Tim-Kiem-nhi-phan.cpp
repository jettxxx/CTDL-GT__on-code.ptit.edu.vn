#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        int n, k, a[100005];
        cin >> n >> k;
        int check = 0;
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) 
            if (a[i] == k) {
                cout << i + 1<< " ";
                check = 1;
                break;
        }
        if (check == 0) cout << "NO";
        cout << endl;
    }
}