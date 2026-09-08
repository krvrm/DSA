#include<iostream>
#include<vector>
using namespace std;

class Union_sorted_arrays
{
    public:
    vector<int> Union(vector<int> arr1, int n, vector<int> arr2, int m )
    {
        int j=0;
        int i=0;
        vector<int> arr;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                if(arr.empty()||arr[arr.size()-1]!=arr1[i])
                {
                    arr.push_back(arr1[i]);
                }
                i++;
                
            }
            else if(arr1[i]>arr2[j])
            {
                if(arr.empty()||arr[arr.size()-1]!=arr2[j])
                {
                    arr.push_back(arr2[j]);
                }
                j++;
            }
            else
            {
                 if(arr.empty()||arr[arr.size()-1]!=arr2[j])
                {
                    arr.push_back(arr2[j]);
                }
                j++;i++;
            }
        }
        while(j<m)
        {
            if(arr.empty()||arr[arr.size()-1]!=arr2[j])
                {
                    arr.push_back(arr2[j]);
                }
                j++;
        }
        while(i<n)
        {
            if(arr.empty()||arr[arr.size()-1]!=arr1[i])
                {
                    arr.push_back(arr1[i]);
                }
                i++;
        }
        return arr;
    }
};

int main()
{
    int n,m,a;
    vector<int> arr1;
    vector<int> arr2;
    cout << "Enter the number of elements you want in array1";
    cin >> n;
    cout << "Enter the array1";
    for(int i=0;i<n;i++)
    {
        cin >> a;
        arr1.push_back(a); 

    }
    cout << "Enter the number of elements you want in array2";
    cin >> m;
    cout << "Enter the array2";
    for(int i=0;i<m;i++)
    {
        cin >> a;
        arr2.push_back(a); 

    }
    Union_sorted_arrays obj;
    vector<int> result = obj.Union(arr1, n, arr2, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;


}
