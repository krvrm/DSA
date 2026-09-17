// Enter the rows ans columns5
//*****
//*****
//*****
//*****
//*****


#include<iostream>
using namespace std;
 int pattern(int num)
 {
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout << "*";
        }
        cout << endl;
    }

 }
 int main()
 {
    cout<<" Enter the rows ans columns";
    int num;
    cin >> num;
    pattern(num);
    return 0;
 }