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

int second_largest_element(vector<int> arr, int n ,int max)
{
    int second_max=0;
    for (int i =0;i<n;i++)
    {
        
        if (second_max < arr.at(i))
        {
            if (arr[i] == max)
            {
                continue;
            }
            else
            {
                second_max = arr.at(i);
            }
        }
        
    }
    return second_max;
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
    int second_max=second_largest_element(arr,arr.size(),max);
    cout <<"The second largest element is " << second_max;
    return 0;
}