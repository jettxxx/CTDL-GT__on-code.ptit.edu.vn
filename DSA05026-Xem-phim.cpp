#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int c,n;
int a[101];	
int b[101][25001];

int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

void input() {
    cin >> c >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void run() {
    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= c; j++) {
			if (a[i] <= j) {
				b[i][j] = max(b[i - 1][j], a[i] + b[i - 1][j - a[i]]);
			}
			else {
				b[i][j] = b[i - 1][j];
			}
		}
	}
    
}

void output() {
    cout << b[n][c] << endl;
}

void index() {
        input();
        run();
        output();
    
}

int main() {
    index();
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Apr 15 2021
-  Github : github.com/Nhaatj
*/