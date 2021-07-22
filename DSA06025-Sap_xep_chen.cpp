#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector <int> b;

    for (int i = 0; i < n; i++)
    {
        b.push_back(a[i]);
        sort(b.begin() , b.end());
        
        cout << "Buoc " << i << ": ";
        for (int j = 0; j < b.size(); j++)
        {
            cout << b[j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/