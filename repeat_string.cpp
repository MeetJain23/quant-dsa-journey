
#include<iostream>
using namespace std;

char maxRepeating(string s) {
    int n = s.length();
    int maxCnt = 0;
    char res = s[0];
  
    for (int i=0; i<n; i++) {
        int cnt = 0;
        for (int j=i; j<n; j++) {
            if (s[i] != s[j])
                break;
            cnt++;
        }

        if (cnt > maxCnt) {
            maxCnt = cnt;
            res = s[i];
        }
    }
    
    return res;
}

int main() {

    string s = "aaaabbaaccde";
    cout << maxRepeating(s);
    return 0;
}