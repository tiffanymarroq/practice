#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    float pos = 0;
    float neg =0;
    float z = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i] > 0){
            pos++;
        }else if(arr[arr_i]<0){
            neg++;
        }else if(arr[arr_i]==0){
            z++;
        }
    }
    cout << fixed <<setprecision(6) << pos/n << endl<< neg/n << endl << z/n << endl;

    return 0;
}
