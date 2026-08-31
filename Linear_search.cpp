#include<iostream>
using namespace std;
#include<vector>

int linear_search(int n, vector<int> arr,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr.at(i)==target)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    vector<int> arr;
    int target;
    cout << " Enter the number of elements ";
    cin >> n;
    cout << " Enter the array elements ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    cout<< "Enter the element";
    cin >> target;
    int result= linear_search(n,arr,target);
    if (result!=0)
    {
        cout << "The element was found at index " << result;
        /* code */
    }
    else{
        cout << "The element is not there";
    }
    return 0;
}