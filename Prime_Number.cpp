#include<iostream>
using namespace std;
class Prime_number
{
    public:
    int prime(int n)
    {
        vector<int> arr;
        if(n<=1)
            {
                return false;
            }
        if(n==2)
            {
            return true;
            }
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    Prime_number obj;
    int result=obj.prime(n);
    if(result)
    {
        cout<<"Prime Number";
    }
    else{
        cout <<"Not Prime Number";
    }
    return 0;
}