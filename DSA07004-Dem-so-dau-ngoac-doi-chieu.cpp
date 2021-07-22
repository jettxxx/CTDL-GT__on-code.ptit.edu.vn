#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack <char> st;
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == '(' || (s[i] == ')' && st.size() == 0)) st.push(s[i]);
            else {
                if (st.size() > 0 && st.top() == '(') st.pop();
                else st.push(s[i]);
            }
        int a = 0, b = 0;
        while (st.size() > 0) {
            if (st.top() == ')') a++;
            else b++;
            st.pop();
        }
        int res = a / 2 + b / 2 + a % 2 + b % 2;
        cout << res;
        cout << endl;
    }
    return 0;
}