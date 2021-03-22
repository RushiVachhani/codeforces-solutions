/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 750A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    if(k==240) { cout<< 0; return 0;}
    else if((5*n*(n+1))/2 + k ==240) { cout << n; return 0;}
    else {
        int sum, count = 0;
        sum = k;
        for(int i=1; i<=n; i++) {
            sum = sum + 5*i;
            if(sum>240) {
                cout<<count;
                return 0;
            }
            else {
                count++;
            }
        }
        cout << count;
    }

    return 0;
}