/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 711A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool isEmpty(char a, char b) {
    if(a=='O'&& b=='O') {
        return true;
    }
    else {
        return false;
    }
}

void solve() {
    int n;
    cin >> n;
    char busLayout[n][5];
    bool flag = false;
    for(int i=0; i<n; i++) {
        cin >> busLayout[i][0] >> busLayout[i][1];
        if(isEmpty(busLayout[i][0], busLayout[i][1]) && flag==false) { 
            busLayout[i][0]='+'; 
            busLayout[i][1]='+';
            flag = true;
        }
        cin >> busLayout[i][2];
        cin >> busLayout[i][3] >> busLayout[i][4];
        if(isEmpty(busLayout[i][3], busLayout[i][4]) && flag==false) { 
            busLayout[i][3]='+'; 
            busLayout[i][4]='+';
            flag = true;
        }
    }
    if(flag==false) { cout<<"NO"; return; }
    else {
        cout<<"YES\n";
        for(int i=0; i<n; i++) {
            cout<<busLayout[i][0]<<busLayout[i][1]<<busLayout[i][2]<<busLayout[i][3]<<busLayout[i][4]<<"\n";
        }
        return;
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}