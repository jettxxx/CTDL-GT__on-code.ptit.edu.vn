#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

void xoa(int a[], int & n) {
    for (int i = 0; i < n - 1; i++)
        for (int k = i + 1; k < n; k++)
            if (a[k] == a[i]) {
                for (int j = k; j < n - 1; j++)
                    a[j] = a[j + 1];
                n--;
                k--;
            }
}

int main() {
    faster;
    int a[10000];
    int n;
    cin >> n;
    NhapMang(a, n);
    xoa(a, n);
    XuatMang(a, n);
}