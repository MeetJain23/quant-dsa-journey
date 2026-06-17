#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1) 
        return false;       // 0 and 1 are not prime

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;   // divisible by something → not prime
    }
    return true;            // no divisor found → prime
}

int main()
{
    for(int i = 1; i <= 50; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}