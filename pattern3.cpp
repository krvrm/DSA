//1
//12
//123
//1234
//12345

#include<iostream>
using namespace std;
 int pattern(int num)
 {
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j;
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