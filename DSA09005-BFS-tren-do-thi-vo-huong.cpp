#include<bits/stdc++.h>
using namespace std;

vector<int> res[1005];
bool OK[1005];

void solve(int k) {
    queue <int> q;
    q.push(k);
    while (q.size() > 0) {
        int top = q.front();
        q.pop();
        cout << top << " ";
        OK[top] = true;
        for (int i = 0; i < res[top].size(); i++) {
            if (!OK[res[top][i]]) {
                OK[res[top][i]] = true;
                q.push(res[top][i]);
            }
        }

    }
}
int main() {

    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 1005; i++) res[i].clear();
        memset(OK, false, sizeof(OK));
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < b; i++) {
            int u, v;
            cin >> u >> v;
            res[u].push_back(v);
            res[v].push_back(u);
        }
        solve(c);
        cout << endl;
    }
}