#include<bits/stdc++.h>
#define ll long long
#define MAX 1000
using namespace std;
ll run(string s){
    ll sum=0 ;
    int mu=0 ;
    for( int i=s.size()-1 ; i>= 0 ; i-- ){
        sum += ( (s[i]-'0')*pow(10,mu) ) ;
        mu++;
    }
    return sum;
}
int main(){
    int i;
    string s1,s2;
    cin>>s1>>s2;

    for( i=0 ; i<s1.size() ; i++ )
        if(s1[i]=='6') s1[i]='5';
    for( i=0 ; i<s2.size() ; i++ )
        if(s2[i]=='6') s2[i]='5';

    cout<<run(s1)+run(s2)<<" ";

    for( i=0 ; i<s1.size() ; i++ )
        if(s1[i]=='5') s1[i]='6';
    
    for( i=0 ; i<s2.size() ; i++ )
        if(s2[i]=='5') s2[i]='6';
    
    cout<<run(s1)+run(s2);
   
    return 0;
}

/*
-  Author : Nhaatj   
-  Created On : Tue Jun 08 2021
-  Github : github.com/Nhaatj
*/