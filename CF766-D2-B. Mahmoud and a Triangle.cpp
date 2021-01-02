#include <bits/stdc++.h>

using namespace std;

bool non_dg_triangle(int a, int b, int c){
    return (((a + b > c) && (a + c > b)) && (b + c > a));
}

int main(){
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i ++){
        cin >> num[i];
    }
    sort(num, num+n);
    while(n>=3){
        for (int i = 0; i < n-2; i ++){
            if (non_dg_triangle(num[i], num[i+1], num[i+2])){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
        return 0;
    }
}
