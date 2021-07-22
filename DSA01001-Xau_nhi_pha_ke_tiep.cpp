#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
string s;

void run() {
    cin >> s;
    int i= s.size()-1;
    while (s[i]=='1' && i>=0)
        i--;
    
    if (i<0)
    {
        for (int j = 0; j < s.size(); j++)
        {
            cout << "0";
        }
        
    }
    else {
        s[i]='1';
        for (int j = i+1; j < s.size(); j++)
        {
            s[j]='0';
        }
        cout << s;
        
    }
    
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        run();
    }
    


    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Fri Jul 16 2021
-  Github : github.com/Nhaatj
*/