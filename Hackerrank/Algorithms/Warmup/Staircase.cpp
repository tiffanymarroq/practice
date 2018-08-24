#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <vector <string> > a(n,vector<string>(n));
    for(int i = 0; i < n; i++){
       for(int j= n-1; j >=0; j--){

           if(j<=i){
               a[i][j]= "#";
           }else{
               a[i][j] = " ";
           }
           cout<<a[i][j];
       }
        cout<<endl;
    }

    return 0;
}
