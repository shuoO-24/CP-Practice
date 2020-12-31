//
//  main.cpp
//  test_case_code2
//
//  Created on 12/31/20.
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n, m, cnt_1, cnt_2;
    vector<int> num;
    vector<int> search;
    cin >> n;
    for (int i = 0; i < n; i ++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    cin >> m;
    for (int i = 0; i < m; i ++){
        int b;
        cin >> b;
        search.push_back(b);
    }
    
    cnt_1 = 0;
    cnt_2 = 0;
    
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            cnt_1 ++;
            if (num[j] == search[i]) break;
        }
    }
    for (int i = 0; i < m; i ++){
        for (int j = n-1; j >= 0; j --){
            cnt_2 ++;
            if (num[j] == search[i]) break;
        }
    }
    cout << cnt_1 << ' ' << cnt_2 << endl;
}
