/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 263A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int one = -1;
    int steps = -1;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >>  one;
            if(one == 1) {
                steps = abs(2-i) + abs(2-j);
            }
        }
    }
    cout << steps;
    return 0;
}