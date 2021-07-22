#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

map <int,int> m;
map <int,int> :: iterator it;
int n1,n2,x;
void init(){
    cin >> n1 >> n2;
    for (int i=0; i < n1; i++){
        cin >> x;
        m.insert({x,1});
    }
    for (int i=0; i < n2; i++){
        cin >> x;
        std::pair<std::map<int,int>::iterator,bool> ret; 
        ret = m.insert({x,1});
        if (!ret.second) m[x]++;
    }
}
void slove(){
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it -> first << " ";
    cout << endl;
    for (auto it = m.begin(); it != m.end(); ++it)
        if (it -> second == 2) cout << it -> first << " ";
    cout << endl;
}
int main(){
	int test;
	cin >> test;
	while (test--){
        init();
        slove();
        m.clear();
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/