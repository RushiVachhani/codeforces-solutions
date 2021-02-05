/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 228A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h[4],count=0;
    for(int i=0 ; i<4; i++) {
        cin >> h[i];
    }
    if(h[0]==h[1] && h[1]==h[2] && h[2]==h[3]) {
        cout << 3;
        return 0;
    }

    else {
        for(int i=0 ; i<4-1; i++) {
            for(int j=i+1 ; j<4; j++) {
                if(h[i]==h[j]) {
                    h[j] = rand();
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}