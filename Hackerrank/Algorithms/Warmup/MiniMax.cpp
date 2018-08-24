#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);

    long sum= 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
       sum += arr[arr_i];
    }

    sort(arr.begin(),arr.end());

    cout << sum - arr[4] << " " << sum - arr[0];
    return 0;
}
