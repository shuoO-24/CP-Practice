//
//  main.cpp
//  CF-B
//
//  Created on 12/31/20.
//


#include <bits/stdc++.h>

using namespace std;

int n, m;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second == p2.first){
        return p1.second < p2.second;
    }
    else
        return p1.first > p2.second;
}

//use pair data structure: link two numerical values together and manipulate them together
//or use 2D array, find maximum using loop

int main(){
    
    pair<int, int> p[m];

    cin >> n >> m;

    for (int i = 0; i < m; i ++){
        int a, b;
        cin >> a >> b;
        p[i].first = a;
        p[i].second = b;
    }
    
    sort(p, p + sizeof p / sizeof *p, comp);
    
    int res = 0;
    int got = n; //space available in the bag
    
   // cout << p[0].first << p[0].second << endl;
    
    if (p[0].first >= n){
        res += p[0].second * n;
    }
    else{
        got -= p[0].first;
        res += p[0].second * p[0].first;
        for (int i = 1; i < m; i ++){
            if (got <= p[i].first){
                res += got * p[i].second;
            }
            if (got == 0) break;
        }
    }

    cout << res << endl;
}
