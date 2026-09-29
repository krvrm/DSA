//1
//22
//333
//4444
//55555
#include<iostream>
using namespace std;

int pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << i;
            
        }
        cout << endl;
    }
    return -1;
}
int main()
{
    int n=5;
    pattern(n);
    return 0;
}