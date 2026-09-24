//Sieve of Eratosthenes
#include<iostream>
using namespace std;
class count_primes_till_n
{
    public:
    vector<bool> prime(int n)
    {
        vector<bool> arr(n+1,true);
        arr[0]=false;
        arr[1]=false;
        for(int i=2;i*i<=n;i++)
        {
            if(arr[i])
            {
                for(int j=i*i;j<=n;j=j+i)
                {
                    arr[j]=false;
                }
            }
        }
        return arr;
    }
};
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    count_primes_till_n obj;
    vector<bool> result=obj.prime(n);
    for(int i = 2; i <= n; i++)
    {
        if(result[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}