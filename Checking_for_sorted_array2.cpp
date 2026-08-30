#include<iostream>
using namespace std;

int check_sort(int n,vector<int> arr)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr.at(i)<=arr.at(i+1))
        {
            return true;
        }
        return false;

    }


}
int  main()
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
    int sorted=check_sort(n,arr);
    if (sorted==true)
    {
        cout << "The array is sorted";
    }
    else{
        cout << "The array is not sorted";
    }
    return 0;
}
