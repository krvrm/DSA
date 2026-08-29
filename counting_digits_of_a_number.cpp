#include <iostream>
using namespace std;

int number=0;
int count(int x)
{
    if(x==0)
    {
        number=1;
    }
    while(x>=1)
    {       
        x=x/10;
        number=number+1;
        
    }
    return number;
}

int main()
{
    int x;
    int digits;
    cout << "Enter a number";
    cin >> x;
    digits =count(x);
    cout << "The number of digits in the number is" << digits;

}

