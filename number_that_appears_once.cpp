#include<iostream>
#include<vector>
using namespace std;

class number_that_appears_once
{
    public:
    int appears_once(vector<int> arr, int n)
    {
        for(int i=0;i<n;i++)
        {
            bool found=false;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    found=true;
                    break;
                }
            }
            if (found== false)
            {
                return arr[i];
            }

        }
        return -1;
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
    number_that_appears_once obj;
    int temp= obj.appears_once(arr, n);
     cout << temp;
    return 0;
}