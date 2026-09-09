#include<iostream>
#include<vector>
using namespace std;

class count_maximum_consective_one
{
    public:
    int consective_ones(vector<int> arr, int n)
    {
        int i=0;
        int temp=0;
        while(i<n)
        {
            if(arr[i]==1)
            {
                temp++;
            }
            else{
                temp=0;
            }
            i++;

        }
        return temp;
    }

};

int main()
{
    int n;
    vector<int> arr;
    cout << "Enter the number of elements in array";
    cin >> n;
    cout << "Enter the array";
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    count_maximum_consective_one obj;
    int temp=obj.consective_ones(arr, n);
    cout << "The largest continous ones are" << temp;
    return 0;
}