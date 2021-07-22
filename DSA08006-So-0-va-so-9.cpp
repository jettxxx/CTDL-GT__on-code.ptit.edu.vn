#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;

		queue<ll> q;
		q.push(9);
		while(1){

			ll temp = q.front();
			if(temp % n == 0){
				cout << temp << endl;
				break;
			} 
            
			else{

				q.pop();
				q.push(temp*10);
				q.push(temp*10+9);
			}
		}
	}
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/