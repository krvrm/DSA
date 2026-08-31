#include<iostream>
#include <algorithm>
using namespace std;

int findgcd(int n1,int n2)
{
    int gcd=1;

    if (n1==0 || n2==0)
    {
        return gcd=0;
    }
    
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int num1, num2;
    cout << "Enter the numbers which you want to find GCD of ";
    cin >> num1 >> num2;
    int gcd = findgcd(num1,num2);
    if(gcd==0)
    {
        cout << "GCD of zero does not exist ";
    }
    else
    {
        cout << "The GCD of the two numbers is " << gcd;
    }
    return 0;


}