//
//
//  Created on 12/31/20.
//



#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i;
    cin>>n>>i;
    vector<int> num;
    i--;
    for (int i = 0; i < n; i ++){
        int k;
        cin >> k;
        num.push_back(k);
    }
    int cnt = 0;
    
    for(int j = 1; j < n; j ++){
        int left = i - j;
        int right = i + j;
        if ((num[left]) && (num[right])){
            cnt += 2;
        }
        if ((num[i])) cnt ++;
        if (left < 0 || right >= n) break;
    }
    cout << cnt << endl;
}
