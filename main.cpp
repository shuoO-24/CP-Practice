//
//  main.cpp
//  test_case_code2
//
//  Created on 12/31/20.
//

#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> mp;
    int n,m,first,second;
    cin >> n;

    for (int i = 0; i < n; i ++){
        int y;
        cin >> y;
        mp[y] = i;

    }

    cin >> m;


    for (int i = 0; i < m; i ++){
        int x;
        cin >> x;
        first = mp[x];
        second = n-mp[x];
    }
}
