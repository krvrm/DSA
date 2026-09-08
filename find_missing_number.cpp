#include <iostream>
#include <vector>
using namespace std;

class missing_number
{
    public:
    int missing(vector<int> arr, int n)
    {
        int largest=n+1;
        int sum =0;
        for (int i = 0; i < n ; i++) 
        {
        sum += arr[i];
        }
        int real_sum=(largest*(largest+1))/2;
        return real_sum-sum;


    }

};
int main()
{
    int n;
    vector<int> arr;
    cout << " Enter the number of elements ";
    cin >> n;
    cout << " Enter the array elements ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    missing_number obj;
    int number=obj.missing(arr, n);
    cout <<"The missing number is" << number;
    
}
