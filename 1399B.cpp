/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 1399B
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        int candy[n], orange[n];
        long long count = 0;
        for(int i=0; i<n; i++) {
            cin >> candy[i];
        }
        for(int i=0; i<n; i++) {
            cin >> orange[i];
        }
        int min_candy = *min_element(candy, candy+n);
        int min_orange = *min_element(orange, orange+n);
        for(int i=0; i<n; ++i) {
            count = count + max(candy[i]-min_candy, orange[i]-min_orange);
        }
        cout << count<<"\n";
    }
    return 0;
}