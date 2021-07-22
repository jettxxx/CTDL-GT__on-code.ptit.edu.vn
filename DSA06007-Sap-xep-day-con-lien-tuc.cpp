#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

vector <int> a,b;
int n,x;
int main(){
	int t;
	cin >> t;
	while (t--){
        cin >> n;
        for (int i=0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }

        b.insert(b.begin(), a.begin(), a.end());
        
        sort(b.begin(), b.end());
        for (int i=0; i < n; i++)
            if (a[i] != b[i]){
                cout << i+1 << " ";
                break;
            }
        for (int i=n-1; i > 0; i--)
            if (a[i] != b[i]){
                cout << i+1 << endl;
                break;
            }
        a.clear();
        b.clear();
	}
	return 0; 
}
/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/