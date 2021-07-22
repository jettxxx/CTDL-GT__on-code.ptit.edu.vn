#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int U, V, E;
vector <vector<int>> tmp;
vector <bool> check;
queue<int> qu;

void BFS(int u) {
    check.resize(V + 1);
    qu.push(u);
    check[u] = true;
    while (!qu.empty()) {
        u = qu.front();
        qu.pop();
        cout << u << " ";
        for (auto i : tmp[u])
            if (!check[i]) {
                check[i] = true;
                qu.push(i);
            }
    }
    check.resize(0);
}
 
int main() {
    faster;
    int t, u, v;
    cin >> t;
    while (t--) {
        cin >> V >> E >> U;
        tmp.resize(V + 1);
        while (E--) {
            cin >> u >> v;
            tmp[u].push_back(v);;
        }
        BFS(U);        
        tmp.resize(0);
        check.resize(0);
        cout << endl;
    }

    return 0;
}