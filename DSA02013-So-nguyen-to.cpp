#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define max 201
#define pb push_back
using namespace std;
int n,p,s,c[100],sum,check,dem;
bool prime[max];
vector <int> ngto;
vector< vector<int> > result;

void sang_nt() {
    // memset(prime, true, sizeof(prime));
    for(int i = 2; i <= max; i++)
            prime[i] = true;
    for(int i = 2; i*i <= max; i++)
        if(prime[i]){
            for(int j = i*2; j <= max; j += i)
                prime[j]=false;
        }
}
void backtrack(int i, int sum, vector <int> temp){
    if(sum > s) return;  
    for(int j = i; j < ngto.size(); j++)
        if(sum + ngto[j] <= s){
            temp.pb(ngto[j]);
            backtrack(j+1, sum+ngto[j], temp);
            temp.pop_back();
        }
    if(sum == s && temp.size() == n) 
        result.pb(temp);

}
void in(){
    cout << result.size() << endl;  
    for(int i = 0; i < result.size(); i++){
        for(int j =0; j < n; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    sang_nt();
    

    int t;
    cin >> t;
    while (t--){
        ngto.clear();
        result.clear();
        cin >> n >> p >> s;
        
        for(int i = p+1; i < s; i++)
            if(prime[i]) ngto.pb(i);
        vector <int> temp;
        backtrack(0,0,temp);
        in();
    }
    return 0;
}