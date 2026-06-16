#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n = 4;
    char ch = 'A';
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i+1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }

{
    int n = 4;
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 1; j<i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        ch++;
    }

}

{
    int n = 4;
    
    for(int i = 0; i<n; i++)
    {
        for(int j = n; j>i-1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


{
    int n = 4;
    
    for(int i = 0; i<n; i++)
    {
        for(int j = i +1; j>0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
}

{
    int n = 4;
    int num = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
    return 0;
}