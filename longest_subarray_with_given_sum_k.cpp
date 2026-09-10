#include<iostream>
#include<vector>
using namespace std;

class longest_subarray_with_given_sum_k
{
    public:
    int subarray(vector<int> arr, int n,int k)
    {
        int left=0;int right=0;
        int sum=arr[0];
        int range =0;
        while(left<n)
        {
            sum=sum+arr[left];
            if (sum>k)
            {
                sum=sum-arr[right];
            }
            if(sum==k)
            {
                range=max(range, left-right+1);
                right++;
            }
            left++;
        }
        return range;
    }

};
int main()
{
    int n;
    vector<int> arr;
    int k;
    cout << "Enter the number of elements in array";
    cin >> n;
    cout << "Enter the array";
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter the sum value";
    cin >> k;
    longest_subarray_with_given_sum_k obj;
    int temp= obj.subarray(arr, n,k);
    cout << temp;
    return 0;
}