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
int palindrome(int n,int new_number)
{
    if(n==new_number)
    {
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter the number you want to check for palindrome ";
    cin >> n;
    int reversed_number=reverse(n);
    int result = palindrome(n,reversed_number);
    if (result==1)
    {
       cout << "The number " << n << " is palindrome";
    }
    else
    {
        cout << "The number " << n << " is not palindrome";
    }
    return 0;

}