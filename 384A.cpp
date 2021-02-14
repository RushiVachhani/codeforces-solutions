/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 384A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    char chessBoard[n][n]; 
    int countCoder=0;
    if(n%2!=0) {
        int flag=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(flag==0) {
                    chessBoard[i][j] = 'C';
                    flag = 1;
                    countCoder++;
                }
                else {
                    chessBoard[i][j] = '.';
                    flag = 0;
                }
            }
        }
    }
    else {
        int flag=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(flag==0) {
                    chessBoard[i][j] = 'C';
                    flag = 1;
                    countCoder++;
                }
                else {
                    chessBoard[i][j] = '.';
                    flag = 0;
                }
            }
            flag==0 ? flag = 1 : flag = 0;
        }
    }
    cout<<countCoder<<"\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<chessBoard[i][j];
        }
        cout<<"\n";
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}