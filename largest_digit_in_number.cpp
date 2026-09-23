#include<iostream>
using namespace std;
class largest_digit_in_number
{
    public:
    int largest(int n)
    {
        int max=0;
        while(n>0)
        {
        int rem=n%10;
        if(rem>max)
        {
            max=rem;
        }
        n=n/10;
    }
    return max;
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    largest_digit_in_number obj;
    int result=obj.largest(n);
    cout << result;
    return 0;
}