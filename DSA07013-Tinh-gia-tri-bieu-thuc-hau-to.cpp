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
        stack < long long > st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                long long tmp;
                if (s[i] == '+') tmp = b + a;
                else if (s[i] == '-') tmp = b - a;
                else if (s[i] == '*') tmp = b * a;
                else if (s[i] == '/') tmp = b / a;

                st.push(tmp);
            } else st.push((long long) 
                (s[i] - '0'));
        }
        cout << st.top();
        cout << endl;
    }
    return 0;
}