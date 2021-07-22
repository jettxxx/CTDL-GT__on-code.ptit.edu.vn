#include <bits/stdc++.h>
using namespace std;

#define matrix vector< vector<long long> >
const long long modulo = 1e9 + 7;
int n;

matrix init(int n) {
	matrix a;
	a.resize(n);
	for(int i = 0; i < n; ++i)
		a[i].resize(n);
	return a;
}

matrix multiple(matrix a, matrix b) {
	matrix c = init(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				c[i][j] = (c[i][j] + (a[i][k] * b[k][j]) % modulo) % modulo;
			}
		}
	}
	return c;
}

matrix power(matrix a, long long k) {
	if (k == 1)
		return a;

	matrix b = power(a, k / 2);
	b = multiple(b, b);
	if (k % 2 == 0)
		return b;
	else
		return multiple(a, b);
}

int main() {
	int t = 0;

	cin >> t;
	while(t--) {
		long long k = 0;
		matrix a;

		cin >> n >> k;
		a = init(n);
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];
		a = power(a, k);
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}
/*
-  Author : Nhaatj   
-  Created On : Thu Mar 25 2021
-  Github : github.com/Nhaatj
*/