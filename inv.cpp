//inverted loop

#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int num = 1;
        int n = 4;
        for(int i=0;i<n;i++)
        {
            for(int j = 0; j<i; j++)
            {
                cout << " ";
            }
            for(int j=n; j>i; j--)
            {
                cout << num;
            }
            cout << endl;
            num++;
        }
return 0;
    }