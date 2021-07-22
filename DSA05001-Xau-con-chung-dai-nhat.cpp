#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int run(string s1, string s2){
    int a[1005][1005];

    memset(a,0,sizeof a);

    int l1 = s1.length(), l2 = s2.length();
    for (int i=1; i <= l1; i++){
        for (int j=1; j <= l2; j++){
            if (s1[i-1] == s2[j-1]) 
                a[i][j] = a[i-1][j-1] + 1;
            else 
                a[i][j] = max(a[i-1][j], a[i][j-1]);
        }
    }
    return a[l1][l2];
}
int main(){
	int t;
	cin >> t;
	while (t--){
        string s1,s2;
        cin >> s1 >> s2;
        cout << run(s1,s2) << endl;
	}
	return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/