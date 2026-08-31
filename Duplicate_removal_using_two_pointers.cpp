#include<iostream>
using namespace std;
#include<vector>

class Duplicates{
    public:
    int Duplicates_removal(vector<int>& nums)
    {
        if(nums.empty()) return 0;
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }

};

int main() {
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
    

    Duplicates sol;
    int k = sol.Duplicates_removal(arr);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << arr[x] << " ";
    }
    cout << endl;
}

    
