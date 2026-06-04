#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int age;
    cin >> age;
    if (age > 18)
    { 
        cout << "You are adult";

    }
    else if (age == 18)
    {
        cout << "You just got adult";
    }
    else 
    { 
        cout << "Your are not an adult";

    }
return 0;
}