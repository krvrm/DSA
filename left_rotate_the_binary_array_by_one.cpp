#include<vector>
#include<iostream>
using namespace std;

class LeftRotate
{
    public:
    int left_rotate(int n, vector<int>& arr)
    {
        int temp= arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
            arr[n-1]=temp;

    }

};

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
    
    LeftRotate object;
    object.left_rotate(n, arr);
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
    return 0;
}


