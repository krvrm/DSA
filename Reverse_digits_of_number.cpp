#include<iostream>
using namespace std;

int reverse(int n)
{
    int new_number=0;
    while(n>0)
    {
        int rem=n%10;
        new_number=10*new_number+rem;
        n=n/10;
    }
    return new_number;
    
}

int main()
{
    int n;
    cout << "Enter the number you want to reverse ";
    cin >> n;
    int reversed_number=reverse(n);
    cout << "The number reversed is " << reversed_number;
    return 0;

}