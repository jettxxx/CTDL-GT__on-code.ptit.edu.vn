#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
        
struct node{
	char key;
	node *left;
	node *right;
	node(char x) {
		this->key = x;
		left = right = NULL;
	}
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
 
void inorder(node *rt) {
	if(rt == NULL)
		return;
	inorder(rt->left);
	cout << rt->key;
	inorder(rt->right);
}
 
void tree(string s) {
	stack<node *> st;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		if(isOperator(s[i]) ) {
			node *h = new node(s[i]);
			node *r = st.top(); st.pop();
			node *l = st.top(); st.pop();
			h->left = l;
			h->right = r;
			st.push(h);
		} else {
			st.push(new node(s[i]));
		}
	}
	inorder(st.top());
}
 
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
		string s;
		cin >> s;
		tree(s); 
		cout << endl;
	}
}