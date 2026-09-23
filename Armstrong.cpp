#include<iostream>
using namespace std;
class Armstrong
{
    public:
    int a_strong(int n)
    {
        int count=0;
        int sum=0;
        int rem;
        int copy=n;
        while(copy>0)
        {
            copy=copy/10;
            count++;
        }
        while(n>0)
        {
            rem=n%10;
            sum=sum+(pow(rem,count));
            n=n/10;

        }
    return sum;
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    Armstrong obj;
    int result=obj.a_strong(n);
    if(result==n)
    {
        cout<<"Number is Armstrong";
    }
    else{
        cout <<"Number is not armstrong";
    }
    
    return 0;
}