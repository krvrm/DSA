#include<iostream>
#include<vector>
using namespace std;

class number_that_appears_once_2
{
    public:
    int appears_once(vector<int> arr, int n)
    {
        int xxor=0;
        for(int i=0;i<n;i++)
        {
            xxor = xxor^arr[i];

        }
        return xxor;
    }

};
int main()
{
    int n;
    vector<int> arr;
    cout << "Enter the number of elements in array";
    cin >> n;
    cout << "Enter the array";
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    number_that_appears_once_2 obj;
    int temp= obj.appears_once(arr, n);
     cout << temp;
    return 0;
}