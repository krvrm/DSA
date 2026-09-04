#include<iostream>
#include<vector>
using namespace std;

class Merge_sorted_arrays
{
    public:
    vector<int> Union (int arr1[], int arr2[], int n, int m)
    {
        int i=0;
        int j=0;
        int k=0;
        vector<int> arr;
        while(i<n && j<m)
     {
        if (arr1[i]>arr2[j])
        {
            if (arr.empty() || arr.back() != arr2[j])
            {
                arr.push_back(arr2[j]); 
            }
            j++;
        }
        else if (arr1[i]<arr2[j])
        {
            if (arr.empty() || arr.back() != arr2[j])
            {
                arr.push_back(arr1[i]); 
            }
            i++;
        }
        else{
            if (arr.empty() || arr.back() != arr1[i]){
                    arr.push_back(arr1[i]);
            }
            i++;
            j++;
            
        }
    }
        while (i < n) {
            if (arr.empty() || arr.back() != arr1[i])
                arr.push_back(arr1[i]);
            i++;
        }
        while (j < m) {
            if (arr.empty() || arr.back() != arr2[j])
                arr.push_back(arr2[j]);
            j++;
        }
        return arr;
    }
    
};
/*int main()
{
    int n,m;
    vector<int> arr1;
    vector<int> arr2;
    cout <<"Enter the number of elements";
    cin >> n;
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr1.push_back(a);
    }
    Merge_sorted_arrays object;
    object.Union(arr1,arr2,n,m);
    for(int i=0;i<n;i++)
    {
        cout << arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << arr2[i];
    }

    return 0;
}*/
int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n = 10, m = 7;

    Merge_sorted_arrays obj;
    vector<int> result = obj.Union(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) cout << val << " ";
    return 0;
}