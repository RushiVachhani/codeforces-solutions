/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 144A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int maxelement = 0, minelement = 1000, maxindex, minindex, n, h;
    cin >>n;
    for(int i=0; i<n; i++) {
        cin >> h;
        if(h>maxelement) {
            maxelement = h;
            maxindex = i;
        }
        if(h<=minelement) {
            minelement = h;
            minindex = i;
        }
    }
    if(maxindex>minindex) {
        cout<<(maxindex-1)+(n-minindex)-1;
    }
    else {
	    cout<<(maxindex-1)+(n-minindex);

    }

    return 0;
}