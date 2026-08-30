#include<iostream>
using namespace std;

int check_sort(int n,vector<int> arr)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr.at(i)<=arr.at(i+1))
        {
            count=count+1;
        }

    }
    if(count==(n-1))
    {   
        return 1;
    }
    else
    {
        return 0;
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
    if (sorted==1)
    {
        cout << "The array is sorted";
    }
    else{
        cout << "The array is not sorted";
    }
    return 0;
}
