#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

void index() {
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int i=n-1;
    while (i>0 && a[i] > a[i+1] )
        i--;

    if (i<=0)
        for (int i = 1; i <=n ; i++)
            cout << i << " ";
    else {
        int k=n;
        while (a[k]<a[i])
            k--;
        swap(a[k],a[i]);
        int l=i+1, r=n;
        while (l<r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
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
-  Created On : Mon Jul 19 2021
-  Github : github.com/Nhaatj
*/