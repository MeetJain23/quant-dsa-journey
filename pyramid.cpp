
//     ***1
//     **12       1**
//     *123       21*
//     1234       321

        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            int num = 1;
          int n=4;  
          int h=3;
          for(int i=0;i<n;i++)
          {
            for(int j=3; j>=0; j--)
            {
                cout << "*";
            }
            for(int j=1; j<i+1; j++)
            {
            cout << j;
            cout << endl;
            }
            for(int j=0;j<h; j++)
            {
                cout << num;
                num++;
            }
            for(int j = 2;j<=0; j--)
            {
                cout << "*";
            }

          }



        }