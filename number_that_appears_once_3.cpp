#include <vector>
#include <iostream>
using namespace std;

class number_that_appears_once_3
{
    public:
    int max=0;
    int appears_once(vector<int> arr, int n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
               max=arr[i];
            }
        }
        vector<int> hash(max+1,0);
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(hash[arr[i]]==1){
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
    number_that_appears_once_3 obj;
    int temp= obj.appears_once(arr, n);
    cout << temp;
    return 0;
}