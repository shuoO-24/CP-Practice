#include <iostream>
#include <string>

using namespace std;

int string_to_int(string str){
    int x = 0;
    int exp = 0;
    for (int i = (int)str.size()-1; i >= 0; i --){
        x += pow(10, exp) * (str[i]-'0');
        exp ++;
    }
    return x;
}

int main(){
    int N;
    cin >> N;
    
    while(N--){
        string n, m;
        cin >> n >> m;
        string a, b;
        int x, y;
        for (int i = (int)n.size()-1; i >= 0; i --){
            a += n[i];
        }
        x = string_to_int(a);
        
        for (int i = (int)m.size()-1; i >= 0; i --){
            b += m[i];
        }
        y = string_to_int(b);
        
        int sum = x + y;
        while(true){
            if (sum % 10 == 0){
                sum /= 10;
            }
            else break;
        }

        string s;
        string sum_ = to_string(sum);
        for (int i = (int)sum_.size()-1; i >= 0; i --){
            s += sum_[i];
        }
        cout << s << endl;
    }
    return 0;
}
