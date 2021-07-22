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
        stack <int> st;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int tmp;
                if (s[i] == '+') tmp = a + b;
                else if (s[i] == '-') tmp = a - b;
                else if (s[i] == '*') tmp = a * b;
                else if (s[i] == '/') tmp = a / b;
                st.push(tmp);
            } else st.push((ll)(s[i] - '0'));
        }
        cout << st.top();
        cout << endl;
    }
}