/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1452C
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<char> bracket, paranthesis;
    int cnt=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='(') { paranthesis.push(s[i]); }
        else if(s[i]=='[') { bracket.push(s[i]); }
        else if(s[i]==')' && paranthesis.empty()==false && paranthesis.top()=='(') { cnt++; paranthesis.pop(); }
        else if(s[i]==']' && bracket.empty()==false && bracket.top()=='[') { cnt++; bracket.pop(); }
    }
    cout<<cnt<<"\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}