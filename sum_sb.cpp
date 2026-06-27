
#include <bits/stdc++.h>
using namespace std;

int sumOfMax(vector<int>& arr) {
    int n = arr.size();
    int res = 0;

    for (int i = 0; i < n; ++i) {
        int currMax = arr[i];
        
        for (int j = i; j < n; ++j) {
          
            currMax = max(currMax, arr[j]);  
            res += currMax;          
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {1, 3, 2};
    cout << sumOfMax(arr) << endl;
    return 0;
}