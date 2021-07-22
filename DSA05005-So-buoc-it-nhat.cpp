#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int a[1005], b[1005], n;
int run()
{
	int i, j, res = 1;
	for(i = 1; i <= n; ++i)
	{
		b[i] = 1;
		for(j = 1; j < i; ++j)
		if(a[j] <= a[i])
			b[i] = max(b[i], b[j] + 1);
		res = max(res, b[i]);
	}
	return n - res;
}
	
int main()
{
	int i, t; 
    cin >> t;
	while(t--)
	{
		cin >> n;
		for(i = 1; i <= n; ++i) 
            cin >> a[i];
		cout << run() << endl;
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/