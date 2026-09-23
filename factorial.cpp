#include<iostream>
using namespace std;
class factorial
{
    public:
    int fact(int n)
    {
        int factorial=1;
        if(n==0 || n==1)
        {
            factorial=1;
        }
        else
        {
        for(int i=n;i>0;i--)
        {
            factorial=factorial*i;
        
        }
        }
    return factorial;
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    factorial obj;
    int result=obj.fact(n);
    cout << result;
    return 0;
}