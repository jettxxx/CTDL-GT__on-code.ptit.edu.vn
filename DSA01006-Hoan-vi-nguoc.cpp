#include<bits/stdc++.h>
#define ll long long
#define MAX 10
using namespace std;
 
int n;
int Bool[MAX] = { 0 };
int A[MAX];
 
void output() {
    for (int i = n; i >= 1; i--)
        cout << A[i] ;
    cout << " ";
}
 
void index(int k) {
    for (int i = n; i >= 1; i--) {
        
        if (!Bool[i]) {
            A[k] = i; 
            Bool[i] = 1;
            if (k == 1)
                output();
            else
                index(k - 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        index(n);
        cout << endl;
    }
}

/*
-  Author : Nhaatj   
-  Created On : Thu Mar 18 2021
-  Github : github.com/Nhaatj
*/