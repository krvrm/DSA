#include<iostream>
using namespace std;
#include<vector>

int Binary_search (int first, int last,int target, vector<int>& arr )
{
    if(first>last)
    {
        return -1;
    }
    int mid= first+last/2;
    if(target>arr.at(mid))
    {
       return Binary_search(mid+1,last,target,arr);
    }
    else if(target<arr.at(mid))
    {
       return Binary_search(first,mid-1,target,arr);
    }
    else
    {
        return mid;
    }

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
    int result= Binary_search(0,n-1,target,arr);
    if(result != -1)
    {
        cout << "The element is at index " << result;
    }
    else
    {
        cout << "Element not found";
    }
 }
