
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "ROYGBIV";
    int n = 0;
    cin >> n;
    
    string res;
    
    if (n%7 == 0){
        for (int i = 0; i < n/7; i ++)
            res.append(str);
    }
    else{
        int a = n%7;
        for (int i = 0; i < n/7; i ++)
            res.append(str);
        if (n%7 >= 1 && n%7 <= 4){
            
            res.append(str, 3, 2+a);
        }
        else{
            a -= 4;
            res.append(str, 1, a);
            res.append(str, 3, 6);
        }
    }
    cout << res << endl;
}


