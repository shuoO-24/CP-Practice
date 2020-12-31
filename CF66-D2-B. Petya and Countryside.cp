//
//
//  Created on 12/31/20.
//


#include <bits/stdc++.h>

using namespace std;

int arr[1000];

int solve(int x, int index){//x is size of array
    int right = 0; //position of checking
    int left = 0;
    int rightreference = arr[index];
    int leftreference = arr[index];
    
    for (int i = index; i < x; i ++){
        if (rightreference < arr[i]){
            break;
        }
        else{
            right ++;
            if (rightreference > arr[i]){
                rightreference = arr[i];
            }
        }
    }
    for (int i = index-1; i >= 0; i --){
        if (leftreference < arr[i])
            break;
        else{
            left++;
            if (leftreference > arr[i]){
                leftreference = arr[i];
            }
        }        
    }
    return right+left;
}

int main(){
    int n = 0;
    cin >> n;
    
    for (int i = 0; i < n; i ++)
        cin >> arr[i];
    
    
    vector<int> res;
    
    for (int i = 0; i < n; i ++){
        
        res.push_back(solve(n, i));
        
        sort(res.begin(), res.begin()+i+1);
        
        if (res.size() == n){
            cout << res[n-1] << endl;
            break;
        }
    }

}
