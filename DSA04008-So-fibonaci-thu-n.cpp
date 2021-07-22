#include<bits/stdc++.h>
#define ll long long
const ll MAX = 1e9+7;
using namespace std;
 
struct Mt{
    long long c[2][2];
    Mt(){
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};
 
Mt operator * (Mt a, Mt b)
{
    Mt res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.c[i][j] = (res.c[i][j]+a.c[i][k]*b.c[k][j])%MAX;
        }
    return res;
}
 
Mt powermod (Mt a, long long n)
{
    if (n==1)
        return a;
    if (n%2!=0)
        return powermod(a,n-1)*a;
    Mt tmp = powermod(a,n/2);
    return tmp*tmp;
}
 
int main(){
	int t;
	cin >> t;
	while (t--){
		ll n;
	    cin >> n;
	    Mt A;
	    A = powermod(A,n);
	    cout << A.c[0][1] << endl;
	}
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/