#include<bits/stdc++.h>
#define ll long long;
using namespace std;
 
void index(int A[], int n) {
    A[n - 1]++;
    for (int i = n - 1; i > 0; i--) {
        if (A[i] > 1) {
            A[i - 1]++;
            A[i] -= 2;
        }
    }
}
 
void output(int A[], int n, int k) {
    int check=0;
    for (int i = 0; i < n; i++) {
        if(A[i]==1)
            check++;
    }
    if( check==k ) {
        for (int i = 0; i < n; i++) {
            cout << A[i];
        }
        cout << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int *A = new int[n];
        for (int i = 0; i < n; i++) 
            A[i] = 0;
        for (int i = 0; i < pow(2, n); i++) {
            output(A, n, k);
            index(A, n);
        }
    }
    
}

/*
-  Author : Nhaatj   
-  Created On : Thu Mar 18 2021
-  Github : github.com/Nhaatj
*/