
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    int num[n], num2[n];
    for (int i = 0; i < n; i ++){
        cin >> num[i];
        num2[i] = num[i];
    }
    sort(num2, num2+n);
    for (int i = 1; i < n; i ++){
        num[i] = num[i] + num[i-1];
        num2[i] = num2[i] + num2[i-1];
    }
    
    cin >> m;
    int type, l, r;
    long long res;
    
    while(m--){
        cin >> type >> l >> r;
        if (type == 1){
            if (l>1) res = num[r-1] - num[l-2];
            else res = num[r-1];
        }
        else{
            if (l>1) res = num2[r-1] - num2[l-2];
            else res = num2[r-1];
        }
        cout << res << endl;
    }
}

