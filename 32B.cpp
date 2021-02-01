/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 32B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int find(map<string, int> s, string s1) {
    map<string, int>::iterator i;
    for(i=s.begin(); i!=s.end(); i++) {
        if((i->first)==s1) {
            return i->second;
        }
    }
    return -1;
}

void solve() {
    string s;
    cin >> s;
    map<string, int> tokens{
        {".", 0},
        {"-.", 1},
        {"--", 2}
    };
    string token;
    int i=0;
    while(i<s.length()) {
        token="";
        token+=s[i];
        token+=s[i+1];
        int x = find(tokens, token);
        if(x!=-1) {
            cout<<x;
            i+=2;
        }
        else {
            token="";
            token+=s[i];
            int x = find(tokens, token);
            if(x!=-1) {
                cout<<x;
                i+=1;
            }
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}