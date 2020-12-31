#include <iostream>

using namespace std;

int main(){
    int n, m;
    long m_fctrl, n_m, r;
   
    m_fctrl = 1;
    n_m = 1;
    r = 1;
    while(cin >> n >> m){
        if (n == 0 && m == 0) break;
        for (int i = n; i > n-m; i --){
            r *= i;
        }
        for (int j = 2; j <= m; j ++){
            r /= j;
        }
        cout << endl;
        cout << n << " things taken " << m << " at a time is " << r << " exactly.";
    }
}
