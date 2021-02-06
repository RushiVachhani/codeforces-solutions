/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 255A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[3]={0};
    for(int i=0; i<n; i++) {
        int input, turn;
        cin >> input;
        arr[i%3]+=input;
    }
    int index = arr[0]>=arr[1] ? arr[0]>=arr[2] ? 0 : 2 : arr[1]>=arr[2] ? 1 : 2;
    index==0 ? cout<<"chest" : index==1 ? cout<<"biceps" : cout<<"back";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}