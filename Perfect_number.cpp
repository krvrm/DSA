#include<iostream>
using namespace std;
class Perfect_number
{
    public:
    int perfect(int n)
    {
        int sum=0;
        for(int i=0;i<=ceil(n/2);i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==n)
        {
            return true;
        }
        else{
            return false;
        }
    
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    Perfect_number obj;
    int result=obj.perfect(n);
    if(result)
    {
        cout<<"Perfect Number";
    }
    else{
        cout <<"Not Perfect Number";
    }
    
    return 0;
}