#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int marks;
    cin >> marks;

if (marks <= 25)
{
    cout << "F";
}
else if (25 < marks < 44 )
{
    cout << "E";
}
else if (44 < marks < 49)
{
    cout << "D";
}
else if (49 < marks < 59)
{
    cout << "C";
}
else if (59 < marks < 79)
{
    cout << "B";
}
else if ( marks <= 100 && marks > 79)
{
    cout << "A";
}
else 
{
    cout << "Invalid input";
}
return 0;
}
