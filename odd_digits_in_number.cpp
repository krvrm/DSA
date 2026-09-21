#include<iostream>
using namespace std;
class odd_digits_in_number
{
    public:
    int odd_digits(int n)
    {
        int count=0;
        while(n>0)
        {
        int rem=n%10;
        if(rem%2==1)
        {
            count++;
        }
        n=n/10;
        }
        return count;
    }


};
int main()
{
    int n=123865;
    odd_digits_in_number obj;
    int count=obj.odd_digits(n);
    cout << count;

}