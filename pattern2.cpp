
#include<iostream>
using namespace std;
 int pattern(int num)
 {
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return -1;
 }
 int main()
 {
    int num = 5;
    pattern(num);
    return 0;
 }