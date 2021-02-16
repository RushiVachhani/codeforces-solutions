/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 701A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    multimap<int, int> m;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        m.insert({x,i+1});
    }
    multimap<int,int>::iterator it;
    int arr[n/2][2];
    int i = 0, j=0, flag = false;
    for(it=m.begin(); it!=m.end(); it++) {
        arr[i][j] = it->second;
        if(flag == false) { i++; if(i==n/2){ flag=true; i--; j=1;}}
        else { i--; }
    }
    for(int i=0; i<n/2; i++) {
        cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}