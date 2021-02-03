/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 116A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, max=0, passengers = 0, input, output;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >>output>>input;
        passengers = passengers - output;
        passengers = passengers + input;
        if(passengers > max) {
            max = passengers;
        }
    }
    cout << max;
    return 0;
}