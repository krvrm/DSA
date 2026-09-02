#include<iostream>
using namespace std;
#include<vector>

class Zero_at_front
{
 public:
 int zero_end(vector<int>& arr, int n)
  {
    int i=0;
    while(arr[i]!=0)
    {
        i++;
    }
    
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i], arr[j]);
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
//Enter the number of elements8
//Enter the elements0 1 2 3 0 4 0 8
//12348000