#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int Q;
    cin >> Q;
    deque <int> qu;
    while (Q--) {
        string s;
        cin >> s;
        if (s == "PUSHFRONT") {
            int b;
            cin >> b;
            qu.push_front(b);
        } 
        if (s == "PRINTFRONT") {
            if (qu.size() == 0) cout << "NONE" << endl;
            else cout << qu.front() << endl;
        } 
        if (s == "POPFRONT" && qu.size()) qu.pop_front();
        if (s == "PUSHBACK") {
            int b;
            cin >> b;
            qu.push_back(b);
        } 
        if (s == "PRINTBACK") {
            if (qu.size() == 0) cout << "NONE" << endl;
            else cout << qu.back() << endl;
        }
        if (s == "POPBACK" && qu.size()) qu.pop_back();
    }
    return 0;
}