/*
*   Author: Rushi Vachhani
*   Platform: Codeforces
*   Problem_ID: 490A
*   Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x;
    vector<int> one_index, two_index, three_index;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x==1) {one_index.push_back(i);}
        else if(x==2) {two_index.push_back(i);}
        else {three_index.push_back(i);}
    }
    int no_team = min(one_index.size(), min(two_index.size(), three_index.size()));
    cout<<no_team<<"\n";
    for(int i=0; i<no_team; i++) {
        cout<<one_index[i]+1<<" "<<two_index[i]+1<<" "<<three_index[i]+1<<"\n"; 
    }

    return 0;
}