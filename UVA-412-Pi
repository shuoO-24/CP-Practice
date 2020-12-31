#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int n, cnt, total;
   
    while (cin >> n && n != 0){
        int num[n];
            for (int i = 0; i < n; i ++){
                cin >> num[i];
            }
            cnt = 0;
            for (int i = 0; i < n-1; i ++){
                for (int j = i + 1; j < n; j ++){
                    if (gcd(num[i], num[j]) == 1){
                        cnt ++;
                    }
                }
            }
            if (cnt == 0){
                cout << "No estimate for this data set." << endl;
                break;
            }
            total = 1;
            for (int i = n; i > n-2; i --){
                total *= i;
            }
            total /= 2;
            
            double res = (double)cnt/total;
            
            double pi = sqrt(6/res);
            
            cout << pi << endl;
        
    }
    return 0;
}
