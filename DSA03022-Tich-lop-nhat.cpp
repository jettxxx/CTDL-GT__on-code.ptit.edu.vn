#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve(){
    int n, ans;
    cin >> n;
    vi a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    } 
    sort(a.begin(), a.end());
    ans=max({a[n-1]*a[n-2]*a[n-3], a[0]*a[1], a[0]*a[1]*a[n-1]});
    cout << ans;
    cout << endl;
}

int main(){
    faster;
    solve();
    return 0;
}