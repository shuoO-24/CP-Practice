#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string arr[3] {};
    for (int i = 0; i < 3; i ++){
        string a;
        cin >> a;
        arr[i] = a;
    }
    
    map<char, int> mp;
    
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    //to be able to determine the sequence of coins' weights, we need to have a increasing scale of weights getting from three inequations;
    
    for(int i = 0; i < 3; i ++){
        if (arr[i][1] == '>'){
            mp[arr[i][0]] ++;
            mp[arr[i][2]] --;
        }
        if (arr[i][1] == '<'){
            mp[arr[i][0]] --;
            mp[arr[i][2]] ++;
        }
    }
    
    if(mp['A']>mp['B']&&mp['B']>mp['C'])
        cout<<"CBA";
    else if (mp['A']>mp['C']&&mp['C']>mp['B'])
        cout<<"BCA";
    else if(mp['B']>mp['C']&&mp['C']>mp['A'])
      cout<<"ACB";
    else if(mp['B']>mp['A']&&mp['A']>mp['C'])
      cout<<"CAB";
    else if(mp['C']>mp['B']&&mp['B']>mp['A'])
      cout<<"ABC";
    else if(mp['C']>mp['A']&&mp['A']>mp['B'])
      cout<<"BAC";
    else
      cout<<"Impossible";
    
}

