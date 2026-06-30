#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreater(vector<int> &arr) {
    int n = arr.size();

    vector<int> res(n, -1);
    for (int i = 0; i < n; i++) {

        for (int j = 1; j < n; j++) {

            if (arr[i] < arr[(i + j)%n]) {
                res[i] = arr[(i + j)%n];
                break;
            }
        }
    }

    return res;
}

int main() {
    vector<int> arr = {5, 7, 1, 2, 6};
    vector<int> ans = nextGreater(arr);
    for(auto i:ans) {
        cout<<i<<" ";
    }
    return 0;
}