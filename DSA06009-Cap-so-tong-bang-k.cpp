#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;

int main(){
    vector<int> a;
    int n,k;

    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int temp,c = 0;
        for (int i = 0; i < n; i++){
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(),a.end());

        for(int i  = 0; i < n - 1; i++)
            for(int j = i+1; j < n; j++){
                if(a[i] + a[j] == k)
                    c++;
                if(a[i] + a[j] > k)     
                    break;
            }
        cout << c << endl;
        a.clear();
    }
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/