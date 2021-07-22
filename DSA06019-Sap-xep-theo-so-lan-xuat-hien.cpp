#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
const int N=1e5;
int check[N], b[N];

map<int, int>::iterator itr; 
struct cmp{
    bool operator() (char a,char b) {return a>b;}
};

int main(){
    int t;
    cin >> t;
    while (t--){
        map <int, int> m;
        multimap <int,int,cmp> mm;
        int n;
        cin >> n;
        int x;
        for (int i=0; i < n ; i++) {
            cin >> x;
            itr=m.find(x);
            if (itr == m.end())
                m.insert(pair<int,int>(x,1));
            else m[x]++;
        }

        for (itr = m.begin(); itr != m.end(); ++itr) 
            mm.insert(pair<int,int>(itr->second,itr->first ));
            
        for (itr = mm.begin(); itr != mm.end(); ++itr){
            for (int i=0; i < itr->first; i++)
                cout << itr->second << " ";
        }
        cout << endl;
        m.clear();
        mm.clear();
    }
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/