#include<iostream>
using namespace std;
#include<vector>

int largest_element(vector<int> arr, int n )
{
    int max=0;
    for (int i =0;i<n;i++)
    {
        if(max<arr.at(i))
        {
            max=arr.at(i);
        }

    }
    return max;
}

int main()
{
    int n;
    vector<int> arr;
    cout <<"Enter the number of elements";
    cin >> n;
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int max=largest_element(arr,arr.size());
    cout <<"The largest element is " << max;
    return 0;
}