// similar data types being stored multiple times in a single variable
#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int a;
    int b;
    cin >> a >> b;
    
string str[] = { "","one" , "two" ,"three" , "four", "five" , "six" , "seven" , "eight" ,"nine"};

for (int i=a; i<=b;i++)
{
    if(i>=1 && i<=9)
    {
        cout << str[i] << endl;
    }
    else
    {
        if(i%2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    
    
    
}



    return 0;
}