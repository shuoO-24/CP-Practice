//
//  main.cpp
//  test
//
//  Created on 12/31/20.


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string str;
    cin >> str;
    
    vector<char> cv;
    
    for (int i = 0; i < n; i ++){
        if (n % 2 == 1){
            cv.push_back(str[0]);
        }
        else
            cv.insert(cv.begin(),str[0]);
        str.erase(0,1);
        n = (int)str.length();
    }
    
    for (int i = 0; i < cv.size(); i ++){
        cout << cv[i];
    }
}
