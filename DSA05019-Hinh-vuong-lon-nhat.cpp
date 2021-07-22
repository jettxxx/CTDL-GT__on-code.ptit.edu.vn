#include<bits/stdc++.h>
#define ll long long
#define MAX 505
using namespace std;

int n,m,a[MAX][MAX],b[MAX][MAX];
int run(){
    int res = 0;
    for(int i = 1; i <= n; i++) 	b[i][1] = a[i][1];
    for(int j = 1; j <= m ; j++)    b[1][j] = a[1][j];
    
    for(int i = 2; i <= n ; i++){
        for(int j = 2; j <= m; j++){
            if(a[i][j] == 1)    
				b[i][j] = min(min(b[i-1][j],b[i][j-1]),b[i-1][j-1]) + 1; 
            else                
				b[i][j] = 0;
            res = max(res,b[i][j]);
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for(int i = 1; i <= n ;i++){
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        cout << run() << endl;
    }
  
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/