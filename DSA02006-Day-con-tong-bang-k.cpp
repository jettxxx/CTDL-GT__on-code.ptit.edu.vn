#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>

int check=1;

void Print(int ans[100000], int k){
	cout << '[';
	for(int i=0; i<k; i++){
		cout << ans[i];
		if(i<k-1) cout << ' ';
	}
	cout << ']' << ' ';
}

void Try(int n, int x, int sum, int arr[100000], int ans[100000], int k){
	if(sum==0){
		Print(ans, k);
		ans[100000]={0};
		check=0;
	}
	else if(sum<0) return;
	else{
		for(int i=x; i<n; i++){
			ans[k]=arr[i];
			Try(n, i+1, sum-arr[i], arr, ans, k+1);
		}
	}
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		int arr[100000];
		for(int i=0; i<n; i++) cin >> arr[i];
		sort(arr, arr+n);
		int ans[100000]={0};
		Try(n, 0, s, arr, ans, 0);
		if(check) cout << -1;
		cout << endl;
		check=1;
	}
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jun 06 2021
-  Github : github.com/Nhaatj
*/