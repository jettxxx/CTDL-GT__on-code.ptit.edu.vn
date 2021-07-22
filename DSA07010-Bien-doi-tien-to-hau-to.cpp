#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    faster;
    int test;
    cin >> test;
    while (test--) {
        string s;
        cin >> s;
        stack <string> st;
        for (int i = s.size() - 1; i >= 0; i--) 
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string tmp = a + b + s[i];
                st.push(tmp);
            } else st.push(string(1, s[i]));
        cout << st.top();
        cout << endl;
    }
    return 0;
}