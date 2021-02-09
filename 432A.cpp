/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 432A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int threshold = 5-k;
    int count = 0, temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        if(temp <=threshold) {
            count++;
        }
    }
    cout << count / 3;
    return 0;
}