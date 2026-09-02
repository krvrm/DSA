#include<iostream>
using namespace std;
#include<vector>

class Zero_at_front
{
 public:
 int zero_end(vector<int>& arr, int n)
  {
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        if(arr[j]!=0)
        {
            j--;
        }
        if(arr[i]!=0 && arr[j]==0)
        {
            swap(arr[i], arr[j]);
            j--;
            i++;
        }
    }

 }
};

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
    Zero_at_front object;
    object.zero_end(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }

    return 0;
}
// Enter the number of elements 8
//Enter the elements 0 1 2 3 0 4 0 8
//00302418