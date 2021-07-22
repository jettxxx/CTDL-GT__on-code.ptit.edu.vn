#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int n,M;
struct dta
{
    int a=0,c=0;
};

int dp [1001][1001];

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,v;
        cin >> n>> v;
        dta tui[n+5];
        for (int i = 1; i <=n; i++)
            cin >> tui[i].a;
        for (int i = 1; i <=n; i++)
            cin >> tui[i].c;

        memset(dp,0,sizeof(dp));
        for (int i = 1; i <=n; i++)
            for(int j=1;j<=v;j++)
                if(j>=tui[i].a)
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-tui[i].a] + tui[i].c);
                else 
                    dp[i][j] = dp[i-1][j];
        cout << dp[n][v] << endl;
    }
    
}

/*
-  Author : Nhaatj   
-  Created On : Wed Jun 09 2021
-  Github : github.com/Nhaatj
*/