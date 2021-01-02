#include <bits/stdc++.h>

using namespace std;

string str;

bool x_end(int a, int b, int c){
    return (str[a] == str[b] && str[b] == str[c] && (str[a] == 'X' && str[b] == 'X' && str[c] == 'X'));
}
bool o_end(int a, int b, int c){
    return (str[a] == str[b] && str[b] == str[c] && (str[a] == 'O' && str[b] == 'O' && str[c] == 'O'));
}


int main(){
    bool res = false;
        
    while(cin >> str){
        res = false;
        int n_x = 0, n_o = 0;
        for (int i = 0; i < 9; i ++){
            if (str[i] == 'X') n_x ++;
            if (str[i] == 'O') n_o ++;
        }
        int winx = 0, wino= 0;
        if (str == "end") return 0;
        
        if (x_end(0,1,2)) winx = 1;
        if (x_end(0,4,8)) winx = 1;
        if (x_end(1,4,7)) winx = 1;
        if (x_end(2,4,6)) winx = 1;
        if (x_end(2,5,8)) winx = 1;
        if (x_end(3,4,5)) winx = 1;
        if (x_end(0,3,6)) winx = 1;
        if (x_end(6,7,8)) winx = 1;
        
        if (o_end(0,1,2)) wino = 1;
        if (o_end(0,4,8)) wino = 1;
        if (o_end(1,4,7)) wino = 1;
        if (o_end(2,4,6)) wino = 1;
        if (o_end(2,5,8)) wino = 1;
        if (o_end(3,4,5)) wino = 1;
        if (o_end(0,3,6)) wino = 1;
        if (o_end(6,7,8)) wino = 1;
        
        if ((wino == 1 && winx == 0) || (winx == 1 && wino == 0))
            if ((winx == 1 && wino == 0) && (n_x == n_o + 1))
                res = true;
            if ((wino == 1 && winx == 0) && (n_o == n_x))
                res = true;
            if ((wino == 0 && winx == 0) && n_x == n_o + 1) //tie
                res = true;
        if (res) cout << "vaild" << endl;
        else cout << "invalid" << endl;
    }
}
