#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main(){
    int n;
    int sumL = 0;
    int sumR = 0;
    int subtract = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
          if(a_i == a_j){
             sumL += a[a_i][a_j];
            }
           if(a_j + a_i == n-1){
           sumR+= a[a_i][a_j];
           }
        }
    }
    subtract = sumL - sumR;
    if(subtract < 0){
        subtract*=-1;
    }
    cout << subtract;
    return 0;
}
