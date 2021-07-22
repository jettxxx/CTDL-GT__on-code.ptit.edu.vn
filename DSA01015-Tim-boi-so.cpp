#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
int nv,b[20],stop,x,mark;

void run(){
    int i = nv;
    while (b[i] == 1){
        b[i] = 0;
        i--;
    }
    if(i == 0) stop = 1;
    else b[i] = 1;
}
ll test(){
    long long sum = 0;
    for (int i = 1; i <= nv; i++)
        sum = sum*10 + b[i];
    sum = sum*9;
    if(sum % x == 0) return sum;
    else return 0;
}
int main(){
	int t;
	cin >> t;
	while (t--){
        cin >> x;
        nv = 1;
     	mark = 0;
        while(nv < 18){   
            stop = 0;
            for(int i = 1; i <= nv; i++)
                b[i] = 0;
            while (stop == 0){
                run();
                if(test()){
                    cout << test() << endl;
                    mark = 1;
					break;
                }
            }
            if(mark == 1)   break;
            nv++;
        }
	}
	return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Thu Jun 03 2021
-  Github : github.com/Nhaatj
*/