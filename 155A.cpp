/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 155A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a, max = 0, min = 1000000, count = 0;
    cin >> a;
    min = max = a;
    for(int i=1; i<n; i++) {
        cin >> a;
        if(a<min) { count++; min = a;}
        else if(a>max) { count++; max = a;}
    }
    cout << count;
    return 0;
}