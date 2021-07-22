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
        int oppo = 1;
        for (int i = 0; i < s.size(); i++) {
            int tmp1 = i, tmp2 = i;
            while (tmp1 >= 0 && tmp2 < s.size()) 
                if (s[tmp1] == s[tmp2]) {
                    oppo = max(oppo, tmp2 - tmp1 + 1);
                    tmp1--;
                    tmp2++;
                } else break;
        }
        for (int i = 0; i < s.size() - 1; i++) {
            int tmp1 = i, tmp2 = i + 1;
            while (tmp1 >= 0 && tmp2 < s.size()) 
                if (s[tmp1] == s[tmp2]) {
                    oppo = max(oppo, tmp2 - tmp1 + 1);
                    tmp1--;
                    tmp2++;
                } else break;
        }
        cout << oppo << endl;
    }
}