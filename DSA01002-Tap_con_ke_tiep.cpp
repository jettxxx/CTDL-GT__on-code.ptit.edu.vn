#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void index() {
    int n,k;
    cin >> n >> k;
    vector<int> a;
    a.resize(k+1);
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    
    int i=k;
    while (i>0 && a[i]==n-k+i)
        i--;
    
    if (i>0)
    {
        a[i]++;
        for (int j = i+1; j <=k; j++)
            a[j]=a[i] + j-i;
            
        
    }
    else {
        for (int i = 1; i <= k; i++)
            a[i]=i;
        
    }
    
    for (int j = 1; j <= k; j++)
        cout << a[j] << " ";
    
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        index();
    }
    
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Sun Jul 18 2021
-  Github : github.com/Nhaatj
*/